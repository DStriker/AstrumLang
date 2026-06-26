#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IEquatable.h"
#include "Int32.h"
#include "UInt32.h"
#include "Int64.h"
#include "UInt64.h"

namespace System {
namespace __Unsafe {} namespace __Index_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Index;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_Index;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	struct Index final : public Builtin::Struct {
		public: using __self = Index;
		public: using __class = __Class_Index;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		private: 
		class __Class_FastCtorTag;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		struct FastCtorTag final : public Builtin::Struct {
			public: using __self = FastCtorTag;
			public: using __class = __Class_FastCtorTag;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(FastCtorTag&);
			template <size_t I> friend const auto& get(const FastCtorTag&);
			
		};
		
		private: 
		
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		class __Class_FastCtorTag final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			public: using __underlying = FastCtorTag; using __self = __underlying;
			__self __value;
			__Class_FastCtorTag(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_CHECK_FOR_CONCRETE(FastCtorTag);
		
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto getStart()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Start, getStart, __self);
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto getEnd()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, End, getEnd, __self);
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr Index()  = default;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		private: inline constexpr Index(Builtin::isize val, FastCtorTag __var_15_29) ;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: template<class T> requires(Builtin::TypeIs<T, IFixedWidthInteger>() && Builtin::TypeIs<T, IUnsignedNumber>() && (Builtin::usize(sizeof (T)) <=> Builtin::usize(sizeof(Builtin::usize))) <= 0) inline constexpr  Index(T val) ;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr Index(Builtin::usize val, bool fromEnd) ;
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto FromStart(Builtin::usize val)  -> const __self;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto FromEnd(Builtin::usize val)  -> const __self;
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr auto Offset(Builtin::usize length) const  -> const Builtin::isize;
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr auto operator==(__self other) const  -> const bool;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		private: Builtin::isize _value; ADV_CHECK_REF_STRUCT("isize", Builtin::isize);
		template <size_t I> friend auto& get(Index&);
		template <size_t I> friend const auto& get(const Index&);
		
	};
	
		} namespace __extensions { using namespace System;
#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using __extension_Index_71_Index = Index;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Index_71_Index const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getValue(__extension_Index_71_Index const& __this ) -> const Builtin::usize;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getIsFromEnd(__extension_Index_71_Index const& __this ) -> const bool;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getHashCode(__extension_Index_71_Index const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::getValue;
using __extensions::getIsFromEnd;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using __extension_Index_92_u8 = Builtin::u8;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_92_u8 const& __this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using __extensions::_operator_xor;

		} namespace __extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using __extension_Index_96_u16 = Builtin::u16;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_96_u16 const& __this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using __extensions::_operator_xor;

		} namespace __extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using __extension_Index_100_u32 = Builtin::u32;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_100_u32 const& __this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using __extensions::_operator_xor;

		} namespace __extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using __extension_Index_104_u64 = Builtin::u64;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_104_u64 const& __this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using __extensions::_operator_xor;

	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	class __Class_Index final : public Builtin::ValueType
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: using __underlying = Index; using __self = __underlying;
		__self __value;
		__Class_Index(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		static auto FromStart(Builtin::usize val) -> __self const { ADV_EXPRESSION_BODY(__self::FromStart(val)); }
		static auto FromEnd(Builtin::usize val) -> __self const { ADV_EXPRESSION_BODY(__self::FromEnd(val)); }
		auto Offset(Builtin::usize length) const  -> Builtin::isize const { ADV_EXPRESSION_BODY(__value.Offset(length)); }
		auto operator==(__self other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ADV_CHECK_FOR_CONCRETE(Index);
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(Index, ISelfEquatable, ISelfEquatable, Index);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr Index::Index(Builtin::isize val, typename Index::FastCtorTag __var_15_29)  : _value{val} {}
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	template<class T> requires(Builtin::TypeIs<T, IFixedWidthInteger>() && Builtin::TypeIs<T, IUnsignedNumber>() && (Builtin::usize(sizeof (T)) <=> Builtin::usize(sizeof(Builtin::usize))) <= 0) inline constexpr Index::Index(T val)  : 
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	_value{ADV_UFCS(NarrowToIsize)(val.__ref())}
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if constexpr (Builtin::usize(sizeof (T)) == Builtin::usize(sizeof(Builtin::usize))) {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				Builtin::Throw(Builtin::InvalidArgumentException{});
			}
		}
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr Index::Index(Builtin::usize val, bool fromEnd) 
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_UPCS(_value)((*this).__ref()) = fromEnd ? ADV_UFCS(NarrowToIsize)((ADV_UFCS(_operator_not)(val)).__ref()) : ADV_UFCS(NarrowToIsize)(val.__ref());
	}
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::FromStart(Builtin::usize val)  -> const __self
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return __self{ADV_UFCS(NarrowToIsize)(val.__ref()), FastCtorTag()};
	}
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::FromEnd(Builtin::usize val)  -> const __self
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return __self{ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToIsize)(val.__ref())), FastCtorTag()};
	}
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::getStart()  -> __self 
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(__self{Builtin::i32(0), FastCtorTag()}); 
	}
	
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::getEnd()  -> __self 
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(__self{ADV_UFCS(_operator_not)(Builtin::isize(0)), FastCtorTag()}); 
	}
	
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::Offset(Builtin::usize length) const  -> const Builtin::isize
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToIsize)(_value.__ref()))> offset = ADV_UFCS(NarrowToIsize)(_value.__ref()); 
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if (ADV_UPCS(IsNegative)(_value.__ref())) {
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			offset += length + Builtin::i32(1);
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return offset;
	}
#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::operator==(__self other) const  -> const bool
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(_value == ADV_UPCS(_value)(other.__ref())); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace __extensions { using namespace System;
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getValue(__extension_Index_71_Index const& __this ) -> const Builtin::usize
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		const Builtin::Auto<decltype(Builtin::BitCast<Builtin::isize>(__this))> _value = Builtin::BitCast<Builtin::isize>(__this); 
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return ADV_UPCS(IsNegative)(_value.__ref()) ? Builtin::usize{ADV_UFCS(_operator_not)(_value)} : Builtin::usize{_value};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getIsFromEnd(__extension_Index_71_Index const& __this ) -> const bool
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(Builtin::BitCast<Builtin::isize>(__this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getHashCode(__extension_Index_71_Index const& __this ) -> const Builtin::u64
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(HashCode)(Builtin::BitCast<Builtin::usize>(__this).__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace __extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_92_u8 const& __this LIFETIMEBOUND)  -> const Index
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace __extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_96_u16 const& __this LIFETIMEBOUND)  -> const Index
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_100_u32 const& __this LIFETIMEBOUND)  -> const Index
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor(__extension_Index_104_u64 const& __this LIFETIMEBOUND)  -> const Index
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)(ADV_UFCS(ToUsize)(__this.__ref()))); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	

}