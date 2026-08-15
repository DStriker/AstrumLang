#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __StaticBitset$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class KeyType> class StaticBitset;
} namespace $extensions {
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Type definitions
//###############################################################################
template<class KeyType> class $Class_StaticBitset;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> struct StaticBitset final : public Builtin::Struct {
		public: using $self = StaticBitset<KeyType>;
		public: using $class = $Class_StaticBitset<KeyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: StaticBitset() = default;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: inline constexpr explicit StaticBitset(Builtin::u32 bitset) noexcept;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<KeyType const&... Bits> inline constexpr auto AllBitsSet() const noexcept -> const bool;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<KeyType const& Bit> inline constexpr auto IsSet() const noexcept -> const bool;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<KeyType const& Bit> inline constexpr auto SetBit() noexcept -> void;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<KeyType const& Start, KeyType const& End> inline constexpr auto GetRange() const noexcept -> const Builtin::u32;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<class I> inline constexpr static auto MakeBitMask(I bit) noexcept -> const I;
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: template<class I, class... Args> inline constexpr static auto MakeBitMask(I bit, Args... bits) noexcept -> const I;
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		private: template<class I> inline constexpr static auto MakeLowMask(I width) noexcept -> const I;
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		private: Builtin::u32 _bitset; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
		template <size_t I, class KeyType> friend auto& get(StaticBitset<KeyType>&);
		template <size_t I, class KeyType> friend const auto& get(const StaticBitset<KeyType>&);
		
	};
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> class $Class_StaticBitset final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		public: using $underlying = StaticBitset<KeyType>; using $self = $underlying;
		$self __value;
		$Class_StaticBitset(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> inline constexpr StaticBitset<KeyType>::StaticBitset(Builtin::u32 bitset) noexcept : 
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	_bitset{bitset}
	{
	}
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<KeyType const&... Bits> inline constexpr auto StaticBitset<KeyType>::AllBitsSet() const noexcept -> const bool
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(MakeBitMask(Builtin::u32{Bits}...))> mask = MakeBitMask(Builtin::u32{Bits}...);
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return (_bitset & mask) == mask;
	}
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<KeyType const& Bit> inline constexpr auto StaticBitset<KeyType>::IsSet() const noexcept -> const bool
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return AllBitsSet<Bit>();
	}
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<KeyType const& Bit> inline constexpr auto StaticBitset<KeyType>::SetBit() noexcept -> void
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(MakeBitMask(Builtin::u32{Bit}))> mask = MakeBitMask(Builtin::u32{Bit});
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		_bitset |= mask;
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<KeyType const& Start, KeyType const& End> inline constexpr auto StaticBitset<KeyType>::GetRange() const noexcept -> const Builtin::u32
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(Start))> startBit = Builtin::Cast<true, Builtin::u32>(Start);
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(End))> endBit = Builtin::Cast<true, Builtin::u32>(End);
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(endBit - startBit)> width = endBit - startBit;
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		constexpr Builtin::Auto<decltype(MakeLowMask<Builtin::u32>(width))> mask = MakeLowMask<Builtin::u32>(width);
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return (_bitset >> startBit) & mask;
	}
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<class I> inline constexpr auto StaticBitset<KeyType>::MakeBitMask(I bit) noexcept -> const I
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		ADV_ASSERT(((bit <=> (Builtin::usize(sizeof (I)) * Builtin::i32(8))) < 0), "bit<(sizeof(I)*8)");
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return I{Builtin::i32(1)} << bit;
	}
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<class I, class... Args> inline constexpr auto StaticBitset<KeyType>::MakeBitMask(I bit, Args... bits) noexcept -> const I
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return MakeBitMask<I>(bit) | MakeBitMask<I>(I{bits}...);
	}
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	template<class KeyType> template<class I> inline constexpr auto StaticBitset<KeyType>::MakeLowMask(I width) noexcept -> const I
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		ADV_ASSERT(((width <=> (Builtin::usize(sizeof (I)) * Builtin::i32(8))) <= 0), "width<=(sizeof(I)*8)");
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		if (width == (Builtin::usize(sizeof (I)) * Builtin::i32(8))) {
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
			return ADV_UFCS(_operator_not)(I{});
		}
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
		return (I{Builtin::i32(1)} << width) - Builtin::i32(1);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\StaticBitset.ast"
	

}