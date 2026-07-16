#include "Char.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	













#ifdef ADV_UNITTEST
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	static bool __Test_cfef23efddf534cd = [](){
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((Builtin::u8('A') + Builtin::i32(32) == Builtin::u8('a')), "b'A'+32==b'a'");
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((++Builtin::u8('A') == Builtin::u8('B')), "++b'A'==b'B'");
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('a').__ref())), "b'a'.IsAscii");
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('\n').__ref())), "b'\\n'.IsAscii");
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAscii)(Builtin::u8(200U).__ref())), "not200u8.IsAscii");
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiDigit)(Builtin::u8('5').__ref())), "b'5'.IsAsciiDigit");
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::u8('9').__ref())), "b'9'.IsDigit");
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsDigit)(Builtin::u8('b').__ref())), "notb'b'.IsDigit");
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsBinDigit)(Builtin::u8('1').__ref())), "b'1'.IsBinDigit");
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsBinDigit)(Builtin::u8('2').__ref())), "notb'2'.IsBinDigit");
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsOctDigit)(Builtin::u8('7').__ref())), "b'7'.IsOctDigit");
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsOctDigit)(Builtin::u8('8').__ref())), "notb'8'.IsOctDigit");
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('9').__ref())), "b'9'.IsHexDigit");
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('F').__ref())), "b'F'.IsHexDigit");
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitUpper)(Builtin::u8('F').__ref())), "b'F'.IsHexDigitUpper");
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('f').__ref())), "b'f'.IsHexDigit");
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitLower)(Builtin::u8('f').__ref())), "b'f'.IsHexDigitLower");
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigitUpper)(Builtin::u8('f').__ref())), "notb'f'.IsHexDigitUpper");
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigit)(Builtin::u8('g').__ref())), "notb'g'.IsHexDigit");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::u8('f').__ref())), "b'f'.IsLetter");
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::u8('Z').__ref())), "b'Z'.IsLetter");
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::u8('0').__ref())), "notb'0'.IsLetter");
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::u8('Z').__ref())), "b'Z'.IsLetterUpper");
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterUpper)(Builtin::u8('z').__ref())), "notb'z'.IsLetterUpper");
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::u8('z').__ref())), "b'z'.IsLetterLower");
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterLower)(Builtin::u8('Z').__ref())), "notb'Z'.IsLetterLower");
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('Z').__ref())), "b'Z'.IsLetterOrDigit");
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('z').__ref())), "b'z'.IsLetterOrDigit");
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('0').__ref())), "b'0'.IsLetterOrDigit");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterOrDigit)(Builtin::u8('_').__ref())), "notb'_'.IsLetterOrDigit");
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsIdentifierChar)(Builtin::u8('_').__ref())), "b'_'.IsIdentifierChar");
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsIdentifierChar)(Builtin::u8(' ').__ref())), "notb' '.IsIdentifierChar");
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::u8('\n').__ref())), "b'\\n'.IsControl");
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsControl)(Builtin::u8(' ').__ref())), "notb' '.IsControl");
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::u8('!').__ref())), "b'!'.IsPunctuation");
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsPunctuation)(Builtin::u8('b').__ref())), "notb'b'.IsPunctuation");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSeparator)(Builtin::u8(' ').__ref())), "b' '.IsSeparator");
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::u8('+').__ref())), "b'+'.IsSymbol");
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSymbol)(Builtin::u8(' ').__ref())), "notb' '.IsSymbol");
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::u8(' ').__ref())), "b' '.IsWhiteSpace");
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::u8('\t').__ref())), "b'\\t'.IsWhiteSpace");
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(Builtin::u8('_').__ref())), "notb'_'.IsWhiteSpace");
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiPrintable)(Builtin::u8('~').__ref())), "b'~'.IsAsciiPrintable");
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::u8('\n').__ref())), "notb'\\n'.IsAsciiPrintable");
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::u8('z').__ref()) == Builtin::u8('z')), "b'z'.ToLower==b'z'");
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::u8('Z').__ref()) == Builtin::u8('z')), "b'Z'.ToLower==b'z'");
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::u8('z').__ref()) == Builtin::u8('Z')), "b'z'.ToUpper==b'Z'");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::u8('Z').__ref()) == Builtin::u8('Z')), "b'Z'.ToUpper==b'Z'");
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::u8), FromDigit)(Builtin::u32(15U), Builtin::u32(16U)) == Builtin::u8('f')), "byte.FromDigit(15u,16u)==b'f'");
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::u8), FromDigit)(Builtin::u32(15U), Builtin::u32(10U)) == nullptr), "byte.FromDigit(15u,10u)==null");
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8('f').__ref()) == ADV_USPCS(SmallF, AsciiChar)()), "b'f'.ToAsciiChar==AsciiChar.SmallF");
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8('\n').__ref()) == ADV_USPCS(LineFeed, AsciiChar)()), "b'\\n'.ToAsciiChar==AsciiChar.LineFeed");
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8(200U).__ref()) == nullptr), "200u8.ToAsciiChar==null");
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::char32(U'a')) > 0), "'❤'>'a'");
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::u8('a')) > 0), "'❤'>b'a'");
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'😆') <=> Builtin::char32(U'❤')) > 0), "'😆'>'❤'");
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::char32(U'😆')) < 0), "'❤'<'😆'");
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((Builtin::u32{Builtin::char32(U'😆')} == Builtin::u32(0x1f606U)), "u32('😆')==0x1f606u");
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::u32{Builtin::char32(U'😆')} <=> Builtin::u32(0x1f600U)) > 0), "u32('😆')>0x1f600u");
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'Z').__ref()) == ADV_USPCS(UppercaseLetter, UnicodeCategory)()), "'Z'.CharUnicodeCategory==UnicodeCategory.UppercaseLetter");
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'z').__ref()) == ADV_USPCS(LowercaseLetter, UnicodeCategory)()), "'z'.CharUnicodeCategory==UnicodeCategory.LowercaseLetter");
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'5').__ref()) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)()), "'5'.CharUnicodeCategory==UnicodeCategory.DecimalDigitNumber");
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'❤').__ref()) == ADV_USPCS(OtherSymbol, UnicodeCategory)()), "'❤'.CharUnicodeCategory==UnicodeCategory.OtherSymbol");
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'😆').__ref()) == ADV_USPCS(OtherSymbol, UnicodeCategory)()), "'😆'.CharUnicodeCategory==UnicodeCategory.OtherSymbol");
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𝟃').__ref()) == ADV_USPCS(MathSymbol, UnicodeCategory)()), "'𝟃'.CharUnicodeCategory==UnicodeCategory.MathSymbol");
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'￦').__ref()) == ADV_USPCS(CurrencySymbol, UnicodeCategory)()), "'￦'.CharUnicodeCategory==UnicodeCategory.CurrencySymbol");
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'｀').__ref()) == ADV_USPCS(ModifierSymbol, UnicodeCategory)()), "'｀'.CharUnicodeCategory==UnicodeCategory.ModifierSymbol");
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'︽').__ref()) == ADV_USPCS(OpenPunctuation, UnicodeCategory)()), "'︽'.CharUnicodeCategory==UnicodeCategory.OpenPunctuation");
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞥞').__ref()) == ADV_USPCS(OtherPunctuation, UnicodeCategory)()), "'𞥞'.CharUnicodeCategory==UnicodeCategory.OtherPunctuation");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'〰').__ref()) == ADV_USPCS(DashPunctuation, UnicodeCategory)()), "'〰'.CharUnicodeCategory==UnicodeCategory.DashPunctuation");
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞤵').__ref()) == ADV_USPCS(LowercaseLetter, UnicodeCategory)()), "'𞤵'.CharUnicodeCategory==UnicodeCategory.LowercaseLetter");
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'ꩰ').__ref()) == ADV_USPCS(ModifierLetter, UnicodeCategory)()), "'ꩰ'.CharUnicodeCategory==UnicodeCategory.ModifierLetter");
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'澲').__ref()) == ADV_USPCS(OtherLetter, UnicodeCategory)()), "'澲'.CharUnicodeCategory==UnicodeCategory.OtherLetter");
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𝔜').__ref()) == ADV_USPCS(UppercaseLetter, UnicodeCategory)()), "'𝔜'.CharUnicodeCategory==UnicodeCategory.UppercaseLetter");
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'ǅ').__ref()) == ADV_USPCS(TitlecaseLetter, UnicodeCategory)()), "'ǅ'.CharUnicodeCategory==UnicodeCategory.TitlecaseLetter");
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞥕').__ref()) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)()), "'𞥕'.CharUnicodeCategory==UnicodeCategory.DecimalDigitNumber");
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𒐹').__ref()) == ADV_USPCS(LetterNumber, UnicodeCategory)()), "'𒐹'.CharUnicodeCategory==UnicodeCategory.LetterNumber");
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'㊈').__ref()) == ADV_USPCS(OtherNumber, UnicodeCategory)()), "'㊈'.CharUnicodeCategory==UnicodeCategory.OtherNumber");
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'5').__ref()) == Builtin::i32(5)), "'5'.NumericValue==5");
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'~').__ref()) == nullptr), "'~'.NumericValue==null");
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'¼').__ref()) == Builtin::f64(0.25)), "'¼'.NumericValue==0.25");
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::char32(U'\n').__ref())), "'\\n'.IsControl");
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::char32(U'\u0090').__ref())), "'\\u0090'.IsControl");
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsControl)(Builtin::char32(U'b').__ref())), "not'b'.IsControl");
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiDigit)(Builtin::char32(U'5').__ref())), "'5'.IsAsciiDigit");
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'5').__ref())), "'5'.IsDigit");
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'٣').__ref())), "'٣'.IsDigit");
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'𞥕').__ref())), "'𞥕'.IsDigit");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsDigit)(Builtin::char32(U'b').__ref())), "not'b'.IsDigit");
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsBinDigit)(Builtin::char32(U'1').__ref())), "'1'.IsBinDigit");
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsBinDigit)(Builtin::char32(U'2').__ref())), "not'2'.IsBinDigit");
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsOctDigit)(Builtin::char32(U'7').__ref())), "'7'.IsOctDigit");
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsOctDigit)(Builtin::char32(U'8').__ref())), "not'8'.IsOctDigit");
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'9').__ref())), "'9'.IsHexDigit");
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'F').__ref())), "'F'.IsHexDigit");
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitUpper)(Builtin::char32(U'F').__ref())), "'F'.IsHexDigitUpper");
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'f').__ref())), "'f'.IsHexDigit");
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitLower)(Builtin::char32(U'f').__ref())), "'f'.IsHexDigitLower");
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigitUpper)(Builtin::char32(U'f').__ref())), "not'f'.IsHexDigitUpper");
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::char32(U'a').__ref())), "'a'.IsLetter");
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::char32(U'a').__ref())), "'a'.IsLetterLower");
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterUpper)(Builtin::char32(U'a').__ref())), "not'a'.IsLetterUpper");
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::char32(U'A').__ref())), "'A'.IsLetterUpper");
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterLower)(Builtin::char32(U'A').__ref())), "not'A'.IsLetterLower");
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'A').__ref())), "'A'.IsLetterOrDigit");
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'5').__ref())), "'5'.IsLetterOrDigit");
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::char32(U'5').__ref())), "not'5'.IsLetter");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'_').__ref())), "not'_'.IsLetterOrDigit");
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::char32(U'澲').__ref())), "'澲'.IsLetter");
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'澲').__ref())), "'澲'.IsLetterOrDigit");
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::char32(U'❤').__ref())), "not'❤'.IsLetter");
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::char32(U'𝔜').__ref())), "'𝔜'.IsLetterUpper");
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::char32(U'𞤵').__ref())), "'𞤵'.IsLetterLower");
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterTitle)(Builtin::char32(U'ǅ').__ref())), "'ǅ'.IsLetterTitle");
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsIdentifierChar)(Builtin::char32(U'_').__ref())), "'_'.IsIdentifierChar");
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsIdentifierChar)(Builtin::char32(U'𝔜').__ref())), "not'𝔜'.IsIdentifierChar");
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::char32(U'!').__ref())), "'!'.IsPunctuation");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::char32(U'‿').__ref())), "'‿'.IsPunctuation");
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsPunctuation)(Builtin::char32(U'a').__ref())), "not'a'.IsPunctuation");
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSeparator)(Builtin::char32(U'\u2029').__ref())), "'\\u2029'.IsSeparator");
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSeparator)(Builtin::char32(U'a').__ref())), "not'a'.IsSeparator");
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::char32(U'+').__ref())), "'+'.IsSymbol");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::char32(U'￦').__ref())), "'￦'.IsSymbol");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSymbol)(Builtin::char32(U'a').__ref())), "not'a'.IsSymbol");
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::char32(U' ').__ref())), "' '.IsWhiteSpace");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::char32(U'\t').__ref())), "'\\t'.IsWhiteSpace");
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(Builtin::char32(U'a').__ref())), "not'a'.IsWhiteSpace");
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'a').__ref())), "'a'.IsAsciiPrintable");
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'\n').__ref())), "not'\\n'.IsAsciiPrintable");
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'𞤵').__ref())), "not'𞤵'.IsAsciiPrintable");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'a')), "'a'.ToLowerAscii=='a'");
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'a')), "'A'.ToLowerAscii=='a'");
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'Б').__ref()) == Builtin::char32(U'Б')), "'Б'.ToLowerAscii=='Б'");
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'A')), "'a'.ToUpperAscii=='A'");
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'A')), "'A'.ToUpperAscii=='A'");
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'б').__ref()) == Builtin::char32(U'б')), "'б'.ToUpperAscii=='б'");
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'a')), "'a'.ToLower=='a'");
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'a')), "'A'.ToLower=='a'");
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'Б').__ref()) == Builtin::char32(U'б')), "'Б'.ToLower=='б'");
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'A')), "'a'.ToUpper=='A'");
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'A')), "'A'.ToUpper=='A'");
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'б').__ref()) == Builtin::char32(U'Б')), "'б'.ToUpper=='Б'");
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'a')), "'a'.ToLowerInvariant=='a'");
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'a')), "'A'.ToLowerInvariant=='a'");
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'Б').__ref()) == Builtin::char32(U'б')), "'Б'.ToLowerInvariant=='б'");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'a').__ref()) == Builtin::char32(U'A')), "'a'.ToUpperInvariant=='A'");
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'A').__ref()) == Builtin::char32(U'A')), "'A'.ToUpperInvariant=='A'");
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'б').__ref()) == Builtin::char32(U'Б')), "'б'.ToUpperInvariant=='Б'");
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'a').__ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'a'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'б').__ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'б'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'澲').__ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'澲'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'ڱ').__ref()) == ADV_USPCS(StrongRightToLeft, StrongBidiCategory)()), "'ڱ'.BidiCategory==StrongBidiCategory.StrongRightToLeft");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	auto _operator_eq_eq_mul(__extension_Char_99_char const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Char_99_char>(obj);
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((__tmp0.IsValid())) {
				#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				const auto& obj = *__tmp0;
				
				#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return __this == obj;
			}
		}
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	auto _operator_lt_eq_gt_mul(__extension_Char_397_char const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Char_397_char>(obj);
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((__tmp0.IsValid())) {
				#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				const auto& obj = *__tmp0;
				
				#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return __this <=> obj;
			}
		}
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::i32(1);
	}
	
} namespace System{

}