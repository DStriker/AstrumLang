#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "CharIterator.h"

namespace System {
namespace __Unsafe {} namespace __StringSpliterator$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class StringSplitOptions;
class $Class_StringSplitOptions;
class StringSpliterator;
class StringReverseSpliterator;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_StringSplitOptions;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	struct [[clang::annotate("UserAttr: Flags")]] StringSplitOptions final : public Builtin::Enum {
		public: using $self = StringSplitOptions;
		public: using $class = $Class_StringSplitOptions;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::i32 __value;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::i32)
		public: constexpr StringSplitOptions() noexcept = default;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: static constexpr Builtin::StaticStr __names[] = {"None", "SkipEmptyEntries", "TrimEntries", "ProcessLineEndingAsSingleChar"};
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static constexpr int __variants = 4;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static constexpr std::span<const Builtin::StaticStr> GetNames() noexcept { return __names; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: static const StringSplitOptions __values[];
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static constexpr std::span<const StringSplitOptions> GetValues() noexcept;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr StringSplitOptions operator &(StringSplitOptions other) const noexcept { return (__value & other.__value); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr bool HasFlag(StringSplitOptions other) const noexcept { return static_cast<bool>(__value & other.__value); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr const StringSplitOptions operator |(StringSplitOptions other) const noexcept { return (__value | other.__value); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr StringSplitOptions& operator |=(StringSplitOptions other) noexcept { __value |= other.__value; return *this; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr StringSplitOptions& AddFlag(StringSplitOptions other) noexcept { __value |= other.__value; return *this; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr StringSplitOptions RemoveFlag(StringSplitOptions other) noexcept { __value &=~ other.__value; return __value; }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static ASTRUMSTD_HIDDEN const StringSplitOptions None;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static ASTRUMSTD_HIDDEN const StringSplitOptions SkipEmptyEntries;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static ASTRUMSTD_HIDDEN const StringSplitOptions TrimEntries;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static ASTRUMSTD_HIDDEN const StringSplitOptions ProcessLineEndingAsSingleChar;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: constexpr operator Builtin::i32() const noexcept { return __value; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: constexpr StringSplitOptions(Builtin::i32 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::i32 rawValue) { return $self(rawValue); }
		
	};
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline constexpr StringSplitOptions StringSplitOptions::None = Builtin::i32(Builtin::i32(0));
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline constexpr StringSplitOptions StringSplitOptions::SkipEmptyEntries = Builtin::i32(Builtin::i32(1));
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline constexpr StringSplitOptions StringSplitOptions::TrimEntries = Builtin::i32(Builtin::i32(2));
	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline constexpr StringSplitOptions StringSplitOptions::ProcessLineEndingAsSingleChar = Builtin::i32(Builtin::i32(4));
	inline constexpr StringSplitOptions StringSplitOptions::__values[] = {None, SkipEmptyEntries, TrimEntries, ProcessLineEndingAsSingleChar};
	inline constexpr std::span<const StringSplitOptions> StringSplitOptions::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_StringSplitOptions \
	constexpr auto None = StringSplitOptions::None;\
	constexpr auto SkipEmptyEntries = StringSplitOptions::SkipEmptyEntries;\
	constexpr auto TrimEntries = StringSplitOptions::TrimEntries;\
	constexpr auto ProcessLineEndingAsSingleChar = StringSplitOptions::ProcessLineEndingAsSingleChar;\
	
	
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	struct [[clang::annotate("ref_struct")]] StringSpliterator final : public Builtin::RefStruct {
		public: using $self = StringSpliterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: using ElementType = Builtin::Str;
		public: StringSpliterator() = default;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, Builtin::u8 separator, StringSplitOptions options = StringSplitOptions::None) ;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, Builtin::u8 separator, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, StringSplitOptions options = StringSplitOptions::None) ;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, StringSplitOptions options = StringSplitOptions::None) ;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None) ;
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: ASTRUMSTD_API auto MoveNext()  -> const bool;
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: System::Span<Builtin::u8> _src;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::Nullable<Builtin::u8> _separatorByte;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: System::Span<Builtin::u8> _separatorBytes;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::Nullable<Predicate<Builtin::char32>> _separatorFilter;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: StringSplitOptions _options;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _startCurrent;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _endCurrent;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _startNext;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _count;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _maxCount = ADV_USPCS(MaxValue, Builtin::usize)();
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isBuffer{};
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isAny{};
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isFilter{};
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static constexpr auto ASCII_WHITESPACES = Builtin::StaticStr{" \t\r\n\f"};
		
	};
	
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringSpliterator, IAbstractIterator, IAbstractIterator, StringSpliterator);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringSpliterator, IIterator, IIterator<Builtin::Str>, StringSpliterator);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringSpliterator, IAbstractSequence, IAbstractSequence, StringSpliterator);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringSpliterator, ISequence, ISequence<Builtin::Str>, StringSpliterator);
	
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	struct [[clang::annotate("ref_struct")]] StringReverseSpliterator final : public Builtin::RefStruct {
		public: using $self = StringReverseSpliterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: using ElementType = Builtin::Str;
		public: StringReverseSpliterator() = default;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, Builtin::u8 separator, StringSplitOptions options = StringSplitOptions::None) ;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, Builtin::u8 separator, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, StringSplitOptions options = StringSplitOptions::None) ;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None) ;
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, StringSplitOptions options = StringSplitOptions::None) ;
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None) ;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: ASTRUMSTD_API auto MoveNext()  -> const bool;
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: System::Span<Builtin::u8> _src;
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::Nullable<Builtin::u8> _separatorByte;
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: System::Span<Builtin::u8> _separatorBytes;
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::Nullable<Predicate<Builtin::char32>> _separatorFilter;
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: StringSplitOptions _options;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _startCurrent;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _endCurrent;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _endNext;
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _count;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: Builtin::usize _maxCount = ADV_USPCS(MaxValue, Builtin::usize)();
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isBuffer{};
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isAny{};
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		private: bool _isFilter{};
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: static constexpr auto ASCII_WHITESPACES = Builtin::StaticStr{" \t\r\n\f"};
		
	};
	
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringReverseSpliterator, IAbstractIterator, IAbstractIterator, StringReverseSpliterator);
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringReverseSpliterator, IIterator, IIterator<Builtin::Str>, StringReverseSpliterator);
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringReverseSpliterator, IAbstractSequence, IAbstractSequence, StringReverseSpliterator);
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(StringReverseSpliterator, ISequence, ISequence<Builtin::Str>, StringReverseSpliterator);
	
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	class $Class_StringSplitOptions final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		public: using $underlying = StringSplitOptions; using $self = $underlying;
		$self __value;
		$Class_StringSplitOptions(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	ADV_CHECK_FOR_CONCRETE(StringSplitOptions);
	
} namespace $extensions {
template<class __TT> struct $static_IsEmpty;
template<class __TT> struct $static_getIsEmpty;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_HasFlag;
template<class __TT> struct $static_getHasFlag;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_IndexOfAny;
template<class __TT> struct $static_getIndexOfAny;
template<class __TT> struct $static_IsAscii;
template<class __TT> struct $static_getIsAscii;
template<class __TT> struct $static_IndexOf;
template<class __TT> struct $static_getIndexOf;
template<class __TT> struct $static_TrimStart;
template<class __TT> struct $static_getTrimStart;
template<class __TT> struct $static_TrimEnd;
template<class __TT> struct $static_getTrimEnd;
template<class __TT> struct $static_LastIndexOfAny;
template<class __TT> struct $static_getLastIndexOfAny;
template<class __TT> struct $static_LastIndexOf;
template<class __TT> struct $static_getLastIndexOf;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, Builtin::u8 separator, StringSplitOptions options)  : 
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorByte{separator}, 
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (!ADV_UPCS(IsAscii)(separator.$ref())) {
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, Builtin::u8 separator, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorByte{separator}, 
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (!ADV_UPCS(IsAscii)(separator.$ref())) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, StringSplitOptions options)  : 
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorBytes{separators}, 
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isAny{Builtin::Boolean(true)}
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (ADV_UPCS(IsEmpty)(separators.$ref())) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorBytes = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), Builtin::u32(5U));
		} else {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				{ auto $for_init_61 = separators; auto $for_iter_61 = ADV_UFCS(Iterate)($for_init_61.$ref()); while($for_iter_61.$ref().MoveNext()) {
				auto&& s = $for_iter_61.$ref().GetCurrent(); {
					#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (!ADV_UPCS(IsAscii)(s.$ref())) {
						#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}}}
			}
		}
	}
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorBytes{separators}, 
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}, 
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isAny{Builtin::Boolean(true)}
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (ADV_UPCS(IsEmpty)(separators.$ref())) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorBytes = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), Builtin::u32(5U));
		} else {
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				{ auto $for_init_78 = separators; auto $for_iter_78 = ADV_UFCS(Iterate)($for_init_78.$ref()); while($for_iter_78.$ref().MoveNext()) {
				auto&& s = $for_iter_78.$ref().GetCurrent(); {
					#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (!ADV_UPCS(IsAscii)(s.$ref())) {
						#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}}}
			}
		}
	}
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, StringSplitOptions options) 
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_ASSERT((single), "single");
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_src = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()));
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_separatorBytes = separatorString;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_options = options;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, Builtin::usize maxCount, StringSplitOptions options) 
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_ASSERT((single), "single");
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_src = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()));
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_separatorBytes = separatorString;
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_options = options;
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_maxCount = maxCount;
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, StringSplitOptions options)  : 
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorFilter{filter}, 
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isFilter{Builtin::Boolean(true)}
	{
	}
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringSpliterator::StringSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorFilter{filter}, 
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}, 
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isFilter{Builtin::Boolean(true)}
	{
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline auto StringSpliterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)))> bytes = ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)); 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		return ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(bytes);
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline auto StringSpliterator::Iterate() const  -> const $self
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, Builtin::u8 separator, StringSplitOptions options)  : 
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorByte{separator}, 
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (!ADV_UPCS(IsAscii)(separator.$ref())) {
			#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, Builtin::u8 separator, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorByte{separator}, 
	#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}, 
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (!ADV_UPCS(IsAscii)(separator.$ref())) {
			#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, StringSplitOptions options)  : 
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorBytes{separators}, 
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}, 
	#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isAny{Builtin::Boolean(true)}
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (ADV_UPCS(IsEmpty)(separators.$ref())) {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorBytes = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), Builtin::u32(5U));
		} else {
			#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				{ auto $for_init_244 = separators; auto $for_iter_244 = ADV_UFCS(Iterate)($for_init_244.$ref()); while($for_iter_244.$ref().MoveNext()) {
				auto&& s = $for_iter_244.$ref().GetCurrent(); {
					#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (!ADV_UPCS(IsAscii)(s.$ref())) {
						#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}}}
			}
		}
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separators, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorBytes{separators}, 
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}, 
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}, 
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isAny{Builtin::Boolean(true)}
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (ADV_UPCS(IsEmpty)(separators.$ref())) {
			#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorBytes = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), Builtin::u32(5U));
		} else {
			#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				{ auto $for_init_262 = separators; auto $for_iter_262 = ADV_UFCS(Iterate)($for_init_262.$ref()); while($for_iter_262.$ref().MoveNext()) {
				auto&& s = $for_iter_262.$ref().GetCurrent(); {
					#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (!ADV_UPCS(IsAscii)(s.$ref())) {
						#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}}}
			}
		}
	}
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, StringSplitOptions options)  : 
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorFilter{filter}, 
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}, 
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isFilter{Builtin::Boolean(true)}
	{
	}
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  : 
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_src{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()))}, 
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_separatorFilter{filter}, 
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_options{options}, 
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_endNext{ADV_UFCS(GetByteLength)(src.$ref())}, 
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_maxCount{maxCount}, 
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	_isFilter{Builtin::Boolean(true)}
	{
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, StringSplitOptions options) 
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_ASSERT((single), "single");
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_src = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()));
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_separatorBytes = separatorString;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_options = options;
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_endNext = ADV_UFCS(GetByteLength)(src.$ref());
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline StringReverseSpliterator::StringReverseSpliterator(Builtin::Str src, System::Span<Builtin::u8> separatorString, bool single, Builtin::usize maxCount, StringSplitOptions options) 
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_ASSERT((single), "single");
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_src = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(src.$ref()), ADV_UFCS(GetByteLength)(src.$ref()));
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_separatorBytes = separatorString;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_options = options;
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_endNext = ADV_UFCS(GetByteLength)(src.$ref());
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_maxCount = maxCount;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline auto StringReverseSpliterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)))> bytes = ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)); 
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		return ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(bytes);
	}
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	inline auto StringReverseSpliterator::Iterate() const  -> const $self
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	

}