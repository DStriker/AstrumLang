#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Float128_Pow$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
namespace $ntuples { class NamedTuple_659f7778a6155ee5; } 
namespace $ntuples { class NamedTuple_2dcf424a354959c5; } 
namespace $ntuples { class NamedTuple_a488367d9020e593; } 
namespace $ntuples { class NamedTuple_da175a0d257547d1; } 
} namespace $extensions {
template<class __TT> struct $static_MinValue;
template<class __TT> struct $static_getMinValue;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_FromBits;
template<class __TT> struct $static_getFromBits;
template<class __TT> struct $static_Zero;
template<class __TT> struct $static_getZero;
} namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
namespace $ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		struct NamedTuple_da175a0d257547d1 final : public Builtin::Struct { 
			using $self = NamedTuple_da175a0d257547d1;
			using $class = Builtin::$Class_Basic<NamedTuple_da175a0d257547d1>;
			Builtin::u32 LowLo;
			Builtin::u32 LowHi;
			Builtin::u32 HighLo;
			Builtin::u32 HighHi;
			constexpr NamedTuple_da175a0d257547d1() = default;
			constexpr NamedTuple_da175a0d257547d1(Builtin::In<Builtin::u32> _LowLo, Builtin::In<Builtin::u32> _LowHi, Builtin::In<Builtin::u32> _HighLo, Builtin::In<Builtin::u32> _HighHi) : LowLo{_LowLo}, LowHi{_LowHi}, HighLo{_HighLo}, HighHi{_HighHi} {}
			FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
			FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			template <size_t I> friend auto& get($ntuples::NamedTuple_da175a0d257547d1&);
			template <size_t I> friend const auto& get(const $ntuples::NamedTuple_da175a0d257547d1&);
			
		};
		template <> inline constexpr auto& get<0>($ntuples::NamedTuple_da175a0d257547d1& t) { return t.LowLo; }
		template <> inline constexpr const auto& get<0>(const $ntuples::NamedTuple_da175a0d257547d1& t) { return t.LowLo; }
		template <> inline constexpr auto& get<1>($ntuples::NamedTuple_da175a0d257547d1& t) { return t.LowHi; }
		template <> inline constexpr const auto& get<1>(const $ntuples::NamedTuple_da175a0d257547d1& t) { return t.LowHi; }
		template <> inline constexpr auto& get<2>($ntuples::NamedTuple_da175a0d257547d1& t) { return t.HighLo; }
		template <> inline constexpr const auto& get<2>(const $ntuples::NamedTuple_da175a0d257547d1& t) { return t.HighLo; }
		template <> inline constexpr auto& get<3>($ntuples::NamedTuple_da175a0d257547d1& t) { return t.HighHi; }
		template <> inline constexpr const auto& get<3>(const $ntuples::NamedTuple_da175a0d257547d1& t) { return t.HighHi; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::$ntuples::NamedTuple_da175a0d257547d1> : integral_constant<size_t, 4> {};
	template <> struct tuple_element<0, System::$ntuples::NamedTuple_da175a0d257547d1> { using type = decltype(std::declval<System::$ntuples::NamedTuple_da175a0d257547d1>().LowLo); };
	template <> struct tuple_element<1, System::$ntuples::NamedTuple_da175a0d257547d1> { using type = decltype(std::declval<System::$ntuples::NamedTuple_da175a0d257547d1>().LowHi); };
	template <> struct tuple_element<2, System::$ntuples::NamedTuple_da175a0d257547d1> { using type = decltype(std::declval<System::$ntuples::NamedTuple_da175a0d257547d1>().HighLo); };
	template <> struct tuple_element<3, System::$ntuples::NamedTuple_da175a0d257547d1> { using type = decltype(std::declval<System::$ntuples::NamedTuple_da175a0d257547d1>().HighHi); };
	
}

namespace System {namespace $ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		struct NamedTuple_a488367d9020e593 final : public Builtin::Struct { 
			using $self = NamedTuple_a488367d9020e593;
			using $class = Builtin::$Class_Basic<NamedTuple_a488367d9020e593>;
			Builtin::u64 Low;
			Builtin::u64 High;
			constexpr NamedTuple_a488367d9020e593() = default;
			constexpr NamedTuple_a488367d9020e593(Builtin::In<Builtin::u64> _Low, Builtin::In<Builtin::u64> _High) : Low{_Low}, High{_High} {}
			FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
			FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			template <size_t I> friend auto& get($ntuples::NamedTuple_a488367d9020e593&);
			template <size_t I> friend const auto& get(const $ntuples::NamedTuple_a488367d9020e593&);
			
		};
		template <> inline constexpr auto& get<0>($ntuples::NamedTuple_a488367d9020e593& t) { return t.Low; }
		template <> inline constexpr const auto& get<0>(const $ntuples::NamedTuple_a488367d9020e593& t) { return t.Low; }
		template <> inline constexpr auto& get<1>($ntuples::NamedTuple_a488367d9020e593& t) { return t.High; }
		template <> inline constexpr const auto& get<1>(const $ntuples::NamedTuple_a488367d9020e593& t) { return t.High; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::$ntuples::NamedTuple_a488367d9020e593> : integral_constant<size_t, 2> {};
	template <> struct tuple_element<0, System::$ntuples::NamedTuple_a488367d9020e593> { using type = decltype(std::declval<System::$ntuples::NamedTuple_a488367d9020e593>().Low); };
	template <> struct tuple_element<1, System::$ntuples::NamedTuple_a488367d9020e593> { using type = decltype(std::declval<System::$ntuples::NamedTuple_a488367d9020e593>().High); };
	
}

namespace System {namespace $ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		struct NamedTuple_659f7778a6155ee5 final : public Builtin::Struct { 
			using $self = NamedTuple_659f7778a6155ee5;
			using $class = Builtin::$Class_Basic<NamedTuple_659f7778a6155ee5>;
			Builtin::u64 High;
			Builtin::u64 Low;
			constexpr NamedTuple_659f7778a6155ee5() = default;
			constexpr NamedTuple_659f7778a6155ee5(Builtin::In<Builtin::u64> _High, Builtin::In<Builtin::u64> _Low) : High{_High}, Low{_Low} {}
			FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
			FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			template <size_t I> friend auto& get($ntuples::NamedTuple_659f7778a6155ee5&);
			template <size_t I> friend const auto& get(const $ntuples::NamedTuple_659f7778a6155ee5&);
			
		};
		template <> inline constexpr auto& get<0>($ntuples::NamedTuple_659f7778a6155ee5& t) { return t.High; }
		template <> inline constexpr const auto& get<0>(const $ntuples::NamedTuple_659f7778a6155ee5& t) { return t.High; }
		template <> inline constexpr auto& get<1>($ntuples::NamedTuple_659f7778a6155ee5& t) { return t.Low; }
		template <> inline constexpr const auto& get<1>(const $ntuples::NamedTuple_659f7778a6155ee5& t) { return t.Low; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::$ntuples::NamedTuple_659f7778a6155ee5> : integral_constant<size_t, 2> {};
	template <> struct tuple_element<0, System::$ntuples::NamedTuple_659f7778a6155ee5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_659f7778a6155ee5>().High); };
	template <> struct tuple_element<1, System::$ntuples::NamedTuple_659f7778a6155ee5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_659f7778a6155ee5>().Low); };
	
}

namespace System {namespace $ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		struct NamedTuple_2dcf424a354959c5 final : public Builtin::Struct { 
			using $self = NamedTuple_2dcf424a354959c5;
			using $class = Builtin::$Class_Basic<NamedTuple_2dcf424a354959c5>;
			Builtin::u32 HighHi;
			Builtin::u32 HighLo;
			Builtin::u32 LowHi;
			Builtin::u32 LowLo;
			constexpr NamedTuple_2dcf424a354959c5() = default;
			constexpr NamedTuple_2dcf424a354959c5(Builtin::In<Builtin::u32> _HighHi, Builtin::In<Builtin::u32> _HighLo, Builtin::In<Builtin::u32> _LowHi, Builtin::In<Builtin::u32> _LowLo) : HighHi{_HighHi}, HighLo{_HighLo}, LowHi{_LowHi}, LowLo{_LowLo} {}
			FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
			FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			template <size_t I> friend auto& get($ntuples::NamedTuple_2dcf424a354959c5&);
			template <size_t I> friend const auto& get(const $ntuples::NamedTuple_2dcf424a354959c5&);
			
		};
		template <> inline constexpr auto& get<0>($ntuples::NamedTuple_2dcf424a354959c5& t) { return t.HighHi; }
		template <> inline constexpr const auto& get<0>(const $ntuples::NamedTuple_2dcf424a354959c5& t) { return t.HighHi; }
		template <> inline constexpr auto& get<1>($ntuples::NamedTuple_2dcf424a354959c5& t) { return t.HighLo; }
		template <> inline constexpr const auto& get<1>(const $ntuples::NamedTuple_2dcf424a354959c5& t) { return t.HighLo; }
		template <> inline constexpr auto& get<2>($ntuples::NamedTuple_2dcf424a354959c5& t) { return t.LowHi; }
		template <> inline constexpr const auto& get<2>(const $ntuples::NamedTuple_2dcf424a354959c5& t) { return t.LowHi; }
		template <> inline constexpr auto& get<3>($ntuples::NamedTuple_2dcf424a354959c5& t) { return t.LowLo; }
		template <> inline constexpr const auto& get<3>(const $ntuples::NamedTuple_2dcf424a354959c5& t) { return t.LowLo; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::$ntuples::NamedTuple_2dcf424a354959c5> : integral_constant<size_t, 4> {};
	template <> struct tuple_element<0, System::$ntuples::NamedTuple_2dcf424a354959c5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_2dcf424a354959c5>().HighHi); };
	template <> struct tuple_element<1, System::$ntuples::NamedTuple_2dcf424a354959c5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_2dcf424a354959c5>().HighLo); };
	template <> struct tuple_element<2, System::$ntuples::NamedTuple_2dcf424a354959c5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_2dcf424a354959c5>().LowHi); };
	template <> struct tuple_element<3, System::$ntuples::NamedTuple_2dcf424a354959c5> { using type = decltype(std::declval<System::$ntuples::NamedTuple_2dcf424a354959c5>().LowLo); };
	
}

namespace System {//###############################################################################
//# Free function declarations
//###############################################################################
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	ASTRUMSTD_HIDDEN auto PowImpl(Builtin::f128 x, Builtin::f128 exp)  -> const Builtin::f128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
//###############################################################################
//# Global variable declarations
//###############################################################################
//###############################################################################
//# Function definitions
//###############################################################################


}