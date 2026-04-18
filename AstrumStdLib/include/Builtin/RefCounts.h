#pragma once
#include <assert.h>
#include <stddef.h>

#include <atomic>

#include "CompilerUtils.h"

namespace CppAdvance {
	class Object;
	class ObjectSideTable;

	extern void DeinitObject(Object* obj);

	template <bool Inline, bool Is64Bit>
	struct RefCountBitsType;

	template <bool Inline>
	struct RefCountBitsType<Inline, true> {
		using uint = uint64_t;
		using sint = int64_t;
	};

	template <>
	struct RefCountBitsType<true, false> {
		using uint = uint32_t;
		using sint = int32_t;
	};

	template <>
	struct RefCountBitsType<false, false> {
		using uint = uint64_t;
		using sint = int64_t;
	};

#define FIELD_MASK(name) (((uint64_t(1) << name##BitCount) - 1) << name##Shift)
#define FIELD_SHIFT(name) (name##Shift + name##BitCount)

	template <bool Is64Bit>
	struct RefCountBitOffsets;

	template <>
	struct RefCountBitOffsets<true> {
		static const size_t IsStackAllocShift    = 0;
		static const size_t IsStackAllocBitCount = 1;
		static const uint64_t IsStackAllocMask   = FIELD_MASK(IsStackAlloc);

		static const size_t UnownedRefCountShift    = 1;
		static const size_t UnownedRefCountBitCount = 31;
		static const uint64_t UnownedRefCountMask   = FIELD_MASK(UnownedRefCount);

		static const size_t IsImmortalShift    = 1;
		static const size_t IsImmortalBitCount = 31;
		static const uint64_t IsImmortalMask   = FIELD_MASK(IsImmortal);

		static const size_t IsDeinitingShift    = FIELD_SHIFT(UnownedRefCount);
		static const size_t IsDeinitingBitCount = 1;
		static const uint64_t IsDeinitingMask   = FIELD_MASK(IsDeiniting);

		static const size_t StrongExtraRefCountShift    = FIELD_SHIFT(IsDeiniting);
		static const size_t StrongExtraRefCountBitCount = 30;
		static const uint64_t StrongExtraRefCountMask   = FIELD_MASK(StrongExtraRefCount);

		static const size_t UseSlowRCShift    = FIELD_SHIFT(StrongExtraRefCount);
		static const size_t UseSlowRCBitCount = 1;
		static const uint64_t UseSlowRCMask   = FIELD_MASK(UseSlowRC);

		static const size_t SideTableShift         = 0;
		static const size_t SideTableBitCount      = 62;
		static const uint64_t SideTableMask        = FIELD_MASK(SideTable);
		static const size_t SideTableUnusedLowBits = 3;
	};

	// 32-bit inline
	template <>
	struct RefCountBitOffsets<false> {
		static const size_t IsStackAllocShift    = 0;
		static const size_t IsStackAllocBitCount = 1;
		static const uint64_t IsStackAllocMask   = FIELD_MASK(IsStackAlloc);

		static const size_t UnownedRefCountShift    = 1;
		static const size_t UnownedRefCountBitCount = 8;
		static const uint32_t UnownedRefCountMask   = FIELD_MASK(UnownedRefCount);

		static const size_t IsImmortalShift    = 1;
		static const size_t IsImmortalBitCount = 8;
		static const uint32_t IsImmortalMask   = FIELD_MASK(IsImmortal);

		static const size_t IsDeinitingShift    = FIELD_SHIFT(UnownedRefCount);
		static const size_t IsDeinitingBitCount = 1;
		static const uint32_t IsDeinitingMask   = FIELD_MASK(IsDeiniting);

		static const size_t StrongExtraRefCountShift    = FIELD_SHIFT(IsDeiniting);
		static const size_t StrongExtraRefCountBitCount = 21;
		static const uint32_t StrongExtraRefCountMask   = FIELD_MASK(StrongExtraRefCount);

		static const size_t UseSlowRCShift    = FIELD_SHIFT(StrongExtraRefCount);
		static const size_t UseSlowRCBitCount = 1;
		static const uint32_t UseSlowRCMask   = FIELD_MASK(UseSlowRC);

		static const size_t SideTableShift         = 0;
		static const size_t SideTableBitCount      = 30;
		static const uint32_t SideTableMask        = FIELD_MASK(SideTable);
		static const size_t SideTableUnusedLowBits = 2;
	};

	template <bool Inline>
	class RefCountBits {
		friend class RefCountBits<true>;
		friend class RefCountBits<false>;

		static constexpr bool IsInline = Inline;
		using BitsType       = typename RefCountBitsType<Inline, sizeof(void*) == 8>::uint;
		using SignedBitsType = typename RefCountBitsType<Inline, sizeof(void*) == 8>::sint;
		using Offsets        = typename RefCountBitOffsets<sizeof(void*) == 8>;

		BitsType bits;

#define getFieldIn(bits, offsets, name) ((bits & offsets::name##Mask) >> offsets::name##Shift)
#define setFieldIn(bits, offsets, name, val)                                                       \
	bits = ((bits & ~offsets::name##Mask) |                                                        \
	        (((BitsType(val) << offsets::name##Shift) & offsets::name##Mask)))

#define getField(name) getFieldIn(bits, Offsets, name)
#define setField(name, val) setFieldIn(bits, Offsets, name, val)
#define copyFieldFrom(src, name)                                                                   \
	setFieldIn(bits, Offsets, name, getFieldIn(src.bits, decltype(src)::Offsets, name))

		FORCE_INLINE bool isUseSlowRC() const { return bool(getField(UseSlowRC)); }
		FORCE_INLINE void setUseSlowRC(bool value) { setField(UseSlowRC, value); }

	   public:
		struct ImmortalTag {};
		struct StackAllocTag {};
		FORCE_INLINE RefCountBits() = default;

		FORCE_INLINE constexpr RefCountBits(unsigned strong, unsigned unowned)
		    : bits((BitsType(strong) << Offsets::StrongExtraRefCountShift) |
		           (BitsType(unowned) << Offsets::UnownedRefCountShift)) {}

		FORCE_INLINE constexpr RefCountBits(ImmortalTag)
		    : bits((BitsType(2) << Offsets::StrongExtraRefCountShift) |
		           (BitsType(Offsets::IsImmortalMask)) | (BitsType(1) << Offsets::UseSlowRCShift)) {
		}

		FORCE_INLINE constexpr RefCountBits(StackAllocTag)
		    : bits(BitsType(1) << Offsets::IsStackAllocShift |
		           (BitsType(1) << Offsets::UnownedRefCountShift)) {}

		FORCE_INLINE constexpr RefCountBits(ObjectSideTable* table)
		    : bits((reinterpret_cast<BitsType>(table) >> Offsets::SideTableUnusedLowBits) |
		           (BitsType(1) << Offsets::UseSlowRCShift)) {
			static_assert(Inline);
		}

		FORCE_INLINE RefCountBits(const RefCountBits<true>* pNewBits) {
			bits = 0;

			assert(pNewBits && "expected non null newbits");
			RefCountBits<true> newBits = *pNewBits;
			if (Inline || sizeof(newBits) == sizeof(*this)) {
				bits = newBits.bits;
			} else {
				copyFieldFrom(newBits, IsStackAlloc);
				copyFieldFrom(newBits, UnownedRefCount);
				copyFieldFrom(newBits, IsDeiniting);
				copyFieldFrom(newBits, StrongExtraRefCount);
				copyFieldFrom(newBits, UseSlowRC);
			}
		}

		FORCE_INLINE bool isImmortal(bool checkSlowRC) const {
			if (checkSlowRC) {
				return (getField(IsImmortal) == Offsets::IsImmortalMask) &&
				       bool(getField(UseSlowRC));
			}
			return (getField(IsImmortal) == Offsets::IsImmortalMask);
		}

		FORCE_INLINE void setImmortal() {
			setField(IsImmortal, Offsets::IsImmortalMask);
			setField(UseSlowRC, true);
		}

		FORCE_INLINE bool isStackAlloc() const { return unsigned(getField(IsStackAlloc)); }

		FORCE_INLINE void setStackAlloc() { setField(IsStackAlloc, true); }

		FORCE_INLINE bool isOverflowingUnownedCount(unsigned old, unsigned inc) const {
			auto newVal = getUnownedCount();
			return newVal != old + inc || newVal == Offsets::UnownedRefCountMask;
		}

		FORCE_INLINE bool hasSideTable() const {
			bool hasSide = isUseSlowRC() && !isImmortal(false);
			assert((Inline || !hasSide) &&
			       "side table refcount must not have a side table entry of its own");
			return hasSide;
		}

		FORCE_INLINE ObjectSideTable* getSideTable() const {
			assert(hasSideTable());
			return reinterpret_cast<ObjectSideTable*>(size_t(getField(SideTable))
			                                          << Offsets::SideTableUnusedLowBits);
		}

		FORCE_INLINE void setHasSideTable(bool value) {
			bits = 0;
			setUseSlowRC(value);
		}

		FORCE_INLINE void setSideTable(ObjectSideTable* table) {
			assert(hasSideTable());
			uintptr_t value       = reinterpret_cast<uintptr_t>(table);
			uintptr_t storedValue = value >> Offsets::SideTableUnusedLowBits;
			assert(storedValue << Offsets::SideTableUnusedLowBits == value);
			setField(SideTable, storedValue);
		}

		FORCE_INLINE unsigned getUnownedCount() const {
			assert(!hasSideTable());
			return unsigned(getField(UnownedRefCount));
		}

		FORCE_INLINE unsigned getStrongExtraCount() const {
			assert(!hasSideTable());
			return unsigned(getField(StrongExtraRefCount));
		}

		FORCE_INLINE bool isDeiniting() const {
			assert(!hasSideTable());
			return unsigned(getField(IsDeiniting));
		}

		FORCE_INLINE void setUnownedCount(unsigned value) {
			assert(!hasSideTable());
			setField(UnownedRefCount, value);
		}

		FORCE_INLINE void setStrongExtraCount(unsigned value) {
			assert(!hasSideTable());
			setField(StrongExtraRefCount, value);
		}

		FORCE_INLINE void setIsDeiniting(bool value) {
			assert(!hasSideTable());
			setField(IsDeiniting, value);
		}

		FORCE_INLINE bool incStrongExtraRefCount(unsigned inc) {
			bits += BitsType(inc) << Offsets::StrongExtraRefCountShift;
			return (SignedBitsType(bits) >= 0);
		}

		FORCE_INLINE bool decStrongExtraRefCount(unsigned dec) {
#ifndef NDEBUG
			if (!hasSideTable() && !isImmortal(false)) {
				if (isDeiniting())
					assert(getStrongExtraCount() >= dec &&
					       "releasing reference whose refcount is already zero");
				else
					assert(getStrongExtraCount() + 1 >= dec &&
					       "releasing reference whose refcount is already zero");
			}
#endif

			bits -= BitsType(dec) << Offsets::StrongExtraRefCountShift;
			return (SignedBitsType(bits) >= 0);
		}

		FORCE_INLINE unsigned incUnownedRefCount(unsigned inc) {
			unsigned old = getUnownedCount();
			setUnownedCount(old + inc);
			return old;
		}

		FORCE_INLINE void decUnownedRefCount(unsigned dec) {
			setUnownedCount(getUnownedCount() - dec);
		}

		FORCE_INLINE bool isUnique() {
			static_assert(Offsets::IsStackAllocBitCount + Offsets::UnownedRefCountBitCount +
			                      Offsets::IsDeinitingBitCount +
			                      Offsets::StrongExtraRefCountBitCount +
			                      Offsets::UseSlowRCBitCount ==
			                  sizeof(bits) * 8,
			              "inspect isUnique after adding fields");

			return !isUseSlowRC() && !isDeiniting() && getStrongExtraCount() == 0;
		}

		FORCE_INLINE BitsType getBits() { return bits; }

#undef getFieldIn
#undef setFieldIn
#undef getField
#undef setField
#undef copyFieldFrom
	};

#undef FIELD_MASK
#undef FIELD_SHIFT

	using InlineRefCountBits = RefCountBits<true>;

	class alignas(sizeof(void*) * 2) SideTableRefCountBits : public RefCountBits<false> {
		unsigned weakBits;

	   public:
		FORCE_INLINE SideTableRefCountBits() = default;

		FORCE_INLINE SideTableRefCountBits(unsigned strong, unsigned unowned)
		    : RefCountBits<false>(strong, unowned), weakBits(1) {}

		FORCE_INLINE SideTableRefCountBits(ObjectSideTable* table) = delete;

		FORCE_INLINE SideTableRefCountBits(InlineRefCountBits bits)
		    : RefCountBits<false>(&bits), weakBits(1) {}

		FORCE_INLINE void incWeakCount() { weakBits++; }

		FORCE_INLINE bool decWeakCount() {
			assert(weakBits > 0);
			weakBits--;
			return weakBits == 0;
		}

		FORCE_INLINE unsigned getWeakCount() { return weakBits; }

		FORCE_INLINE bool hasSideTable() { return false; }
	};

	template <class Bits>
	class RefCounts {
		std::atomic<Bits> _refCount;

		CPPADVANCE_DLLEXPORT Object* incrementSlow(Bits old, unsigned inc);
		CPPADVANCE_DLLEXPORT void incrementNonAtomicSlow(Bits old, unsigned inc);
		CPPADVANCE_DLLEXPORT bool tryIncrementSlow(Bits old);
		CPPADVANCE_DLLEXPORT bool tryIncrementNonAtomicSlow(Bits old);
		CPPADVANCE_DLLEXPORT void incrementUnownedSlow(unsigned inc);

		template <bool PerformDeinit>
		bool doDecrementSideTable(Bits old, unsigned dec);

		template <bool PerformDeinit>
		bool doDecrementNonAtomicSideTable(Bits old, unsigned dec);

		template <bool PerformDeinit>
		bool doDecrementSlow(Bits old, unsigned dec) {
			Bits newBits;

			if (dec != 1 && old.isImmortal(true)) {
				return false;
			}

			bool needDeinit;
			do {
				newBits   = old;
				bool fast = newBits.decStrongExtraRefCount(dec);

				if (fast) {
					needDeinit = false;
				} else if (old.isImmortal(false)) {
					return false;
				} else if (old.hasSideTable()) {
					return doDecrementSideTable<PerformDeinit>(old, dec);
				} else {
					needDeinit = true;
					assert(!old.isDeiniting());
					newBits = old;
					newBits.setStrongExtraCount(0);
					newBits.setIsDeiniting(true);
				}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_release,
			                                          std::memory_order_relaxed));

			if (PerformDeinit && needDeinit) {
				std::atomic_thread_fence(std::memory_order_acquire);
				// TODO custom allocator
				DeinitObject(getObject());
			}

			return needDeinit;
		}

		template <bool PerformDeinit>
		bool doDecrementNonAtomicSlow(Bits old, unsigned dec) {
			Bits newBits;

			if (dec != 1 && old.isImmortal(true)) {
				return false;
			}

			bool needDeinit;
			newBits   = old;
			bool fast = newBits.decStrongExtraRefCount(dec);

			if (fast) {
				needDeinit = false;
			} else if (old.isImmortal(false)) {
				return false;
			} else if (old.hasSideTable()) {
				return doDecrementNonAtomicSideTable<PerformDeinit>(old, dec);
			} else {
				needDeinit = true;
				assert(!old.isDeiniting());
				newBits = old;
				newBits.setStrongExtraCount(0);
				newBits.setIsDeiniting(true);
			}
			_refCount.store(newBits, std::memory_order_relaxed);

			if (PerformDeinit && needDeinit) {
				DeinitObject(getObject());
			}

			return needDeinit;
		}

		Object* getObject();
		ObjectSideTable* allocateSideTable(bool failIfDeiniting);

	   public:
		struct InitTag {};
		struct ImmortalTag {};

		RefCounts() = default;
		constexpr RefCounts(InitTag) : _refCount(Bits(0, 1)) {}

		void init() { _refCount.store(Bits(0, 1), std::memory_order_relaxed); }

		void stackInit() { _refCount.store(Bits::StackAllocTag(), std::memory_order_relaxed); }

		void immortalInit() { _refCount.store(Bits::ImmortalTag(), std::memory_order_relaxed); }

		void init(InlineRefCountBits bits) { _refCount.store(bits, std::memory_order_relaxed); }

		void setImmortal(bool value) {
			auto old = _refCount.load(std::memory_order::consume);
			if (old.isImmortal(true))
				return;

			Bits newBits;
			do {
				newBits = old;
				newBits.setImmortal(value);
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
		}

		FORCE_INLINE Object* increment(Object* returning, unsigned inc = 1) {
			auto old = _refCount.load(std::memory_order::consume);
			// if (inc != 1 && old.isImmortal(true)) return getObject();
			if (old.isStackAlloc()) {
				incrementNonAtomic(old, inc);
				return returning;
			}

			Bits newBits;
			do {
				newBits   = old;
				bool fast = newBits.incStrongExtraRefCount(inc);
				if (!fast)
					UNLIKELY {
						if (old.isImmortal(false))
							return getObject();
						return incrementSlow(old, inc);
					}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
			return returning;
		}

		FORCE_INLINE void incrementNonAtomic(Bits old, unsigned inc = 1) {
			Bits newBits = old;
			bool fast    = newBits.incStrongExtraRefCount(inc);
			if (!fast)
				UNLIKELY {
					if (old.isImmortal(false))
						return;
					return incrementNonAtomicSlow(old, inc);
				}
			_refCount.store(newBits, std::memory_order_relaxed);
		}

		FORCE_INLINE bool tryIncrement() {
			auto old = _refCount.load(std::memory_order::consume);

			Bits newBits;
			do {
				if (!old.hasSideTable() && old.isDeiniting())
					return false;

				newBits   = old;
				bool fast = newBits.incStrongExtraRefCount(1);
				if (!fast)
					UNLIKELY {
						if (old.isImmortal(false))
							return true;
						return tryIncrementSlow(old);
					}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
			return true;
		}

		FORCE_INLINE bool tryIncrementNonAtomic() {
			auto old = _refCount.load(std::memory_order::consume);

			if (!old.hasSideTable() && old.isDeiniting())
				return false;

			Bits newBits = old;
			bool fast    = newBits.incStrongExtraRefCount(1);
			if (!fast)
				UNLIKELY {
					if (old.isImmortal(false))
						return true;
					return tryIncrementNonAtomicSlow(old);
				}
			_refCount.store(newBits, std::memory_order_relaxed);
			return true;
		}

		FORCE_INLINE bool decrementShouldDeinit(unsigned dec) { return doDecrement<false>(dec); }

		FORCE_INLINE bool decrementShouldDeinitNonAtomic(unsigned dec) {
			return doDecrementNonAtomic<false>(dec);
		}

		FORCE_INLINE void decrementAndDeinit(unsigned dec) { doDecrement<true>(dec); }

		FORCE_INLINE void decrementAndDeinitNonAtomic(unsigned dec) {
			doDecrementNonAtomic<true>(dec);
		}

		FORCE_INLINE void decrementFinalNonAtomic() {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.isImmortal(true))
				return;

			if (bits.hasSideTable()) {
				return bits.getSideTable()->decrementFinalNonAtomic();
			}

			assert(!bits.isDeiniting());
			assert(bits.getStrongExtraCount() == 0 && "Expect a refcount of 1");

			bits.setStrongExtraCount(0);
			bits.setIsDeiniting(true);
			_refCount.store(bits, std::memory_order_relaxed);
		}

		unsigned getCount() const {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.hasSideTable()) {
				return bits.getSideTable()->getCount();
			}

			return bits.getStrongExtraCount() + 1;
		}

		bool isUnique() const {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.hasSideTable()) {
				return bits.getSideTable()->isUnique();
			}

			assert(!bits.isDeiniting());
			return bits.isUnique();
		}

		bool isDeiniting() const {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.hasSideTable()) {
				return bits.getSideTable()->isDeiniting();
			}

			return bits.isDeiniting();
		}

		bool isStackAlloc() const {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.hasSideTable()) {
				return bits.getSideTable()->isStackAlloc();
			}

			return bits.isStackAlloc();
		}

		bool hasSideTable() const {
			auto bits = _refCount.load(std::memory_order::consume);
			return bits.hasSideTable();
		}

		void* getSideTable() const {
			auto bits = _refCount.load(std::memory_order::consume);
			if (bits.hasSideTable()) {
				return bits.getSideTable();
			}

			return nullptr;
		}

		bool canBeFreed() const {
			auto bits = _refCount.load(std::memory_order::consume);
			return (!bits.hasSideTable() && bits.isDeiniting() && !bits.isStackAlloc() &&
			        bits.getStrongExtraCount() == 0 && bits.getUnownedCount() == 1);
		}

		template <bool PerformDeinit>
		FORCE_INLINE bool doDecrement(unsigned dec) {
			auto old = _refCount.load(std::memory_order::consume);
			if (old.isStackAlloc()) {
				return doDecrementNonAtomic<false>(old, dec);
			}
			Bits newBits;

			/*if (dec != 1 && old.isImmortal(true))
			{
			    return false;
			}*/

			do {
				newBits   = old;
				bool fast = newBits.decStrongExtraRefCount(dec);

				if (!fast)
					UNLIKELY {
						if (old.isImmortal(false)) {
							return false;
						}

						return doDecrementSlow<PerformDeinit>(old, dec);
					}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_release,
			                                          std::memory_order_relaxed));
			return false;
		}

		template <bool PerformDeinit>
		bool doDecrementNonAtomic(Bits old, unsigned dec);

		void incrementUnowned(unsigned inc) {
			auto old = _refCount.load(std::memory_order::consume);
			if (old.isImmortal(true))
				return;
			if (old.isStackAlloc()) {
				incrementUnownedNonAtomic(old, inc);
				return;
			}

			Bits newBits;
			do {
				if (old.hasSideTable()) {
					return old.getSideTable()->incrementUnowned(inc);
				}

				newBits = old;
				assert(newBits.getUnownedCount() != 0);
				unsigned oldValue = newBits.incUnownedRefCount(inc);
				if (newBits.isOverflowingUnownedCount(oldValue, inc)) {
					return incrementUnownedSlow(inc);
				}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
		}

		void incrementUnownedNonAtomic(Bits old, unsigned inc) {
			Bits newBits = old;
			if (old.hasSideTable()) {
				return old.getSideTable()->incrementUnownedNonAtomic(old, inc);
			}

			newBits = old;
			assert(newBits.getUnownedCount() != 0);
			unsigned oldValue = newBits.incUnownedRefCount(inc);
			if (newBits.isOverflowingUnownedCount(oldValue, inc)) {
				return incrementUnownedSlow(inc);
			}
			_refCount.store(newBits, std::memory_order_relaxed);
		}

		bool decrementUnownedShouldFree(unsigned dec) {
			auto old = _refCount.load(std::memory_order::consume);
			if (old.isImmortal(true))
				return false;
			if (old.isStackAlloc())
				return decrementUnownedShouldFreeNonAtomic(old, dec);

			Bits newBits;
			bool performFree;
			do {
				if (old.hasSideTable()) {
					return old.getSideTable()->decrementUnownedShouldFree(dec);
				}

				newBits = old;
				newBits.decUnownedRefCount(dec);
				if (newBits.getUnownedCount() == 0) {
					assert(newBits.isDeiniting());
					performFree = true;
				} else {
					performFree = false;
				}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
			return performFree;
		}

		bool decrementUnownedShouldFreeNonAtomic(Bits old, unsigned dec) {
			Bits newBits;
			bool performFree;
			if (old.hasSideTable()) {
				return old.getSideTable()->decrementUnownedShouldFreeNonAtomic(old, dec);
			}

			newBits = old;
			newBits.decUnownedRefCount(dec);
			if (newBits.getUnownedCount() == 0 && !old.isStackAlloc()) {
				assert(newBits.isDeiniting());
				performFree = true;
			} else {
				performFree = false;
			}
			_refCount.store(newBits, std::memory_order_relaxed);
			return performFree;
		}

		unsigned getUnownedCount() const {
			auto old = _refCount.load(std::memory_order::consume);
			if (old.hasSideTable()) {
				return old.getSideTable()->getUnownedCount();
			}

			return old.getUnownedCount();
		}

		ObjectSideTable* formWeakRef();

		void incrementWeak() {
			auto old = _refCount.load(std::memory_order::consume);

			Bits newBits;
			do {
				newBits = old;
				assert(newBits.getWeakCount() != 0);
				newBits.incWeakCount();
				if (newBits.getWeakCount() < old.getWeakCount()) {
					// overflow error
				}
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
		}

		bool decrementWeakShouldCleanup() {
			auto old = _refCount.load(std::memory_order::consume);

			Bits newBits;
			bool performFree;
			do {
				newBits     = old;
				performFree = newBits.decWeakCount();
			} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_relaxed));
			return performFree;
		}

		bool decrementWeakShouldCleanupNonAtomic() {
			auto old = _refCount.load(std::memory_order::consume);

			Bits newBits     = old;
			bool performFree = newBits.decWeakCount();
			_refCount.store(newBits, std::memory_order_relaxed);
			return performFree;
		}

		unsigned getWeakCount() const;
	};

	using InlineRefCounts    = RefCounts<InlineRefCountBits>;
	using SideTableRefCounts = RefCounts<SideTableRefCountBits>;

	static_assert(std::is_trivially_destructible<InlineRefCounts>::value,
	              "InlineRefCounts must be trivially destructible");

	template <>
	inline uint32_t RefCounts<InlineRefCountBits>::getWeakCount() const;
	template <>
	inline uint32_t RefCounts<SideTableRefCountBits>::getWeakCount() const;

	class ObjectSideTable {
		std::atomic<Object*> _obj;
		SideTableRefCounts _refCount;

	   public:
		ObjectSideTable(Object* obj) : _obj {obj}, _refCount() {}

		static ptrdiff_t refCountsOffset() { return offsetof(ObjectSideTable, _refCount); }

		Object* tryRetain() {
			if (_refCount.tryIncrement()) {
				return _obj.load(std::memory_order_relaxed);
			}
			return nullptr;
		}

		void initRefCounts(InlineRefCountBits newBits) { _refCount.init(newBits); }

		Object* unsafeGetObject() const { return _obj.load(std::memory_order_relaxed); }

		void incrementStrong(unsigned inc) { _refCount.increment(nullptr, inc); }

		template <bool PerformDeinit>
		bool decrementStrong(unsigned dec) {
			return _refCount.doDecrement<PerformDeinit>(dec);
		}

		template <bool PerformDeinit>
		bool decrementStrongNonAtomic(SideTableRefCountBits old, unsigned dec) {
			return _refCount.doDecrementNonAtomic<PerformDeinit>(old, dec);
		}

		void decrementFinalNonAtomic() {
			decrementStrongNonAtomic<false>(SideTableRefCountBits(), 1);
		}

		bool isDeiniting() const { return _refCount.isDeiniting(); }

		bool isStackAlloc() const { return _refCount.isStackAlloc(); }

		bool tryIncrement() { return _refCount.tryIncrement(); }

		bool tryIncrementNonAtomic() { return _refCount.tryIncrementNonAtomic(); }

		unsigned getCount() const { return _refCount.getCount(); }

		bool isUnique() const { return _refCount.isUnique(); }

		void incrementUnowned(unsigned inc) { _refCount.incrementUnowned(inc); }

		void incrementUnownedNonAtomic(SideTableRefCountBits old, unsigned inc) {
			_refCount.incrementUnownedNonAtomic(old, inc);
		}

		bool decrementUnownedShouldFree(unsigned dec) {
			bool shouldFree = _refCount.decrementUnownedShouldFree(dec);
			if (shouldFree) {
				decrementWeak();
			}
			return shouldFree;
		}

		bool decrementUnownedShouldFreeNonAtomic(SideTableRefCountBits old, unsigned dec) {
			bool shouldFree = _refCount.decrementUnownedShouldFreeNonAtomic(old, dec);
			if (shouldFree) {
				decrementWeakNonAtomic();
			}
			return shouldFree;
		}

		unsigned getUnownedCount() const { return _refCount.getUnownedCount(); }

		ObjectSideTable* incrementWeak() {
			if (_refCount.isDeiniting())
				return nullptr;

			_refCount.incrementWeak();
			return this;
		}

		void decrementWeak() {
			bool cleanup = _refCount.decrementWeakShouldCleanup();
			if (!cleanup)
				return;

			assert(_refCount.getUnownedCount() == 0);
			delete this;
		}

		void decrementWeakNonAtomic() {
			bool cleanup = _refCount.decrementWeakShouldCleanupNonAtomic();
			if (!cleanup)
				return;

			assert(_refCount.getUnownedCount() == 0);
			delete this;
		}

		unsigned getWeakCount() const { return _refCount.getWeakCount(); }

		void* getSideTable() { return _refCount.getSideTable(); }
	};

	template <>
	template <bool PerformDeinit>
	FORCE_INLINE bool RefCounts<InlineRefCountBits>::doDecrementNonAtomic(InlineRefCountBits old,
	                                                                      uint32_t dec) {
		if (old.hasSideTable() || old.getUnownedCount() != 1)
			return doDecrementNonAtomicSlow<PerformDeinit>(old, dec);

		if (old.isImmortal(true)) {
			return false;
		}

		auto newbits = old;
		bool fast    = newbits.decStrongExtraRefCount(dec);
		if (!fast) {
			return doDecrementNonAtomicSlow<PerformDeinit>(old, dec);
		}

		_refCount.store(newbits, std::memory_order_relaxed);
		return false;
	}

	template <>
	template <bool PerformDeinit>
	inline bool RefCounts<SideTableRefCountBits>::doDecrementNonAtomic(SideTableRefCountBits old,
	                                                                   uint32_t dec) {
		return doDecrement<PerformDeinit>(dec);
	}

	template <>
	template <bool PerformDeinit>
	inline bool RefCounts<InlineRefCountBits>::doDecrementSideTable(InlineRefCountBits oldbits,
	                                                                unsigned dec) {
		auto side = oldbits.getSideTable();
		return side->decrementStrong<PerformDeinit>(dec);
	}

	template <>
	template <bool PerformDeinit>
	inline bool RefCounts<InlineRefCountBits>::doDecrementNonAtomicSideTable(
	    InlineRefCountBits oldbits, uint32_t dec) {
		auto side = oldbits.getSideTable();
		return side->decrementStrongNonAtomic<PerformDeinit>(oldbits, dec);
	}

	template <>
	template <bool PerformDeinit>
	inline bool RefCounts<SideTableRefCountBits>::doDecrementSideTable(SideTableRefCountBits old,
	                                                                   uint32_t dec) {
		// runtime error
		return false;
	}

	template <>
	template <bool PerformDeinit>
	inline bool RefCounts<SideTableRefCountBits>::doDecrementNonAtomicSideTable(
	    SideTableRefCountBits oldbits, uint32_t dec) {
		// runtime error
		return false;
	}

	template <>
	inline uint32_t RefCounts<InlineRefCountBits>::getWeakCount() const {
		auto bits = _refCount.load(std::memory_order_consume);
		if (bits.hasSideTable()) {
			return bits.getSideTable()->getWeakCount();
		} else {
			return bits.getUnownedCount() ? 1 : 0;
		}
	}

	template <>
	inline uint32_t RefCounts<SideTableRefCountBits>::getWeakCount() const {
		auto bits = _refCount.load(std::memory_order_consume);
		return bits.getWeakCount();
	}

	template <>
	inline Object* RefCounts<InlineRefCountBits>::getObject() {
		return reinterpret_cast<Object*>(reinterpret_cast<char*>(this) - sizeof(void*));
	}

	template <>
	inline Object* RefCounts<SideTableRefCountBits>::getObject() {
		auto offset = ObjectSideTable::refCountsOffset();
		auto prefix = ((char*) this - offset);
		return *(Object**) prefix;
	}
}  // namespace CppAdvance