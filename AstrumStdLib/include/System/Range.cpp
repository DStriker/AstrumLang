#include "Range.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
































#ifdef ADV_UNITTEST
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	static bool $Test_be5a992cf08145d0 = [](){
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		auto irange = System::IndexRange(System::Index::Start, System::Index::End, false); 
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USPCS(Start, Index)()), "irange.Start==Index.Start");
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USPCS(End, Index)()), "irange.End==Index.End");
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((irange == ADV_USPCS(All, IndexRange)()), "irange==IndexRange.All");
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(10U)), "irange.Length(10u)==10u");
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(System::Index::Start, System::Index::End, true);
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(11U)), "irange.Length(10u)==11u");
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false);
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(6U)), "irange.Length(10u)==6u");
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), ADV_UFCS(_operator_xor)(Builtin::u32(2U)), true);
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(7U)), "irange.Length(10u)==7u");
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), true);
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USPCS(Start, Index)()), "irange.Start==Index.Start");
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromEnd)(Builtin::u32(2U))), "irange.End==Index.FromEnd(2u)");
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(IsClosed)(irange.$ref())), "irange.IsClosed");
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(9U)), "irange.Length(10u)==9u");
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::IndexRange(Builtin::u32(2U), System::Index::End, false);
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USPCS(End, Index)()), "irange.End==Index.End");
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(8U)), "irange.Length(10u)==8u");
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		irange = System::Range<Builtin::Auto<decltype(Builtin::u32(6U))>, false>(Builtin::u32(2U), Builtin::u32(6U));
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(Start)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(2U))), "irange.Start==Index.FromStart(2u)");
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UPCS(End)(irange.$ref()) == ADV_USFCS((Index), FromStart)(Builtin::u32(6U))), "irange.End==Index.FromStart(6u)");
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UPCS(IsClosed)(irange.$ref())), "notirange.IsClosed");
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(Length)(irange.$ref(), Builtin::u32(10U)) == Builtin::u32(4U)), "irange.Length(10u)==4u");
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		auto rrange = ADV_UPCS(Reversed)((System::Range<Builtin::Auto<decltype(Builtin::i32(20))>, false>({}, Builtin::i32(20))).$ref()); 
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(0))), "0in..12");
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(11))), "11in..12");
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>({}, Builtin::i32(12)), Builtin::i32(12))), "12notin..12");
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, true>({}, Builtin::i32(12)), Builtin::i32(12))), "12in..=12");
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, true>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(12))), "12in3..=12");
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(12))), "12notin3..12");
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(11))), "11in3..12");
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(3))), "3in3..12");
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::i32(12))>, false>(Builtin::i32(3), Builtin::i32(12)), Builtin::i32(2))), "2notin3..12");
		return true;
	}();
	#endif	

}