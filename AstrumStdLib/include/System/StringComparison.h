#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __StringComparison$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class StringComparison;
class $Class_StringComparison;
} namespace $extensions {
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_StringComparison;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	struct StringComparison final : public Builtin::Enum {
		public: using $self = StringComparison;
		public: using $class = $Class_StringComparison;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr StringComparison() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		private: static constexpr Builtin::Str __names[] = {"Invariant", "InvariantIgnoreCase", "CurrentCulture", "CurrentCultureIgnoreCase", "Ordinal", "OrdinalIgnoreCase"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static constexpr int __variants = 6;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		private: static const StringComparison __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static constexpr std::span<const StringComparison> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison Invariant;
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison InvariantIgnoreCase;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison CurrentCulture;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison CurrentCultureIgnoreCase;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison Ordinal;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: static ASTRUMSTD_HIDDEN const StringComparison OrdinalIgnoreCase;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		private: constexpr StringComparison(Builtin::u8 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::u8 rawValue) { return $self(rawValue); }
		
	};
	
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::Invariant = Builtin::u8();
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::InvariantIgnoreCase = Builtin::u8(Builtin::i64(Invariant.__value) + 1);
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::CurrentCulture = Builtin::u8(Builtin::i64(InvariantIgnoreCase.__value) + 1);
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::CurrentCultureIgnoreCase = Builtin::u8(Builtin::i64(CurrentCulture.__value) + 1);
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::Ordinal = Builtin::u8(Builtin::i64(CurrentCultureIgnoreCase.__value) + 1);
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	inline constexpr StringComparison StringComparison::OrdinalIgnoreCase = Builtin::u8(Builtin::i64(Ordinal.__value) + 1);
	inline constexpr StringComparison StringComparison::__values[] = {Invariant, InvariantIgnoreCase, CurrentCulture, CurrentCultureIgnoreCase, Ordinal, OrdinalIgnoreCase};
	inline constexpr std::span<const StringComparison> StringComparison::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_StringComparison \
	constexpr auto Invariant = StringComparison::Invariant;\
	constexpr auto InvariantIgnoreCase = StringComparison::InvariantIgnoreCase;\
	constexpr auto CurrentCulture = StringComparison::CurrentCulture;\
	constexpr auto CurrentCultureIgnoreCase = StringComparison::CurrentCultureIgnoreCase;\
	constexpr auto Ordinal = StringComparison::Ordinal;\
	constexpr auto OrdinalIgnoreCase = StringComparison::OrdinalIgnoreCase;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	class $Class_StringComparison final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
		public: using $underlying = StringComparison; using $self = $underlying;
		$self __value;
		$Class_StringComparison(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	ADV_CHECK_FOR_CONCRETE(StringComparison);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringComparison.ast"
	

}