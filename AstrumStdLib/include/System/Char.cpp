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
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	static bool $Test_cfef23efddf534cd = [](){
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((Builtin::u8('A') + Builtin::i32(32) == Builtin::u8('a')), "b'A'+32==b'a'");
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((++Builtin::u8('A') == Builtin::u8('B')), "++b'A'==b'B'");
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('a').$ref())), "b'a'.IsAscii");
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('\n').$ref())), "b'\\n'.IsAscii");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAscii)(Builtin::u8(200U).$ref())), "not200u8.IsAscii");
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiDigit)(Builtin::u8('5').$ref())), "b'5'.IsAsciiDigit");
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::u8('9').$ref())), "b'9'.IsDigit");
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsDigit)(Builtin::u8('b').$ref())), "notb'b'.IsDigit");
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsBinDigit)(Builtin::u8('1').$ref())), "b'1'.IsBinDigit");
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsBinDigit)(Builtin::u8('2').$ref())), "notb'2'.IsBinDigit");
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsOctDigit)(Builtin::u8('7').$ref())), "b'7'.IsOctDigit");
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsOctDigit)(Builtin::u8('8').$ref())), "notb'8'.IsOctDigit");
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('9').$ref())), "b'9'.IsHexDigit");
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('F').$ref())), "b'F'.IsHexDigit");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitUpper)(Builtin::u8('F').$ref())), "b'F'.IsHexDigitUpper");
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::u8('f').$ref())), "b'f'.IsHexDigit");
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitLower)(Builtin::u8('f').$ref())), "b'f'.IsHexDigitLower");
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigitUpper)(Builtin::u8('f').$ref())), "notb'f'.IsHexDigitUpper");
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigit)(Builtin::u8('g').$ref())), "notb'g'.IsHexDigit");
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::u8('f').$ref())), "b'f'.IsLetter");
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::u8('Z').$ref())), "b'Z'.IsLetter");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::u8('0').$ref())), "notb'0'.IsLetter");
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::u8('Z').$ref())), "b'Z'.IsLetterUpper");
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterUpper)(Builtin::u8('z').$ref())), "notb'z'.IsLetterUpper");
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::u8('z').$ref())), "b'z'.IsLetterLower");
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterLower)(Builtin::u8('Z').$ref())), "notb'Z'.IsLetterLower");
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('Z').$ref())), "b'Z'.IsLetterOrDigit");
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('z').$ref())), "b'z'.IsLetterOrDigit");
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::u8('0').$ref())), "b'0'.IsLetterOrDigit");
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterOrDigit)(Builtin::u8('_').$ref())), "notb'_'.IsLetterOrDigit");
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsIdentifierChar)(Builtin::u8('_').$ref())), "b'_'.IsIdentifierChar");
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsIdentifierChar)(Builtin::u8(' ').$ref())), "notb' '.IsIdentifierChar");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::u8('\n').$ref())), "b'\\n'.IsControl");
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsControl)(Builtin::u8(' ').$ref())), "notb' '.IsControl");
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::u8('!').$ref())), "b'!'.IsPunctuation");
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsPunctuation)(Builtin::u8('b').$ref())), "notb'b'.IsPunctuation");
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSeparator)(Builtin::u8(' ').$ref())), "b' '.IsSeparator");
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::u8('+').$ref())), "b'+'.IsSymbol");
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSymbol)(Builtin::u8(' ').$ref())), "notb' '.IsSymbol");
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::u8(' ').$ref())), "b' '.IsWhiteSpace");
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::u8('\t').$ref())), "b'\\t'.IsWhiteSpace");
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(Builtin::u8('_').$ref())), "notb'_'.IsWhiteSpace");
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiPrintable)(Builtin::u8('~').$ref())), "b'~'.IsAsciiPrintable");
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::u8('\n').$ref())), "notb'\\n'.IsAsciiPrintable");
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::u8('z').$ref()) == Builtin::u8('z')), "b'z'.ToLower==b'z'");
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::u8('Z').$ref()) == Builtin::u8('z')), "b'Z'.ToLower==b'z'");
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::u8('z').$ref()) == Builtin::u8('Z')), "b'z'.ToUpper==b'Z'");
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::u8('Z').$ref()) == Builtin::u8('Z')), "b'Z'.ToUpper==b'Z'");
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::u8), FromDigit)(Builtin::u32(15U), Builtin::u32(16U)) == Builtin::u8('f')), "byte.FromDigit(15u,16u)==b'f'");
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::u8), FromDigit)(Builtin::u32(15U), Builtin::u32(10U)) == nullptr), "byte.FromDigit(15u,10u)==null");
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8('f').$ref()) == ADV_USPCS(SmallF, AsciiChar)()), "b'f'.ToAsciiChar==AsciiChar.SmallF");
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8('\n').$ref()) == ADV_USPCS(LineFeed, AsciiChar)()), "b'\\n'.ToAsciiChar==AsciiChar.LineFeed");
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToAsciiChar)(Builtin::u8(200U).$ref()) == nullptr), "200u8.ToAsciiChar==null");
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::char32(U'a')) > 0), "'❤'>'a'");
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::u8('a')) > 0), "'❤'>b'a'");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'😆') <=> Builtin::char32(U'❤')) > 0), "'😆'>'❤'");
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::char32(U'❤') <=> Builtin::char32(U'😆')) < 0), "'❤'<'😆'");
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((Builtin::u32{Builtin::char32(U'😆')} == Builtin::u32(0x1f606U)), "u32('😆')==0x1f606u");
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((Builtin::u32{Builtin::char32(U'😆')} <=> Builtin::u32(0x1f600U)) > 0), "u32('😆')>0x1f600u");
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'Z').$ref()) == ADV_USPCS(UppercaseLetter, UnicodeCategory)()), "'Z'.CharUnicodeCategory==UnicodeCategory.UppercaseLetter");
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'z').$ref()) == ADV_USPCS(LowercaseLetter, UnicodeCategory)()), "'z'.CharUnicodeCategory==UnicodeCategory.LowercaseLetter");
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'5').$ref()) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)()), "'5'.CharUnicodeCategory==UnicodeCategory.DecimalDigitNumber");
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'❤').$ref()) == ADV_USPCS(OtherSymbol, UnicodeCategory)()), "'❤'.CharUnicodeCategory==UnicodeCategory.OtherSymbol");
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'😆').$ref()) == ADV_USPCS(OtherSymbol, UnicodeCategory)()), "'😆'.CharUnicodeCategory==UnicodeCategory.OtherSymbol");
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𝟃').$ref()) == ADV_USPCS(MathSymbol, UnicodeCategory)()), "'𝟃'.CharUnicodeCategory==UnicodeCategory.MathSymbol");
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'￦').$ref()) == ADV_USPCS(CurrencySymbol, UnicodeCategory)()), "'￦'.CharUnicodeCategory==UnicodeCategory.CurrencySymbol");
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'｀').$ref()) == ADV_USPCS(ModifierSymbol, UnicodeCategory)()), "'｀'.CharUnicodeCategory==UnicodeCategory.ModifierSymbol");
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'︽').$ref()) == ADV_USPCS(OpenPunctuation, UnicodeCategory)()), "'︽'.CharUnicodeCategory==UnicodeCategory.OpenPunctuation");
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞥞').$ref()) == ADV_USPCS(OtherPunctuation, UnicodeCategory)()), "'𞥞'.CharUnicodeCategory==UnicodeCategory.OtherPunctuation");
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'〰').$ref()) == ADV_USPCS(DashPunctuation, UnicodeCategory)()), "'〰'.CharUnicodeCategory==UnicodeCategory.DashPunctuation");
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞤵').$ref()) == ADV_USPCS(LowercaseLetter, UnicodeCategory)()), "'𞤵'.CharUnicodeCategory==UnicodeCategory.LowercaseLetter");
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'ꩰ').$ref()) == ADV_USPCS(ModifierLetter, UnicodeCategory)()), "'ꩰ'.CharUnicodeCategory==UnicodeCategory.ModifierLetter");
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'澲').$ref()) == ADV_USPCS(OtherLetter, UnicodeCategory)()), "'澲'.CharUnicodeCategory==UnicodeCategory.OtherLetter");
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𝔜').$ref()) == ADV_USPCS(UppercaseLetter, UnicodeCategory)()), "'𝔜'.CharUnicodeCategory==UnicodeCategory.UppercaseLetter");
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'ǅ').$ref()) == ADV_USPCS(TitlecaseLetter, UnicodeCategory)()), "'ǅ'.CharUnicodeCategory==UnicodeCategory.TitlecaseLetter");
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𞥕').$ref()) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)()), "'𞥕'.CharUnicodeCategory==UnicodeCategory.DecimalDigitNumber");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'𒐹').$ref()) == ADV_USPCS(LetterNumber, UnicodeCategory)()), "'𒐹'.CharUnicodeCategory==UnicodeCategory.LetterNumber");
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(CharUnicodeCategory)(Builtin::char32(U'㊈').$ref()) == ADV_USPCS(OtherNumber, UnicodeCategory)()), "'㊈'.CharUnicodeCategory==UnicodeCategory.OtherNumber");
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'5').$ref()) == Builtin::i32(5)), "'5'.NumericValue==5");
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'~').$ref()) == nullptr), "'~'.NumericValue==null");
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(NumericValue)(Builtin::char32(U'¼').$ref()) == Builtin::f64(0.25)), "'¼'.NumericValue==0.25");
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::char32(U'\n').$ref())), "'\\n'.IsControl");
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsControl)(Builtin::char32(U'\u0090').$ref())), "'\\u0090'.IsControl");
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsControl)(Builtin::char32(U'b').$ref())), "not'b'.IsControl");
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiDigit)(Builtin::char32(U'5').$ref())), "'5'.IsAsciiDigit");
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'5').$ref())), "'5'.IsDigit");
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'٣').$ref())), "'٣'.IsDigit");
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsDigit)(Builtin::char32(U'𞥕').$ref())), "'𞥕'.IsDigit");
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsDigit)(Builtin::char32(U'b').$ref())), "not'b'.IsDigit");
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsBinDigit)(Builtin::char32(U'1').$ref())), "'1'.IsBinDigit");
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsBinDigit)(Builtin::char32(U'2').$ref())), "not'2'.IsBinDigit");
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsOctDigit)(Builtin::char32(U'7').$ref())), "'7'.IsOctDigit");
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsOctDigit)(Builtin::char32(U'8').$ref())), "not'8'.IsOctDigit");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'9').$ref())), "'9'.IsHexDigit");
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'F').$ref())), "'F'.IsHexDigit");
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitUpper)(Builtin::char32(U'F').$ref())), "'F'.IsHexDigitUpper");
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigit)(Builtin::char32(U'f').$ref())), "'f'.IsHexDigit");
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsHexDigitLower)(Builtin::char32(U'f').$ref())), "'f'.IsHexDigitLower");
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexDigitUpper)(Builtin::char32(U'f').$ref())), "not'f'.IsHexDigitUpper");
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::char32(U'a').$ref())), "'a'.IsLetter");
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::char32(U'a').$ref())), "'a'.IsLetterLower");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterUpper)(Builtin::char32(U'a').$ref())), "not'a'.IsLetterUpper");
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::char32(U'A').$ref())), "'A'.IsLetterUpper");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterLower)(Builtin::char32(U'A').$ref())), "not'A'.IsLetterLower");
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'A').$ref())), "'A'.IsLetterOrDigit");
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'5').$ref())), "'5'.IsLetterOrDigit");
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::char32(U'5').$ref())), "not'5'.IsLetter");
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'_').$ref())), "not'_'.IsLetterOrDigit");
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetter)(Builtin::char32(U'澲').$ref())), "'澲'.IsLetter");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterOrDigit)(Builtin::char32(U'澲').$ref())), "'澲'.IsLetterOrDigit");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsLetter)(Builtin::char32(U'❤').$ref())), "not'❤'.IsLetter");
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterUpper)(Builtin::char32(U'𝔜').$ref())), "'𝔜'.IsLetterUpper");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterLower)(Builtin::char32(U'𞤵').$ref())), "'𞤵'.IsLetterLower");
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsLetterTitle)(Builtin::char32(U'ǅ').$ref())), "'ǅ'.IsLetterTitle");
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsIdentifierChar)(Builtin::char32(U'_').$ref())), "'_'.IsIdentifierChar");
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsIdentifierChar)(Builtin::char32(U'𝔜').$ref())), "not'𝔜'.IsIdentifierChar");
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::char32(U'!').$ref())), "'!'.IsPunctuation");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsPunctuation)(Builtin::char32(U'‿').$ref())), "'‿'.IsPunctuation");
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsPunctuation)(Builtin::char32(U'a').$ref())), "not'a'.IsPunctuation");
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSeparator)(Builtin::char32(U'\u2029').$ref())), "'\\u2029'.IsSeparator");
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSeparator)(Builtin::char32(U'a').$ref())), "not'a'.IsSeparator");
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::char32(U'+').$ref())), "'+'.IsSymbol");
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsSymbol)(Builtin::char32(U'￦').$ref())), "'￦'.IsSymbol");
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsSymbol)(Builtin::char32(U'a').$ref())), "not'a'.IsSymbol");
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::char32(U' ').$ref())), "' '.IsWhiteSpace");
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::char32(U'\t').$ref())), "'\\t'.IsWhiteSpace");
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(Builtin::char32(U'a').$ref())), "not'a'.IsWhiteSpace");
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'a').$ref())), "'a'.IsAsciiPrintable");
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'\n').$ref())), "not'\\n'.IsAsciiPrintable");
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAsciiPrintable)(Builtin::char32(U'𞤵').$ref())), "not'𞤵'.IsAsciiPrintable");
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'a')), "'a'.ToLowerAscii=='a'");
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'a')), "'A'.ToLowerAscii=='a'");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerAscii)(Builtin::char32(U'Б').$ref()) == Builtin::char32(U'Б')), "'Б'.ToLowerAscii=='Б'");
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'A')), "'a'.ToUpperAscii=='A'");
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'A')), "'A'.ToUpperAscii=='A'");
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperAscii)(Builtin::char32(U'б').$ref()) == Builtin::char32(U'б')), "'б'.ToUpperAscii=='б'");
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'a')), "'a'.ToLower=='a'");
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'a')), "'A'.ToLower=='a'");
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLower)(Builtin::char32(U'Б').$ref()) == Builtin::char32(U'б')), "'Б'.ToLower=='б'");
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'A')), "'a'.ToUpper=='A'");
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'A')), "'A'.ToUpper=='A'");
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpper)(Builtin::char32(U'б').$ref()) == Builtin::char32(U'Б')), "'б'.ToUpper=='Б'");
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'a')), "'a'.ToLowerInvariant=='a'");
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'a')), "'A'.ToLowerInvariant=='a'");
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToLowerInvariant)(Builtin::char32(U'Б').$ref()) == Builtin::char32(U'б')), "'Б'.ToLowerInvariant=='б'");
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'a').$ref()) == Builtin::char32(U'A')), "'a'.ToUpperInvariant=='A'");
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'A').$ref()) == Builtin::char32(U'A')), "'A'.ToUpperInvariant=='A'");
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(ToUpperInvariant)(Builtin::char32(U'б').$ref()) == Builtin::char32(U'Б')), "'б'.ToUpperInvariant=='Б'");
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'a').$ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'a'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'б').$ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'б'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'澲').$ref()) == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)()), "'澲'.BidiCategory==StrongBidiCategory.StrongLeftToRight");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(BidiCategory)(Builtin::char32(U'ڱ').$ref()) == ADV_USPCS(StrongRightToLeft, StrongBidiCategory)()), "'ڱ'.BidiCategory==StrongBidiCategory.StrongRightToLeft");
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	auto _operator_eq_eq_mul($extension_Char_114_char const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Char_114_char>(obj);
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((__tmp0.IsValid())) {
				#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				const auto& obj = *__tmp0;
				
				#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return $this == obj;
			}
		}
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	auto _operator_lt_eq_gt_mul($extension_Char_412_char const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Char_412_char>(obj);
			#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((__tmp0.IsValid())) {
				#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				const auto& obj = *__tmp0;
				
				#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return $this <=> obj;
			}
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		{
			#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::i32(1);
	}
	
} namespace System{

}