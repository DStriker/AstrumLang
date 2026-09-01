#include "Range.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
































#ifdef ADV_UNITTEST
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	static bool $Test_be5a992cf08145d0 = [](){
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		auto irange = System::IndexRange(System::Index::Start, System::Index::End, false); 
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USPCS(Start, Index)()), "irange.Start==Index.Start");
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USPCS(End, Index)()), "irange.End==Index.End");
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((irange == ADV_USPCS(All, IndexRange)()), "irange==IndexRange.All");
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(10U)), "irange.Length(10u)==10u");
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(System::Index::Start, System::Index::End, true);
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(11U)), "irange.Length(10u)==11u");
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false);
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(6U)), "irange.Length(10u)==6u");
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), ADV_UFCS(_operator_xor)(Builtin::u32(2U)), true);
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(7U)), "irange.Length(10u)==7u");
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), true);
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USPCS(Start, Index)()), "irange.Start==Index.Start");
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(9U)), "irange.Length(10u)==9u");
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), System::Index::End, false);
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USPCS(End, Index)()), "irange.End==Index.End");
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(8U)), "irange.Length(10u)==8u");
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::Range<Builtin::Auto<decltype(Builtin::u32(6U))>, false>(Builtin::u32(2U), Builtin::u32(6U));
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(6U))), "irange.End==Index.FromStart(6u)");
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(4U)), "irange.Length(10u)==4u");
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(0))), "0in..12");
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(11))), "11in..12");
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(12))), "12notin..12");
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, true>({}, Builtin::i32(12)), Builtin::i32(12))), "12in..=12");
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, true>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(12))), "12in3..=12");
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(12))), "12notin3..12");
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(11))), "11in3..12");
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(3))), "3in3..12");
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(2))), "2notin3..12");
		return true;
	}();
	#endif	

}