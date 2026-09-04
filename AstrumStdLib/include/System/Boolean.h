#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IComparable.h"
#include "IEquatable.h"
#include "IConvertible.h"
#include "Optional.h"

namespace System {
namespace __Unsafe {} namespace __Boolean$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
using Boolean = typename Builtin::Boolean;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	using $extension_Boolean_10_Boolean = Boolean;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Boolean_10_Boolean const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto operator<=>($extension_Boolean_10_Boolean const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Boolean_10_Boolean> rhs) noexcept -> const Builtin::i32;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto getHashCode($extension_Boolean_10_Boolean const& $this ) -> const Builtin::u64;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::operator<=>;
using $extensions::getHashCode;

		} namespace $extensions { using namespace System;
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	using $extension_Boolean_38_Boolean = Boolean;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Boolean_38_Boolean const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Boolean_38_Boolean, IAbstractComparable, IAbstractComparable, $extension_Boolean_38_Boolean);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	using $extension_Boolean_53_Boolean = Boolean;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToBoolean($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt8($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt8($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt16($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt16($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt128($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt128($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToIsize($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUsize($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToFloat32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToFloat64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToByte($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToChar($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Boolean_53_Boolean, IConvertible, IConvertible, $extension_Boolean_53_Boolean);
	} namespace System{
using $extensions::ToBoolean;
using $extensions::ToInt8;
using $extensions::ToUInt8;
using $extensions::ToInt16;
using $extensions::ToUInt16;
using $extensions::ToInt32;
using $extensions::ToUInt32;
using $extensions::ToInt64;
using $extensions::ToUInt64;
using $extensions::ToInt128;
using $extensions::ToUInt128;
using $extensions::ToIsize;
using $extensions::ToUsize;
using $extensions::ToFloat32;
using $extensions::ToFloat64;
using $extensions::ToByte;
using $extensions::ToChar;

	} namespace $extensions {
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto operator<=>($extension_Boolean_10_Boolean const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Boolean_10_Boolean> rhs) noexcept -> const Builtin::i32
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				if ($this == rhs) {
					#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
					return Builtin::i32(0);
				}
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				if (rhs) {
					#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
					return Builtin::i32(-1);
				}
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto getHashCode($extension_Boolean_10_Boolean const & $this ) -> const Builtin::u64
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u32(1U) : Builtin::u32(0U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToBoolean($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt8($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::i8(1) : Builtin::i8(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt8($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u8(1U) : Builtin::u8(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt16($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::i16(1) : Builtin::i16(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt16($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u16(1U) : Builtin::u16(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::i32(1) : Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u32(1U) : Builtin::u32(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::i64(1LL) : Builtin::i64(0LL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u64(1ULL) : Builtin::u64(0ULL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToInt128($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::i128(1LL) : Builtin::i128(0LL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUInt128($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u128(1ULL) : Builtin::u128(0ULL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToIsize($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::isize(1) : Builtin::isize(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToUsize($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::usize(1U) : Builtin::usize(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToFloat32($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::f32(1.0f) : Builtin::f32(0.0f)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToFloat64($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::f64(1.0) : Builtin::f64(0.0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToByte($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u8(1U) : Builtin::u8(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	inline constexpr auto ToChar($extension_Boolean_53_Boolean const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_EXPRESSION_BODY($this ? Builtin::u8(1U) : Builtin::u8(0U)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	

}