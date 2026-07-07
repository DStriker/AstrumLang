#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Globalization {
namespace __Unsafe {} namespace __UnicodeCategory_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class UnicodeCategory;
class __Class_UnicodeCategory;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_UnicodeCategory;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	struct UnicodeCategory final : public Builtin::Enum {
		public: using __self = UnicodeCategory;
		public: using __class = __Class_UnicodeCategory;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		private: Builtin::i32 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::i32)
		public: constexpr UnicodeCategory() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		private: static constexpr Builtin::Str __names[] = {"UppercaseLetter", "LowercaseLetter", "TitlecaseLetter", "ModifierLetter", "OtherLetter", "NonSpacingMark", "SpacingCombiningMark", "EnclosingMark", "DecimalDigitNumber", "LetterNumber", "OtherNumber", "SpaceSeparator", "LineSeparator", "ParagraphSeparator", "Control", "Format", "Surrogate", "PrivateUse", "ConnectorPunctuation", "DashPunctuation", "OpenPunctuation", "ClosePunctuation", "InitialQuotePunctuation", "FinalQuotePunctuation", "OtherPunctuation", "MathSymbol", "CurrencySymbol", "ModifierSymbol", "OtherSymbol", "OtherNotAssigned"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static constexpr int __variants = 30;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		private: static const UnicodeCategory __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static constexpr std::span<const UnicodeCategory> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const __self& that) const noexcept { return __value <=> that.__value; } 
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory UppercaseLetter;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory LowercaseLetter;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory TitlecaseLetter;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory ModifierLetter;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OtherLetter;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory NonSpacingMark;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory SpacingCombiningMark;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory EnclosingMark;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory DecimalDigitNumber;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory LetterNumber;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OtherNumber;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory SpaceSeparator;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory LineSeparator;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory ParagraphSeparator;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory Control;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory Format;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory Surrogate;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory PrivateUse;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory ConnectorPunctuation;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory DashPunctuation;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OpenPunctuation;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory ClosePunctuation;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory InitialQuotePunctuation;
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory FinalQuotePunctuation;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OtherPunctuation;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory MathSymbol;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory CurrencySymbol;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory ModifierSymbol;
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OtherSymbol;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: static ASTRUMSTD_HIDDEN const UnicodeCategory OtherNotAssigned;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: constexpr operator Builtin::i32() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		private: constexpr UnicodeCategory(Builtin::i32 value) : __value(value) {}
		public: static constexpr __self FromValue(Builtin::i32 rawValue) { return __self(rawValue); }
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::UppercaseLetter = Builtin::i32(Builtin::i32(0));
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::LowercaseLetter = Builtin::i32(Builtin::i32(1));
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::TitlecaseLetter = Builtin::i32(Builtin::i32(2));
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::ModifierLetter = Builtin::i32(Builtin::i32(3));
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OtherLetter = Builtin::i32(Builtin::i32(4));
	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::NonSpacingMark = Builtin::i32(Builtin::i32(5));
	
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::SpacingCombiningMark = Builtin::i32(Builtin::i32(6));
	
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::EnclosingMark = Builtin::i32(Builtin::i32(7));
	
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::DecimalDigitNumber = Builtin::i32(Builtin::i32(8));
	
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::LetterNumber = Builtin::i32(Builtin::i32(9));
	
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OtherNumber = Builtin::i32(Builtin::i32(10));
	
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::SpaceSeparator = Builtin::i32(Builtin::i32(11));
	
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::LineSeparator = Builtin::i32(Builtin::i32(12));
	
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::ParagraphSeparator = Builtin::i32(Builtin::i32(13));
	
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::Control = Builtin::i32(Builtin::i32(14));
	
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::Format = Builtin::i32(Builtin::i32(15));
	
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::Surrogate = Builtin::i32(Builtin::i32(16));
	
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::PrivateUse = Builtin::i32(Builtin::i32(17));
	
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::ConnectorPunctuation = Builtin::i32(Builtin::i32(18));
	
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::DashPunctuation = Builtin::i32(Builtin::i32(19));
	
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OpenPunctuation = Builtin::i32(Builtin::i32(20));
	
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::ClosePunctuation = Builtin::i32(Builtin::i32(21));
	
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::InitialQuotePunctuation = Builtin::i32(Builtin::i32(22));
	
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::FinalQuotePunctuation = Builtin::i32(Builtin::i32(23));
	
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OtherPunctuation = Builtin::i32(Builtin::i32(24));
	
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::MathSymbol = Builtin::i32(Builtin::i32(25));
	
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::CurrencySymbol = Builtin::i32(Builtin::i32(26));
	
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::ModifierSymbol = Builtin::i32(Builtin::i32(27));
	
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OtherSymbol = Builtin::i32(Builtin::i32(28));
	
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	inline constexpr UnicodeCategory UnicodeCategory::OtherNotAssigned = Builtin::i32(Builtin::i32(29));
	inline constexpr UnicodeCategory UnicodeCategory::__values[] = {UppercaseLetter, LowercaseLetter, TitlecaseLetter, ModifierLetter, OtherLetter, NonSpacingMark, SpacingCombiningMark, EnclosingMark, DecimalDigitNumber, LetterNumber, OtherNumber, SpaceSeparator, LineSeparator, ParagraphSeparator, Control, Format, Surrogate, PrivateUse, ConnectorPunctuation, DashPunctuation, OpenPunctuation, ClosePunctuation, InitialQuotePunctuation, FinalQuotePunctuation, OtherPunctuation, MathSymbol, CurrencySymbol, ModifierSymbol, OtherSymbol, OtherNotAssigned};
	inline constexpr std::span<const UnicodeCategory> UnicodeCategory::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_UnicodeCategory \
	constexpr auto UppercaseLetter = UnicodeCategory::UppercaseLetter;\
	constexpr auto LowercaseLetter = UnicodeCategory::LowercaseLetter;\
	constexpr auto TitlecaseLetter = UnicodeCategory::TitlecaseLetter;\
	constexpr auto ModifierLetter = UnicodeCategory::ModifierLetter;\
	constexpr auto OtherLetter = UnicodeCategory::OtherLetter;\
	constexpr auto NonSpacingMark = UnicodeCategory::NonSpacingMark;\
	constexpr auto SpacingCombiningMark = UnicodeCategory::SpacingCombiningMark;\
	constexpr auto EnclosingMark = UnicodeCategory::EnclosingMark;\
	constexpr auto DecimalDigitNumber = UnicodeCategory::DecimalDigitNumber;\
	constexpr auto LetterNumber = UnicodeCategory::LetterNumber;\
	constexpr auto OtherNumber = UnicodeCategory::OtherNumber;\
	constexpr auto SpaceSeparator = UnicodeCategory::SpaceSeparator;\
	constexpr auto LineSeparator = UnicodeCategory::LineSeparator;\
	constexpr auto ParagraphSeparator = UnicodeCategory::ParagraphSeparator;\
	constexpr auto Control = UnicodeCategory::Control;\
	constexpr auto Format = UnicodeCategory::Format;\
	constexpr auto Surrogate = UnicodeCategory::Surrogate;\
	constexpr auto PrivateUse = UnicodeCategory::PrivateUse;\
	constexpr auto ConnectorPunctuation = UnicodeCategory::ConnectorPunctuation;\
	constexpr auto DashPunctuation = UnicodeCategory::DashPunctuation;\
	constexpr auto OpenPunctuation = UnicodeCategory::OpenPunctuation;\
	constexpr auto ClosePunctuation = UnicodeCategory::ClosePunctuation;\
	constexpr auto InitialQuotePunctuation = UnicodeCategory::InitialQuotePunctuation;\
	constexpr auto FinalQuotePunctuation = UnicodeCategory::FinalQuotePunctuation;\
	constexpr auto OtherPunctuation = UnicodeCategory::OtherPunctuation;\
	constexpr auto MathSymbol = UnicodeCategory::MathSymbol;\
	constexpr auto CurrencySymbol = UnicodeCategory::CurrencySymbol;\
	constexpr auto ModifierSymbol = UnicodeCategory::ModifierSymbol;\
	constexpr auto OtherSymbol = UnicodeCategory::OtherSymbol;\
	constexpr auto OtherNotAssigned = UnicodeCategory::OtherNotAssigned;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	class __Class_UnicodeCategory final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
		public: using __underlying = UnicodeCategory; using __self = __underlying;
		__self __value;
		__Class_UnicodeCategory(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	ADV_CHECK_FOR_CONCRETE(UnicodeCategory);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\UnicodeCategory.ast"
	

}