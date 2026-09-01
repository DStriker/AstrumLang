#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Span.h"
using namespace System;

namespace System::Text {
namespace __Unsafe {} namespace __Utf8$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Utf8;
//###############################################################################
//# Type definitions
//###############################################################################
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	struct Utf8 : public Builtin::StaticClass {
		public: using $self = Utf8;
		private: Utf8() = default;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		public: inline constexpr static auto IsValid(System::Span<Builtin::u8> bytes)  -> const bool;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		public: inline constexpr static auto WriteChar(Builtin::char32 c, System::MutableSpan<Builtin::u8> dst)  -> const System::MutableSpan<Builtin::u8>;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		public: inline constexpr static auto GetLength(Builtin::char32 c)  -> const Builtin::usize;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: inline constexpr static auto IsValidScalar(System::Span<Builtin::u8> bytes)  -> const bool;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: ASTRUMSTD_API static auto IsValidSimd(System::Span<Builtin::u8> bytes)  -> const bool;
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_Any;
template<class __TT> struct $static_getAny;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_GreaterThanAny;
template<class __TT> struct $static_getGreaterThanAny;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_ToNative;
template<class __TT> struct $static_getToNative;
template<class __TT> struct $static_None;
template<class __TT> struct $static_getNone;
template<class __TT> struct $static_CopyBlockNonOverlapping;
template<class __TT> struct $static_getCopyBlockNonOverlapping;
template<class __TT> struct $static_IsValid;
template<class __TT> struct $static_getIsValid;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
} namespace System::Text {
//###############################################################################
//# Function definitions
//###############################################################################

#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	inline constexpr auto Utf8::IsValid(System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if (std::is_constant_evaluated()) {
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return IsValidScalar(bytes);
		} else {
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			{
				#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
				#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if ((length <=> Builtin::i32(16)) <= 0) {
					#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return IsValidScalar(bytes);
				} else {
					#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					{
						#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						return IsValidSimd(bytes);
					}
				}
			}
		}
		return {};
	}
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	inline constexpr auto Utf8::WriteChar(Builtin::char32 c, System::MutableSpan<Builtin::u8> dst)  -> const System::MutableSpan<Builtin::u8>
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(GetLength(c))> length = GetLength(c); 
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if ((ADV_UPCS(Length)(dst.$ref()) <=> length) < 0) {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(length)>, false>({}, length)))> output = ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(length)>, false>({}, length)); 
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if (length == Builtin::i32(1)) {
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) = Builtin::Cast<true, Builtin::u8>(c);
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return output;
		}
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::u32 codepoint = c; 
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(Builtin::u8{codepoint & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U))> last1 = Builtin::u8{codepoint & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U); 
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(Builtin::u8{(codepoint >> Builtin::i32(6)) & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U))> last2 = Builtin::u8{(codepoint >> Builtin::i32(6)) & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U); 
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(Builtin::u8{(codepoint >> Builtin::i32(12)) & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U))> last3 = Builtin::u8{(codepoint >> Builtin::i32(12)) & Builtin::u32(0x3FU)} | Builtin::u8(0b10000000U); 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(Builtin::u8{(codepoint >> Builtin::i32(18)) & Builtin::u32(0x3FU)} | Builtin::u8(0b11110000U))> last4 = Builtin::u8{(codepoint >> Builtin::i32(18)) & Builtin::u32(0x3FU)} | Builtin::u8(0b11110000U); 
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		{
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			auto __tmp__valid_39 = Builtin::Cast<false, std::decay_t<decltype(length)>::$self>(length);
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if(__tmp__valid_39.IsValid() && Builtin::Is(*__tmp__valid_39, Builtin::i32(2)))  {
				#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const auto& length = *__tmp__valid_39;
				#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				{
					#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) = last2 | Builtin::u8(0b11000000U);
					#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) = last1;
				}
			}
			else {
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if(__tmp__valid_39.IsValid() && Builtin::Is(*__tmp__valid_39, Builtin::i32(3)))  {
					#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					const auto& length = *__tmp__valid_39;
					#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					{
						#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) = last3 | Builtin::u8(0b11100000U);
						#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) = last2;
						#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) = last1;
					}
				}
				else {
					#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					{
						#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) = last4;
						#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) = last3;
						#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) = last2;
						#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) = last1;
					}
					
				}
			}
		}

		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return output;
	}
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	inline constexpr auto Utf8::GetLength(Builtin::char32 c)  -> const Builtin::usize
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::u32 codepoint = c; 
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			auto __tmp__valid_62 = Builtin::Cast<false, std::decay_t<decltype(codepoint)>::$self>(codepoint);
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if(__tmp__valid_62.IsValid() && Builtin::IsLess(*__tmp__valid_62, Builtin::u32(0x80U))) {
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const auto& codepoint = *__tmp__valid_62;
				return Builtin::u32(1U);
			}
			else {
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if(__tmp__valid_62.IsValid() && Builtin::IsLess(*__tmp__valid_62, Builtin::u32(0x800U))) {
					#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					const auto& codepoint = *__tmp__valid_62;
					return Builtin::u32(2U);
				}
				else {
					#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					if(__tmp__valid_62.IsValid() && Builtin::IsLess(*__tmp__valid_62, Builtin::u32(0x10000U))) {
						#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						const auto& codepoint = *__tmp__valid_62;
						return Builtin::u32(3U);
					}
					else {
						return Builtin::u32(4U);
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	inline constexpr auto Utf8::IsValidScalar(System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr auto table = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(0xa)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0xb)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x0)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x2)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x7)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1))});
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		Builtin::u8 state{}; 
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		{ auto $for_init_90 = bytes; auto $for_iter_90 = ADV_UFCS(Iterate)($for_init_90.$ref()); while($for_iter_90.$ref().MoveNext()) {
		auto&& b = $for_iter_90.$ref().GetCurrent(); {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, b))> t = ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, b); 
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			state = ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, Builtin::i32(256) + Builtin::i32(16) * state + t);
		}}}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return state == Builtin::i32(0);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	

}