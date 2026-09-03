#include "Str.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str $strconst_0x20c21d39510_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x20c21d39510_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x20c21d39510_2 = " End";
#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::Str cs = Builtin::Str{"Hello, моя Лерка ❤😆"};
#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test1 = Builtin::Str{"PART 1"};
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test2 = Builtin::Str{"PART 2"};
#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto $global_buffer_0000020C21614C80 = Builtin::CompileTimeStringConcat<$strconst_0x20c21614c80_0, test1, $strconst_0x20c21614c80_1, test2, $strconst_0x20c21614c80_2>(); inline constexpr auto test3 = Builtin::Str($global_buffer_0000020C21614C80.data(), $global_buffer_0000020C21614C80.size() - 1);
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::InlineArray<3, Builtin::Str, true> arr = Builtin::ToInlineArrayStr({Builtin::Str(Builtin::Str{"Hello"}), Builtin::Str(Builtin::Str{"world"}), Builtin::Str(Builtin::Str{"!"})});

	
	
	
	
	
	
	
	
	
	




#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::usize(sizeof(Builtin::Str)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "str should be 2 pointers wide");
#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfEquatable>(), "str should be ISelfEquatable");
#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IEquatable<Builtin::Str>>(), "str should be IEquatable<str>");
#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfComparable>(), "str should be ISelfComparable");
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IComparable<Builtin::Str>>(), "str should be IComparable<str>");




#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(test3 == Builtin::Str{"Begin PART 1 Middle PART 2 End"}, "str concatenation failed");

#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_subscript)(arr.$ref(), Builtin::i32(0)) == Builtin::Str{"Hello"}, "str array indexing failed");
#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UPCS_NONLOCAL(Length)(arr.$ref()) == Builtin::i32(3), "str array length failed");
#ifdef ADV_UNITTEST
	#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static bool $Test_a1094d5666ec23f6 = [](){
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Str s = Builtin::Str{"Hello, world!"}; 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((s == Builtin::Str{"Hello, world!"}), "s==\"Hello, world!\"");
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((s <=> Builtin::Str{"Help"}) < 0), "s<\"Help\"");
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s.$ref()) == Builtin::i32(13)), "s.ByteLength==13");
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(cs.$ref()) == Builtin::i32(32)), "cs.ByteLength==32");
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(CharCount)(cs.$ref()) == Builtin::i32(19)), "cs.CharCount==19");
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(Builtin::Str{"My dog is wolf!"}.$ref()) == Builtin::i32(15)), "\"My dog is wolf!\".ByteLength==15");
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		constexpr auto $local_buffer_0000020C21D39510 = Builtin::CompileTimeStringConcat<$strconst_0x20c21d39510_0, test1, $strconst_0x20c21d39510_1, test2, $strconst_0x20c21d39510_2>(); constexpr auto s3 = Builtin::Str($local_buffer_0000020C21D39510.data(), $local_buffer_0000020C21D39510.size() - 1);
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s3.$ref()) == Builtin::i32(30)), "s3.ByteLength==30");
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(s.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)) == Builtin::Str{"ello, world"}), "s[1u..^1u]==\"ello, world\"");
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(Builtin::Str{"Help"}.$ref(), Builtin::u32(2U)) == Builtin::Str{"lp"}), "\"Help\".Substring(2u)==\"lp\"");
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(s.$ref(), Builtin::u32(1U), Builtin::u32(11U)) == Builtin::Str{"ello, world"}), "s.Substring(1u,11u)==\"ello, world\"");
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::u8('w'))), "b'w'ins");
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::u8('f'))), "b'f'notins");
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(s.$ref())), "s.IsAscii");
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAscii)(cs.$ref())), "notcs.IsAscii");
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TextElementCount)(Builtin::Str{"Hello, Café 🤷🏽‍♀️🌍🇵🇷"}.$ref()) == Builtin::u32(15U)), "\"Hello, Café 🤷🏽‍♀️🌍🇵🇷\".TextElementCount==15u");
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::char32(U'w'))), "'w'ins");
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::char32(U'я'))), "'я'notins");
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(cs, Builtin::char32(U'😆'))), "'😆'incs");
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::Str{"world"})), "\"world\"ins");
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(cs, Builtin::Str{"❤😆"})), "\"❤😆\"incs");
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::Str{"car"})), "\"car\"notins");
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(ContainsAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"wld"}.$ref()))), "s.ContainsAny(\"wld\".Bytes)");
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(ContainsAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"abc"}.$ref()))), "nots.ContainsAny(\"abc\".Bytes)");
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto chars = Builtin::ToInlineArray<Builtin::char32>({Builtin::char32(Builtin::char32(U'w')), Builtin::char32(Builtin::char32(U'l')), Builtin::char32(Builtin::char32(U'd')), Builtin::char32(Builtin::char32(U'😆'))}); 
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(ContainsAny)(cs.$ref(), chars)), "cs.ContainsAny(chars)");
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		chars = Builtin::InitializerList({Builtin::char32(U'a'), Builtin::char32(U'b'), Builtin::char32(U'c'), Builtin::char32(U'd')});
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(ContainsAny)(cs.$ref(), chars)), "notcs.ContainsAny(chars)");
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::u8('l')) == Builtin::u32(2U)), "s.IndexOf(b'l')==2u");
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::u8('a')) == nullptr), "s.IndexOf(b'a')==null");
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::char32(U'l')) == Builtin::u32(2U)), "s.IndexOf('l')==2u");
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::u32(28U)), "cs.IndexOf('😆')==28u");
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(cs.$ref(), Builtin::char32(U'😁')) == nullptr), "cs.IndexOf('😁')==null");
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::Str{"world"}) == Builtin::u32(7U)), "s.IndexOf(\"world\")==7u");
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::Str{"what"}) == nullptr), "s.IndexOf(\"what\")==null");
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"dlb"}.$ref())) == Builtin::u32(2U)), "s.IndexOfAny(\"dlb\".Bytes)==2u");
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"qmu"}.$ref())) == nullptr), "s.IndexOfAny(\"qmu\".Bytes)==null");
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), chars) == Builtin::u32(11U)), "s.IndexOfAny(chars)==11u");
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::u8('l')) == Builtin::u32(10U)), "s.LastIndexOf(b'l')==10u");
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::u8('a')) == nullptr), "s.LastIndexOf(b'a')==null");
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::char32(U'l')) == Builtin::u32(10U)), "s.LastIndexOf('l')==10u");
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::u32(28U)), "cs.LastIndexOf('😆')==28u");
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(cs.$ref(), Builtin::char32(U'😁')) == nullptr), "cs.LastIndexOf('😁')==null");
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::Str{"world"}) == Builtin::u32(7U)), "s.LastIndexOf(\"world\")==7u");
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::Str{"what"}) == nullptr), "s.LastIndexOf(\"what\")==null");
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"dlb"}.$ref())) == Builtin::u32(11U)), "s.LastIndexOfAny(\"dlb\".Bytes)==11u");
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"qmu"}.$ref())) == nullptr), "s.LastIndexOfAny(\"qmu\".Bytes)==null");
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), chars) == Builtin::u32(11U)), "s.LastIndexOfAny(chars)==11u");
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::u8('H'))), "s.StartsWith(b'H')");
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::char32(U'H'))), "s.StartsWith('H')");
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::Str{"Hello"})), "s.StartsWith(\"Hello\")");
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(s.$ref(), Builtin::Str{"World"})), "nots.StartsWith(\"World\")");
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::u8('!'))), "s.EndsWith(b'!')");
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::char32(U'!'))), "s.EndsWith('!')");
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::Str{"world!"})), "s.EndsWith(\"world!\")");
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(EndsWith)(s.$ref(), Builtin::Str{"World"})), "nots.EndsWith(\"World\")");
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Count)(s.$ref(), Builtin::u8('l')) == Builtin::u32(3U)), "s.Count(b'l')==3u");
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Count)(Builtin::Str{"part1|-|part2|-|part3|-|part4"}.$ref(), Builtin::Str{"|-|"}) == Builtin::u32(3U)), "\"part1|-|part2|-|part3|-|part4\".Count(\"|-|\")==3u");
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(s.$ref(), Builtin::Str{", "}) == Builtin::Str{"Hello"}), "s.SubstringBefore(\", \")==\"Hello\"");
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{", "}) == Builtin::Str{"world!"}), "s.SubstringAfter(\", \")==\"world!\"");
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(s.$ref(), Builtin::Str{"123"}) == s), "s.SubstringBefore(\"123\")==s");
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{"123"}) == nullptr), "s.SubstringAfter(\"123\")==null");
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)((*(ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{"!"}))).$ref())), "s.SubstringAfter(\"!\")!.IsEmpty");
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text"}), "\"some text<tag>payload<tag>some text\".SubstringBefore(\"<tag>\")==\"some text\"");
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBeforeLast)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text<tag>payload"}), "\"some text<tag>payload<tag>some text\".SubstringBeforeLast(\"<tag>\")==\"some text<tag>payload\"");
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)(ADV_UFCS(SubstringBefore)(Builtin::Str{"<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}).$ref())), "\"<tag>payload<tag>some text\".SubstringBefore(\"<tag>\").IsEmpty");
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload<tag>some text"}), "\"some text<tag>payload<tag>some text\".SubstringAfter(\"<tag>\")==\"payload<tag>some text\"");
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfterLast)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text"}), "\"some text<tag>payload<tag>some text\".SubstringAfterLast(\"<tag>\")==\"some text\"");
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)((*(ADV_UFCS(SubstringAfter)(Builtin::Str{"payload<tag>"}.$ref(), Builtin::Str{"<tag>"}))).$ref())), "\"payload<tag>\".SubstringAfter(\"<tag>\")!.IsEmpty");
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetween)(Builtin::Str{"some text<tag>payload<tag>some text<tag>payload2<tag>something"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload"}), "\"some text<tag>payload<tag>some text<tag>payload2<tag>something\".SubstringBetween(\"<tag>\")==\"payload\"");
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetweenLast)(Builtin::Str{"some text<tag>payload<tag>some text<tag>payload2<tag>something"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload2"}), "\"some text<tag>payload<tag>some text<tag>payload2<tag>something\".SubstringBetweenLast(\"<tag>\")==\"payload2\"");
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetween)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}) == Builtin::Str{"payload"}), "\"some text<open>payload<close>some text<open>payload2<close>something\".SubstringBetween(\"<open>\",\"<close>\")==\"payload\"");
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetweenLast)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}) == Builtin::Str{"payload2"}), "\"some text<open>payload<close>some text<open>payload2<close>something\".SubstringBetweenLast(\"<open>\",\"<close>\")==\"payload2\"");
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1034 = ADV_UFCS(SubstringsBetween)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something<open>payload3<close>"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}); auto $for_iter_1034 = ADV_UFCS(Iterate)($for_init_1034.$ref()); while($for_iter_1034.$ref().MoveNext()) {
		auto&& ss = $for_iter_1034.$ref().GetCurrent(); {
			#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1041 = ADV_UFCS(SubstringsBetweenReversed)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something<open>payload3<close>"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}); auto $for_iter_1041 = ADV_UFCS(Iterate)($for_init_1041.$ref()); while($for_iter_1041.$ref().MoveNext()) {
		auto&& ss = $for_iter_1041.$ref().GetCurrent(); {
			#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1048 = ADV_UFCS(Split)(s.$ref(), Builtin::u8('o')); auto $for_iter_1048 = ADV_UFCS(Iterate)($for_init_1048.$ref()); while($for_iter_1048.$ref().MoveNext()) {
		auto&& ss = $for_iter_1048.$ref().GetCurrent(); {
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1053 = ADV_UFCS(SplitReversed)(s.$ref(), Builtin::u8('o')); auto $for_iter_1053 = ADV_UFCS(Iterate)($for_init_1053.$ref()); while($for_iter_1053.$ref().MoveNext()) {
		auto&& ss = $for_iter_1053.$ref().GetCurrent(); {
			#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1059 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':')); auto $for_iter_1059 = ADV_UFCS(Iterate)($for_init_1059.$ref()); while($for_iter_1059.$ref().MoveNext()) {
		auto&& ss = $for_iter_1059.$ref().GetCurrent(); {
			#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1066 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':')); auto $for_iter_1066 = ADV_UFCS(Iterate)($for_init_1066.$ref()); while($for_iter_1066.$ref().MoveNext()) {
		auto&& ss = $for_iter_1066.$ref().GetCurrent(); {
			#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1074 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1074 = ADV_UFCS(Iterate)($for_init_1074.$ref()); while($for_iter_1074.$ref().MoveNext()) {
		auto&& ss = $for_iter_1074.$ref().GetCurrent(); {
			#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1081 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1081 = ADV_UFCS(Iterate)($for_init_1081.$ref()); while($for_iter_1081.$ref().MoveNext()) {
		auto&& ss = $for_iter_1081.$ref().GetCurrent(); {
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1089 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), Builtin::u32(3U), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1089 = ADV_UFCS(Iterate)($for_init_1089.$ref()); while($for_iter_1089.$ref().MoveNext()) {
		auto&& ss = $for_iter_1089.$ref().GetCurrent(); {
			#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1096 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), Builtin::u32(3U), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1096 = ADV_UFCS(Iterate)($for_init_1096.$ref()); while($for_iter_1096.$ref().MoveNext()) {
		auto&& ss = $for_iter_1096.$ref().GetCurrent(); {
			#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1104 = ADV_UFCS(Split)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), Builtin::Str{":|:"}, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1104 = ADV_UFCS(Iterate)($for_init_1104.$ref()); while($for_iter_1104.$ref().MoveNext()) {
		auto&& ss = $for_iter_1104.$ref().GetCurrent(); {
			#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1111 = ADV_UFCS(SplitReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), Builtin::Str{":|:"}, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1111 = ADV_UFCS(Iterate)($for_init_1111.$ref()); while($for_iter_1111.$ref().MoveNext()) {
		auto&& ss = $for_iter_1111.$ref().GetCurrent(); {
			#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1119 = ADV_UFCS(SplitAny)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), ADV_UPCS(Bytes)(Builtin::Str{":|k"}.$ref()), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1119 = ADV_UFCS(Iterate)($for_init_1119.$ref()); while($for_iter_1119.$ref().MoveNext()) {
		auto&& ss = $for_iter_1119.$ref().GetCurrent(); {
			#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1126 = ADV_UFCS(SplitAnyReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), ADV_UPCS(Bytes)(Builtin::Str{":|k"}.$ref()), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1126 = ADV_UFCS(Iterate)($for_init_1126.$ref()); while($for_iter_1126.$ref().MoveNext()) {
		auto&& ss = $for_iter_1126.$ref().GetCurrent(); {
			#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1134 = ADV_UFCS(SplitAny)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(ADV_UPCS(IsPunctuation)(c.$ref()) || ADV_UPCS(IsSymbol)(c.$ref())); }, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1134 = ADV_UFCS(Iterate)($for_init_1134.$ref()); while($for_iter_1134.$ref().MoveNext()) {
		auto&& ss = $for_iter_1134.$ref().GetCurrent(); {
			#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1141 = ADV_UFCS(SplitAnyReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(ADV_UPCS(IsPunctuation)(c.$ref()) || ADV_UPCS(IsSymbol)(c.$ref())); }, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1141 = ADV_UFCS(Iterate)($for_init_1141.$ref()); while($for_iter_1141.$ref().MoveNext()) {
		auto&& ss = $for_iter_1141.$ref().GetCurrent(); {
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1149 = ADV_UPCS(SplitWhitespace)(Builtin::Str{" Mary   had\ta little  \n\t lamb"}.$ref()); auto $for_iter_1149 = ADV_UFCS(Iterate)($for_init_1149.$ref()); while($for_iter_1149.$ref().MoveNext()) {
		auto&& ss = $for_iter_1149.$ref().GetCurrent(); {
			#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1154 = ADV_UPCS(SplitWhitespaceReversed)(Builtin::Str{" Mary   had\ta little  \n\t lamb"}.$ref()); auto $for_iter_1154 = ADV_UFCS(Iterate)($for_init_1154.$ref()); while($for_iter_1154.$ref().MoveNext()) {
		auto&& ss = $for_iter_1154.$ref().GetCurrent(); {
			#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1160 = ADV_UPCS(Lines)(Builtin::Str{"some line\r\nsome\ttext\nany more text\rend\r\n"}.$ref()); auto $for_iter_1160 = ADV_UFCS(Iterate)($for_init_1160.$ref()); while($for_iter_1160.$ref().MoveNext()) {
		auto&& ss = $for_iter_1160.$ref().GetCurrent(); {
			#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1165 = ADV_UPCS(LinesReversed)(Builtin::Str{"some line\r\nsome\ttext\nany more text\rend\r\n"}.$ref()); auto $for_iter_1165 = ADV_UFCS(Iterate)($for_init_1165.$ref()); while($for_iter_1165.$ref().MoveNext()) {
		auto&& ss = $for_iter_1165.$ref().GetCurrent(); {
			#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1171 = ADV_UFCS(Lines)(Builtin::Str{"\nsome line\r\n  some\ttext\n\n  \t\n\tany more text\rend  \r\n"}.$ref(), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1171 = ADV_UFCS(Iterate)($for_init_1171.$ref()); while($for_iter_1171.$ref().MoveNext()) {
		auto&& ss = $for_iter_1171.$ref().GetCurrent(); {
			#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1177 = ADV_UFCS(LinesReversed)(Builtin::Str{"\nsome line\r\n  some\ttext\n\n  \t\n\tany more text\rend  \r\n"}.$ref(), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1177 = ADV_UFCS(Iterate)($for_init_1177.$ref()); while($for_iter_1177.$ref().MoveNext()) {
		auto&& ss = $for_iter_1177.$ref().GetCurrent(); {
			#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(Trim)(s.$ref()) == s), "s.Trim==s");
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAscii)(s.$ref()) == s), "s.TrimAscii==s");
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto spaces = Builtin::Str{" \t \n  some text \t\n\r\n "}; 
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAscii)(spaces.$ref()) == Builtin::Str{"some text"}), "spaces.TrimAscii==\"some text\"");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(Trim)(spaces.$ref()) == Builtin::Str{"some text"}), "spaces.Trim==\"some text\"");
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAsciiStart)(spaces.$ref()) == Builtin::Str{"some text \t\n\r\n "}), "spaces.TrimAsciiStart==\"some text \\t\\n\\r\\n \"");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimStart)(spaces.$ref()) == Builtin::Str{"some text \t\n\r\n "}), "spaces.TrimStart==\"some text \\t\\n\\r\\n \"");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAsciiEnd)(spaces.$ref()) == Builtin::Str{" \t \n  some text"}), "spaces.TrimAsciiEnd==\" \\t \\n  some text\"");
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimEnd)(spaces.$ref()) == Builtin::Str{" \t \n  some text"}), "spaces.TrimEnd==\" \\t \\n  some text\"");
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(spaces.$ref(), Builtin::char32(U' ')) == Builtin::Str{"\t \n  some text \t\n\r\n"}), "spaces.Trim(' ')==\"\\t \\n  some text \\t\\n\\r\\n\"");
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::Str{"Hello, моя Лерка ❤"}), "cs.Trim('😆')==\"Hello, моя Лерка ❤\"");
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), chars) == cs), "cs.Trim(chars)==cs");
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(!ADV_UPCS(IsAscii)(c.$ref()) || ADV_UPCS(IsWhiteSpace)(c.$ref())); }) == Builtin::Str{"Hello,"}), "cs.Trim(c=>notc.IsAsciiorc.IsWhiteSpace)==\"Hello,\"");
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(s.$ref())), "nots.IsWhiteSpace");
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::Str{" \r\n \t "}.$ref())), "\" \\r\\n \\t \".IsWhiteSpace");
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiWhiteSpace)(Builtin::Str{" \r\n \t "}.$ref())), "\" \\r\\n \\t \".IsAsciiWhiteSpace");
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAlphabetic)(s.$ref())), "nots.IsAlphabetic");
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAlphanumeric)(s.$ref())), "nots.IsAlphanumeric");
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsNumeric)(s.$ref())), "nots.IsNumeric");
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsDecimal)(s.$ref())), "nots.IsDecimal");
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexadecimal)(s.$ref())), "nots.IsHexadecimal");
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsValidIdentifier)(s.$ref())), "nots.IsValidIdentifier");
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAlphabetic)(Builtin::Str{"abcdef"}.$ref())), "\"abcdef\".IsAlphabetic");
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAlphanumeric)(Builtin::Str{"abc123"}.$ref())), "\"abc123\".IsAlphanumeric");
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsNumeric)(Builtin::Str{"123"}.$ref())), "\"123\".IsNumeric");
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsDecimal)(Builtin::Str{"123.456"}.$ref())), "\"123.456\".IsDecimal");
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsHexadecimal)(Builtin::Str{"123def"}.$ref())), "\"123def\".IsHexadecimal");
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"abc"}.$ref())), "\"abc\".IsValidIdentifier");
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"abc123"}.$ref())), "\"abc123\".IsValidIdentifier");
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"_abc_123"}.$ref())), "\"_abc_123\".IsValidIdentifier");
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsValidIdentifier)(Builtin::Str{"123abc"}.$ref())), "not\"123abc\".IsValidIdentifier");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IsUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U))), "cs.IsUtf8CodePointBoundary(25u)");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(IsUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U))), "notcs.IsUtf8CodePointBoundary(26u)");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(FloorIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U)) == Builtin::u32(25U)), "cs.FloorIndexToUtf8CodePointBoundary(25u)==25u");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(FloorIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U)) == Builtin::u32(25U)), "cs.FloorIndexToUtf8CodePointBoundary(26u)==25u");
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(CeilIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U)) == Builtin::u32(25U)), "cs.CeilIndexToUtf8CodePointBoundary(25u)==25u");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(CeilIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U)) == Builtin::u32(28U)), "cs.CeilIndexToUtf8CodePointBoundary(26u)==28u");
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::Str), TryFromUtf8)(ADV_UPCS(Bytes)(cs.$ref())) == cs), "str.TryFromUtf8(cs.Bytes)==cs");
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto bytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0xEDU)), Builtin::u8(Builtin::u8(0xA0U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x20U))}); 
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::Str), TryFromUtf8)(bytes) == nullptr), "str.TryFromUtf8(bytes)==null");
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const auto switched = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			auto __tmp__valid_1227 = Builtin::Cast<false, std::decay_t<decltype(s)>::$self>(s);
			#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if(__tmp__valid_1227.IsValid() && Builtin::Is(*__tmp__valid_1227, Builtin::Str{"Help"})) {
				#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				const auto& s = *__tmp__valid_1227;
				return Builtin::Str{"help"};
			}
			else {
				#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if(__tmp__valid_1227.IsValid() && Builtin::Is(*__tmp__valid_1227, Builtin::Str{"Hello, world!"})) {
					#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					const auto& s = *__tmp__valid_1227;
					return Builtin::Str{"hello"};
				}
				else {
					return Builtin::Str{"unknown"};
					
				}
			}
		}
ADV_WARNING_POP
		(); 
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((switched == Builtin::Str{"hello"}), "switched==\"hello\"");
		return true;
	}();
	#endif	

}