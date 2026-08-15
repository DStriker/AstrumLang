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
namespace __Unsafe {} namespace __Index$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Index;
} namespace $extensions {
template<class __TT> struct $static_FromEnd;
template<class __TT> struct $static_getFromEnd;
template<class __TT> struct $static_End;
template<class __TT> struct $static_getEnd;
template<class __TT> struct $static_Value;
template<class __TT> struct $static_getValue;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_Index;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	struct Index final : public Builtin::Struct {
		public: using $self = Index;
		public: using $class = $Class_Index;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: 
		class $Class_FastCtorTag;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		struct FastCtorTag final : public Builtin::Struct {
			public: using $self = FastCtorTag;
			public: using $class = $Class_FastCtorTag;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: FastCtorTag() = default;
			template <size_t I> friend auto& get(FastCtorTag&);
			template <size_t I> friend const auto& get(const FastCtorTag&);
			
		};
		
		private: 
		
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		class $Class_FastCtorTag final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			public: using $underlying = FastCtorTag; using $self = $underlying;
			$self __value;
			$Class_FastCtorTag(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_CHECK_FOR_CONCRETE(FastCtorTag);
		
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto getStart()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Start, getStart, $self);
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto getEnd()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, End, getEnd, $self);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr Index()  = default;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		private: inline constexpr Index(Builtin::isize val, FastCtorTag __var_16_29) ;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: template<class T> requires(Builtin::TypeIs<T, IFixedWidthInteger>() && Builtin::TypeIs<T, IUnsignedNumber>() && (Builtin::usize(sizeof (T)) <=> Builtin::usize(sizeof(Builtin::usize))) <= 0) inline constexpr  Index(T val) ;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr Index(Builtin::usize val, bool fromEnd) ;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto FromStart(Builtin::usize val)  -> const $self;
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr static auto FromEnd(Builtin::usize val)  -> const $self;
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr auto Offset(Builtin::usize length) const  -> const Builtin::isize;
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: inline constexpr auto operator==($self other) const  -> const bool;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		private: Builtin::isize _value; ADV_CHECK_REF_STRUCT("isize", Builtin::isize);
		template <size_t I> friend auto& get(Index&);
		template <size_t I> friend const auto& get(const Index&);
		
	};
	
		} namespace $extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using $extension_Index_77_Index = Index;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Index_77_Index const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getValue($extension_Index_77_Index const& $this ) -> const Builtin::usize;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getIsFromEnd($extension_Index_77_Index const& $this ) -> const bool;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getHashCode($extension_Index_77_Index const& $this ) -> const Builtin::u64;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::getValue;
using $extensions::getIsFromEnd;
using $extensions::getHashCode;

		} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using $extension_Index_101_u8 = Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_101_u8 const& $this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using $extensions::_operator_xor;

		} namespace $extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using $extension_Index_105_u16 = Builtin::u16;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_105_u16 const& $this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using $extensions::_operator_xor;

		} namespace $extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using $extension_Index_109_u32 = Builtin::u32;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_109_u32 const& $this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using $extensions::_operator_xor;

		} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	using $extension_Index_113_u64 = Builtin::u64;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_113_u64 const& $this LIFETIMEBOUND)  -> const Index;
	} namespace System{
using $extensions::_operator_xor;

	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	class $Class_Index final : public Builtin::ValueType
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		public: using $underlying = Index; using $self = $underlying;
		$self __value;
		$Class_Index(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		static auto FromStart(Builtin::usize val) -> $self const { ADV_EXPRESSION_BODY($self::FromStart(val)); }
		static auto FromEnd(Builtin::usize val) -> $self const { ADV_EXPRESSION_BODY($self::FromEnd(val)); }
		auto Offset(Builtin::usize length) const  -> Builtin::isize const { ADV_EXPRESSION_BODY(__value.Offset(length)); }
		auto operator==($self other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ADV_CHECK_FOR_CONCRETE(Index);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(Index, ISelfEquatable, ISelfEquatable, Index);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr Index::Index(Builtin::isize val, typename Index::FastCtorTag __var_16_29)  : _value{val} {}
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	template<class T> requires(Builtin::TypeIs<T, IFixedWidthInteger>() && Builtin::TypeIs<T, IUnsignedNumber>() && (Builtin::usize(sizeof (T)) <=> Builtin::usize(sizeof(Builtin::usize))) <= 0) inline constexpr Index::Index(T val)  : 
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	_value{ADV_UFCS(NarrowToIsize)(val.$ref())}
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if constexpr (Builtin::usize(sizeof (T)) == Builtin::usize(sizeof(Builtin::usize))) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				Builtin::Throw(Builtin::InvalidArgumentException{});
			}
		}
	}
#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr Index::Index(Builtin::usize val, bool fromEnd) 
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_UPCS(_value)((*this).$ref()) = fromEnd ? ADV_UFCS(NarrowToIsize)((ADV_UFCS(_operator_not)(val)).$ref()) : ADV_UFCS(NarrowToIsize)(val.$ref());
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::FromStart(Builtin::usize val)  -> const $self
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return $self{ADV_UFCS(NarrowToIsize)(val.$ref()), FastCtorTag{}};
	}
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::FromEnd(Builtin::usize val)  -> const $self
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if ((val <=> ADV_USPCS(MaxValue, Builtin::isize)()) > 0) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return $self{ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToIsize)(val.$ref())), FastCtorTag{}};
	}
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::getStart()  -> $self 
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY($self{Builtin::i32(0), FastCtorTag{}}); 
	}
	
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::getEnd()  -> $self 
	{
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY($self{ADV_UFCS(_operator_not)(Builtin::isize(0)), FastCtorTag{}}); 
	}
	
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::Offset(Builtin::usize length) const  -> const Builtin::isize
	{
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToIsize)(_value.$ref()))> offset = ADV_UFCS(NarrowToIsize)(_value.$ref()); 
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		if (ADV_UPCS(IsNegative)(_value.$ref())) {
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			offset += length + Builtin::i32(1);
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return offset;
	}
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto Index::operator==($self other) const  -> const bool
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(_value == ADV_UPCS(_value)(other.$ref())); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace $extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getValue($extension_Index_77_Index const& $this ) -> const Builtin::usize
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		const Builtin::Auto<decltype(Builtin::BitCast<Builtin::isize>($this))> _value = Builtin::BitCast<Builtin::isize>($this); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return ADV_UPCS(IsNegative)(_value.$ref()) ? Builtin::usize{ADV_UFCS(_operator_not)(_value)} : Builtin::usize{_value};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getIsFromEnd($extension_Index_77_Index const& $this ) -> const bool
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(Builtin::BitCast<Builtin::isize>($this).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto getHashCode($extension_Index_77_Index const& $this ) -> const Builtin::u64
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(HashCode)(Builtin::BitCast<Builtin::usize>($this).$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_101_u8 const& $this LIFETIMEBOUND)  -> const Index
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_105_u16 const& $this LIFETIMEBOUND)  -> const Index
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_109_u32 const& $this LIFETIMEBOUND)  -> const Index
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	inline constexpr auto _operator_xor($extension_Index_113_u64 const& $this LIFETIMEBOUND)  -> const Index
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Index), FromEnd)(ADV_UFCS(ToUsize)($this.$ref()))); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	

}