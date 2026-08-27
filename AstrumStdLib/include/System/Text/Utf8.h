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
		private: inline constexpr static auto IsValidScalar(System::Span<Builtin::u8> bytes)  -> const bool;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: ASTRUMSTD_API static auto IsValidSimd(System::Span<Builtin::u8> bytes)  -> const bool;
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_Any;
template<class __TT> struct $static_getAny;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_ToNative;
template<class __TT> struct $static_getToNative;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_GreaterThanAny;
template<class __TT> struct $static_getGreaterThanAny;
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
	inline constexpr auto Utf8::IsValidScalar(System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr auto table = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(0xa)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0xb)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x0)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x2)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x7)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1))});
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		Builtin::u8 state{}; 
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		{ auto $for_init_40 = bytes; auto $for_iter_40 = ADV_UFCS(Iterate)($for_init_40.$ref()); while($for_iter_40.$ref().MoveNext()) {
		auto&& b = $for_iter_40.$ref().GetCurrent(); {
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, b))> t = ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, b); 
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			state = ADV_UFCS(_operator_subscript)(table.$ref(), Builtin::UncheckedTag{}, Builtin::i32(256) + Builtin::i32(16) * state + t);
		}}}
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return state == Builtin::i32(0);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	

}