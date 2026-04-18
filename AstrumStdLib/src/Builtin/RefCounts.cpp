#include "RefCounts.h"

namespace CppAdvance {
	template <>
	CPPADVANCE_DLLEXPORT ObjectSideTable* RefCounts<InlineRefCountBits>::formWeakRef() {
		auto table = allocateSideTable(true);
		if (table)
			return table->incrementWeak();
		return nullptr;
	}

	template <>
	ObjectSideTable* RefCounts<InlineRefCountBits>::allocateSideTable(bool failIfDeiniting) {
		auto old = _refCount.load(std::memory_order_consume);
		if (old.hasSideTable()) {
			return old.getSideTable();
		}

		if (failIfDeiniting && old.isDeiniting()) {
			return nullptr;
		}

		// TODO: custom allocator
		auto table   = new ObjectSideTable(getObject());
		auto newBits = InlineRefCountBits(table);
		do {
			if (old.hasSideTable()) {
				auto result = old.getSideTable();
				delete table;
				return result;
			}

			if (failIfDeiniting && old.isDeiniting()) {
				return nullptr;
			}

			table->initRefCounts(old);
		} while (!_refCount.compare_exchange_weak(old, newBits, std::memory_order_release,
		                                          std::memory_order_relaxed));
		return table;
	}

	template <class Bits>
	void RefCounts<Bits>::incrementUnownedSlow(unsigned inc) {
		auto table = allocateSideTable(false);
		if (table)
			table->incrementUnowned(inc);
		// retainoverflow error
	}

	template void RefCounts<InlineRefCountBits>::incrementUnownedSlow(uint32_t n);
	template <>
	void RefCounts<SideTableRefCountBits>::incrementUnownedSlow(uint32_t n) {
		// retainoverflow error
	}

	template <class Bits>
	bool RefCounts<Bits>::tryIncrementNonAtomicSlow(Bits old) {
		if (old.isImmortal(false)) {
			return true;
		}

		if (old.hasSideTable()) {
			return old.getSideTable()->tryIncrementNonAtomic();
		}

		// overflow error
		return false;
	}

	template bool RefCounts<InlineRefCountBits>::tryIncrementNonAtomicSlow(
	    InlineRefCountBits oldbits);
	template bool RefCounts<SideTableRefCountBits>::tryIncrementNonAtomicSlow(
	    SideTableRefCountBits oldbits);

	template <class Bits>
	bool RefCounts<Bits>::tryIncrementSlow(Bits old) {
		if (old.isImmortal(false)) {
			return true;
		}

		if (old.hasSideTable()) {
			return old.getSideTable()->tryIncrementNonAtomic();
		}

		// overflow error
		return false;
	}

	template bool RefCounts<InlineRefCountBits>::tryIncrementSlow(InlineRefCountBits oldbits);
	template bool RefCounts<SideTableRefCountBits>::tryIncrementSlow(SideTableRefCountBits oldbits);

	template <>
	CPPADVANCE_DLLEXPORT void RefCounts<InlineRefCountBits>::incrementNonAtomicSlow(
	    InlineRefCountBits old, unsigned inc) {
		if (old.isImmortal(false)) {
			return;
		}
		if (old.hasSideTable()) {
			auto side = old.getSideTable();
			side->incrementStrong(inc);
		} else {
			auto side = allocateSideTable(false);
			side->incrementStrong(inc);
		}
	}

	template <>
	CPPADVANCE_DLLEXPORT void RefCounts<SideTableRefCountBits>::incrementNonAtomicSlow(
	    SideTableRefCountBits old, unsigned inc) {
		if (old.isImmortal(false)) {
			return;
		}
		// overflow error
	}

	template <>
	CPPADVANCE_DLLEXPORT Object* RefCounts<InlineRefCountBits>::incrementSlow(
	    InlineRefCountBits old, unsigned inc) {
		if (old.isImmortal(false)) {
			return getObject();
		}
		if (old.hasSideTable()) {
			auto side = old.getSideTable();
			side->incrementStrong(inc);
		} else {
			auto side = allocateSideTable(false);
			side->incrementStrong(inc);
		}
		return getObject();
	}

	template <>
	CPPADVANCE_DLLEXPORT Object* RefCounts<SideTableRefCountBits>::incrementSlow(
	    SideTableRefCountBits old, unsigned inc) {
		if (old.isImmortal(false)) {
			return getObject();
		}
		// overflow error
		return getObject();
	}
}  // namespace CppAdvance