#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Float128_Log_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
namespace __ntuples { class NamedTuple_772be8e41bda60e3; } 
namespace __ntuples { class NamedTuple_e60e36e81c207e3e; } 
namespace __ntuples { class NamedTuple_1f9d30cf2170c14d; } 
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
namespace __ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		struct NamedTuple_772be8e41bda60e3 final : public Builtin::Struct { 
			using __self = NamedTuple_772be8e41bda60e3;
			using __class = Builtin::__Class_Basic<NamedTuple_772be8e41bda60e3>;
			Builtin::f32 g;
			Builtin::f32 fhi;
			Builtin::f128 flo;
			constexpr NamedTuple_772be8e41bda60e3() = default;
			constexpr NamedTuple_772be8e41bda60e3(Builtin::In<Builtin::f32> _g, Builtin::In<Builtin::f32> _fhi, Builtin::In<Builtin::f128> _flo) : g{_g}, fhi{_fhi}, flo{_flo} {}
			constexpr FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
			constexpr FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(__ntuples::NamedTuple_772be8e41bda60e3&);
			template <size_t I> friend const auto& get(const __ntuples::NamedTuple_772be8e41bda60e3&);
			
		};
		template <> inline constexpr auto& get<0>(__ntuples::NamedTuple_772be8e41bda60e3& t) { return t.g; }
		template <> inline constexpr const auto& get<0>(const __ntuples::NamedTuple_772be8e41bda60e3& t) { return t.g; }
		template <> inline constexpr auto& get<1>(__ntuples::NamedTuple_772be8e41bda60e3& t) { return t.fhi; }
		template <> inline constexpr const auto& get<1>(const __ntuples::NamedTuple_772be8e41bda60e3& t) { return t.fhi; }
		template <> inline constexpr auto& get<2>(__ntuples::NamedTuple_772be8e41bda60e3& t) { return t.flo; }
		template <> inline constexpr const auto& get<2>(const __ntuples::NamedTuple_772be8e41bda60e3& t) { return t.flo; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::__ntuples::NamedTuple_772be8e41bda60e3> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, System::__ntuples::NamedTuple_772be8e41bda60e3> { using type = decltype(std::declval<System::__ntuples::NamedTuple_772be8e41bda60e3>().g); };
	template <> struct tuple_element<1, System::__ntuples::NamedTuple_772be8e41bda60e3> { using type = decltype(std::declval<System::__ntuples::NamedTuple_772be8e41bda60e3>().fhi); };
	template <> struct tuple_element<2, System::__ntuples::NamedTuple_772be8e41bda60e3> { using type = decltype(std::declval<System::__ntuples::NamedTuple_772be8e41bda60e3>().flo); };
	
}

namespace System {namespace __ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		struct NamedTuple_e60e36e81c207e3e final : public Builtin::Struct { 
			using __self = NamedTuple_e60e36e81c207e3e;
			using __class = Builtin::__Class_Basic<NamedTuple_e60e36e81c207e3e>;
			Builtin::f32 h;
			Builtin::f32 e;
			constexpr NamedTuple_e60e36e81c207e3e() = default;
			constexpr NamedTuple_e60e36e81c207e3e(Builtin::In<Builtin::f32> _h, Builtin::In<Builtin::f32> _e) : h{_h}, e{_e} {}
			constexpr FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
			constexpr FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(__ntuples::NamedTuple_e60e36e81c207e3e&);
			template <size_t I> friend const auto& get(const __ntuples::NamedTuple_e60e36e81c207e3e&);
			
		};
		template <> inline constexpr auto& get<0>(__ntuples::NamedTuple_e60e36e81c207e3e& t) { return t.h; }
		template <> inline constexpr const auto& get<0>(const __ntuples::NamedTuple_e60e36e81c207e3e& t) { return t.h; }
		template <> inline constexpr auto& get<1>(__ntuples::NamedTuple_e60e36e81c207e3e& t) { return t.e; }
		template <> inline constexpr const auto& get<1>(const __ntuples::NamedTuple_e60e36e81c207e3e& t) { return t.e; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::__ntuples::NamedTuple_e60e36e81c207e3e> : integral_constant<size_t, 2> {};
	template <> struct tuple_element<0, System::__ntuples::NamedTuple_e60e36e81c207e3e> { using type = decltype(std::declval<System::__ntuples::NamedTuple_e60e36e81c207e3e>().h); };
	template <> struct tuple_element<1, System::__ntuples::NamedTuple_e60e36e81c207e3e> { using type = decltype(std::declval<System::__ntuples::NamedTuple_e60e36e81c207e3e>().e); };
	
}

namespace System {namespace __ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		struct NamedTuple_1f9d30cf2170c14d final : public Builtin::Struct { 
			using __self = NamedTuple_1f9d30cf2170c14d;
			using __class = Builtin::__Class_Basic<NamedTuple_1f9d30cf2170c14d>;
			Builtin::f128 High;
			Builtin::f128 Low;
			Builtin::i32 LowSet;
			constexpr NamedTuple_1f9d30cf2170c14d() = default;
			constexpr NamedTuple_1f9d30cf2170c14d(Builtin::In<Builtin::f128> _High, Builtin::In<Builtin::f128> _Low, Builtin::In<Builtin::i32> _LowSet) : High{_High}, Low{_Low}, LowSet{_LowSet} {}
			constexpr FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
			constexpr FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(__ntuples::NamedTuple_1f9d30cf2170c14d&);
			template <size_t I> friend const auto& get(const __ntuples::NamedTuple_1f9d30cf2170c14d&);
			
		};
		template <> inline constexpr auto& get<0>(__ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.High; }
		template <> inline constexpr const auto& get<0>(const __ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.High; }
		template <> inline constexpr auto& get<1>(__ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.Low; }
		template <> inline constexpr const auto& get<1>(const __ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.Low; }
		template <> inline constexpr auto& get<2>(__ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.LowSet; }
		template <> inline constexpr const auto& get<2>(const __ntuples::NamedTuple_1f9d30cf2170c14d& t) { return t.LowSet; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::__ntuples::NamedTuple_1f9d30cf2170c14d> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, System::__ntuples::NamedTuple_1f9d30cf2170c14d> { using type = decltype(std::declval<System::__ntuples::NamedTuple_1f9d30cf2170c14d>().High); };
	template <> struct tuple_element<1, System::__ntuples::NamedTuple_1f9d30cf2170c14d> { using type = decltype(std::declval<System::__ntuples::NamedTuple_1f9d30cf2170c14d>().Low); };
	template <> struct tuple_element<2, System::__ntuples::NamedTuple_1f9d30cf2170c14d> { using type = decltype(std::declval<System::__ntuples::NamedTuple_1f9d30cf2170c14d>().LowSet); };
	
}

namespace System {//###############################################################################
//# Free function declarations
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	ASTRUMSTD_HIDDEN auto Log2Impl(Builtin::f128 x)  -> const Builtin::f128;
#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	ASTRUMSTD_HIDDEN auto Log10Impl(Builtin::f128 x)  -> const Builtin::f128;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	ASTRUMSTD_HIDDEN auto LnImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	ASTRUMSTD_HIDDEN auto LnP1Impl(Builtin::f128 x)  -> const Builtin::f128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
//###############################################################################
//# Function definitions
//###############################################################################


}