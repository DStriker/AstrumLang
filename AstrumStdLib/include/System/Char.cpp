#include "Char.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	

#ifdef ADV_UNITTEST
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	static bool __Test_cfef23efddf534cd = [](){
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((Builtin::u8('A') + Builtin::i32(32) == Builtin::u8('a')), u"b'A'+32==b'a'");
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((++Builtin::u8('A') == Builtin::u8('B')), u"++b'A'==b'B'");
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('a').__ref())), u"b'a'.IsAscii");
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(Builtin::u8('\n').__ref())), u"b'\\n'.IsAscii");
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((!ADV_UPCS(IsAscii)(Builtin::u8(200U).__ref())), u"not200u8.IsAscii");
		return true;
	}();
	#endif	

}