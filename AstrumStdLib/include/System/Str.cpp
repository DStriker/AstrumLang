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
inline constexpr Builtin::Str $strconst_0x24b76050370_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x24b76050370_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x24b76050370_2 = " End";
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::Str cs = Builtin::Str{"Hello, моя Лерка ❤😆"};
#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test1 = Builtin::Str{"PART 1"};
#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test2 = Builtin::Str{"PART 2"};
#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto $global_buffer_0000024B76E02EE0 = Builtin::CompileTimeStringConcat<$strconst_0x24b76e02ee0_0, test1, $strconst_0x24b76e02ee0_1, test2, $strconst_0x24b76e02ee0_2>(); inline constexpr auto test3 = Builtin::Str($global_buffer_0000024B76E02EE0.data(), $global_buffer_0000024B76E02EE0.size() - 1);
#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::InlineArray<3, Builtin::Str, true> arr = Builtin::ToInlineArrayStr({Builtin::Str(Builtin::Str{"Hello"}), Builtin::Str(Builtin::Str{"world"}), Builtin::Str(Builtin::Str{"!"})});

	
	
	
	
	
	
	
	
	
	




#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::usize(sizeof(Builtin::Str)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "str should be 2 pointers wide");
#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfEquatable>(), "str should be ISelfEquatable");
#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IEquatable<Builtin::Str>>(), "str should be IEquatable<str>");
#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfComparable>(), "str should be ISelfComparable");
#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IComparable<Builtin::Str>>(), "str should be IComparable<str>");




#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(test3 == Builtin::Str{"Begin PART 1 Middle PART 2 End"}, "str concatenation failed");

#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_subscript)(arr.$ref(), Builtin::i32(0)) == Builtin::Str{"Hello"}, "str array indexing failed");
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UPCS_NONLOCAL(Length)(arr.$ref()) == Builtin::i32(3), "str array length failed");
#ifdef ADV_UNITTEST
	#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static bool $Test_a1094d5666ec23f6 = [](){
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Str s = Builtin::Str{"Hello, world!"}; 
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((s == Builtin::Str{"Hello, world!"}), "s==\"Hello, world!\"");
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((s <=> Builtin::Str{"Help"}) < 0), "s<\"Help\"");
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s.$ref()) == Builtin::i32(13)), "s.ByteLength==13");
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(cs.$ref()) == Builtin::i32(32)), "cs.ByteLength==32");
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(CharCount)(cs.$ref()) == Builtin::i32(19)), "cs.CharCount==19");
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(Builtin::Str{"My dog is wolf!"}.$ref()) == Builtin::i32(15)), "\"My dog is wolf!\".ByteLength==15");
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		constexpr auto $local_buffer_0000024B76050370 = Builtin::CompileTimeStringConcat<$strconst_0x24b76050370_0, test1, $strconst_0x24b76050370_1, test2, $strconst_0x24b76050370_2>(); constexpr auto s3 = Builtin::Str($local_buffer_0000024B76050370.data(), $local_buffer_0000024B76050370.size() - 1);
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s3.$ref()) == Builtin::i32(30)), "s3.ByteLength==30");
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(s.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)) == Builtin::Str{"ello, world"}), "s[1u..^1u]==\"ello, world\"");
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(Builtin::Str{"Help"}.$ref(), Builtin::u32(2U)) == Builtin::Str{"lp"}), "\"Help\".Substring(2u)==\"lp\"");
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(s.$ref(), Builtin::u32(1U), Builtin::u32(11U)) == Builtin::Str{"ello, world"}), "s.Substring(1u,11u)==\"ello, world\"");
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::u8('w'))), "b'w'ins");
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::u8('f'))), "b'f'notins");
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAscii)(s.$ref())), "s.IsAscii");
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAscii)(cs.$ref())), "notcs.IsAscii");
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TextElementCount)(Builtin::Str{"Hello, Café 🤷🏽‍♀️🌍🇵🇷"}.$ref()) == Builtin::u32(15U)), "\"Hello, Café 🤷🏽‍♀️🌍🇵🇷\".TextElementCount==15u");
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::char32(U'w'))), "'w'ins");
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::char32(U'я'))), "'я'notins");
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(cs, Builtin::char32(U'😆'))), "'😆'incs");
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(s, Builtin::Str{"world"})), "\"world\"ins");
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(cs, Builtin::Str{"❤😆"})), "\"❤😆\"incs");
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(s, Builtin::Str{"car"})), "\"car\"notins");
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(ContainsAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"wld"}.$ref()))), "s.ContainsAny(\"wld\".Bytes)");
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(ContainsAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"abc"}.$ref()))), "nots.ContainsAny(\"abc\".Bytes)");
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto chars = Builtin::ToInlineArray<Builtin::char32>({Builtin::char32(Builtin::char32(U'w')), Builtin::char32(Builtin::char32(U'l')), Builtin::char32(Builtin::char32(U'd')), Builtin::char32(Builtin::char32(U'😆'))}); 
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(ContainsAny)(cs.$ref(), chars)), "cs.ContainsAny(chars)");
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		chars = Builtin::InitializerList({Builtin::char32(U'a'), Builtin::char32(U'b'), Builtin::char32(U'c'), Builtin::char32(U'd')});
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(ContainsAny)(cs.$ref(), chars)), "notcs.ContainsAny(chars)");
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::u8('l')) == Builtin::u32(2U)), "s.IndexOf(b'l')==2u");
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::u8('a')) == nullptr), "s.IndexOf(b'a')==null");
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::char32(U'l')) == Builtin::u32(2U)), "s.IndexOf('l')==2u");
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::u32(28U)), "cs.IndexOf('😆')==28u");
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(cs.$ref(), Builtin::char32(U'😁')) == nullptr), "cs.IndexOf('😁')==null");
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::Str{"world"}) == Builtin::u32(7U)), "s.IndexOf(\"world\")==7u");
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(s.$ref(), Builtin::Str{"what"}) == nullptr), "s.IndexOf(\"what\")==null");
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"dlb"}.$ref())) == Builtin::u32(2U)), "s.IndexOfAny(\"dlb\".Bytes)==2u");
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"qmu"}.$ref())) == nullptr), "s.IndexOfAny(\"qmu\".Bytes)==null");
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(s.$ref(), chars) == Builtin::u32(11U)), "s.IndexOfAny(chars)==11u");
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::u8('l')) == Builtin::u32(10U)), "s.LastIndexOf(b'l')==10u");
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::u8('a')) == nullptr), "s.LastIndexOf(b'a')==null");
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::char32(U'l')) == Builtin::u32(10U)), "s.LastIndexOf('l')==10u");
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::u32(28U)), "cs.LastIndexOf('😆')==28u");
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(cs.$ref(), Builtin::char32(U'😁')) == nullptr), "cs.LastIndexOf('😁')==null");
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::Str{"world"}) == Builtin::u32(7U)), "s.LastIndexOf(\"world\")==7u");
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(s.$ref(), Builtin::Str{"what"}) == nullptr), "s.LastIndexOf(\"what\")==null");
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"dlb"}.$ref())) == Builtin::u32(11U)), "s.LastIndexOfAny(\"dlb\".Bytes)==11u");
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), ADV_UPCS(Bytes)(Builtin::Str{"qmu"}.$ref())) == nullptr), "s.LastIndexOfAny(\"qmu\".Bytes)==null");
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(s.$ref(), chars) == Builtin::u32(11U)), "s.LastIndexOfAny(chars)==11u");
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::u8('H'))), "s.StartsWith(b'H')");
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::char32(U'H'))), "s.StartsWith('H')");
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(s.$ref(), Builtin::Str{"Hello"})), "s.StartsWith(\"Hello\")");
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(s.$ref(), Builtin::Str{"World"})), "nots.StartsWith(\"World\")");
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::u8('!'))), "s.EndsWith(b'!')");
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::char32(U'!'))), "s.EndsWith('!')");
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(EndsWith)(s.$ref(), Builtin::Str{"world!"})), "s.EndsWith(\"world!\")");
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(EndsWith)(s.$ref(), Builtin::Str{"World"})), "nots.EndsWith(\"World\")");
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Count)(s.$ref(), Builtin::u8('l')) == Builtin::u32(3U)), "s.Count(b'l')==3u");
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Count)(Builtin::Str{"part1|-|part2|-|part3|-|part4"}.$ref(), Builtin::Str{"|-|"}) == Builtin::u32(3U)), "\"part1|-|part2|-|part3|-|part4\".Count(\"|-|\")==3u");
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(s.$ref(), Builtin::Str{", "}) == Builtin::Str{"Hello"}), "s.SubstringBefore(\", \")==\"Hello\"");
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{", "}) == Builtin::Str{"world!"}), "s.SubstringAfter(\", \")==\"world!\"");
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(s.$ref(), Builtin::Str{"123"}) == s), "s.SubstringBefore(\"123\")==s");
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{"123"}) == nullptr), "s.SubstringAfter(\"123\")==null");
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)((*(ADV_UFCS(SubstringAfter)(s.$ref(), Builtin::Str{"!"}))).$ref())), "s.SubstringAfter(\"!\")!.IsEmpty");
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBefore)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text"}), "\"some text<tag>payload<tag>some text\".SubstringBefore(\"<tag>\")==\"some text\"");
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBeforeLast)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text<tag>payload"}), "\"some text<tag>payload<tag>some text\".SubstringBeforeLast(\"<tag>\")==\"some text<tag>payload\"");
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)(ADV_UFCS(SubstringBefore)(Builtin::Str{"<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}).$ref())), "\"<tag>payload<tag>some text\".SubstringBefore(\"<tag>\").IsEmpty");
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfter)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload<tag>some text"}), "\"some text<tag>payload<tag>some text\".SubstringAfter(\"<tag>\")==\"payload<tag>some text\"");
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringAfterLast)(Builtin::Str{"some text<tag>payload<tag>some text"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"some text"}), "\"some text<tag>payload<tag>some text\".SubstringAfterLast(\"<tag>\")==\"some text\"");
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsEmpty)((*(ADV_UFCS(SubstringAfter)(Builtin::Str{"payload<tag>"}.$ref(), Builtin::Str{"<tag>"}))).$ref())), "\"payload<tag>\".SubstringAfter(\"<tag>\")!.IsEmpty");
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetween)(Builtin::Str{"some text<tag>payload<tag>some text<tag>payload2<tag>something"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload"}), "\"some text<tag>payload<tag>some text<tag>payload2<tag>something\".SubstringBetween(\"<tag>\")==\"payload\"");
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetweenLast)(Builtin::Str{"some text<tag>payload<tag>some text<tag>payload2<tag>something"}.$ref(), Builtin::Str{"<tag>"}) == Builtin::Str{"payload2"}), "\"some text<tag>payload<tag>some text<tag>payload2<tag>something\".SubstringBetweenLast(\"<tag>\")==\"payload2\"");
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetween)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}) == Builtin::Str{"payload"}), "\"some text<open>payload<close>some text<open>payload2<close>something\".SubstringBetween(\"<open>\",\"<close>\")==\"payload\"");
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(SubstringBetweenLast)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}) == Builtin::Str{"payload2"}), "\"some text<open>payload<close>some text<open>payload2<close>something\".SubstringBetweenLast(\"<open>\",\"<close>\")==\"payload2\"");
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1032 = ADV_UFCS(SubstringsBetween)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something<open>payload3<close>"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}); auto $for_iter_1032 = ADV_UFCS(Iterate)($for_init_1032.$ref()); while($for_iter_1032.$ref().MoveNext()) {
		auto&& ss = $for_iter_1032.$ref().GetCurrent(); {
			#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1039 = ADV_UFCS(SubstringsBetweenReversed)(Builtin::Str{"some text<open>payload<close>some text<open>payload2<close>something<open>payload3<close>"}.$ref(), Builtin::Str{"<open>"}, Builtin::Str{"<close>"}); auto $for_iter_1039 = ADV_UFCS(Iterate)($for_init_1039.$ref()); while($for_iter_1039.$ref().MoveNext()) {
		auto&& ss = $for_iter_1039.$ref().GetCurrent(); {
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1046 = ADV_UFCS(Split)(s.$ref(), Builtin::u8('o')); auto $for_iter_1046 = ADV_UFCS(Iterate)($for_init_1046.$ref()); while($for_iter_1046.$ref().MoveNext()) {
		auto&& ss = $for_iter_1046.$ref().GetCurrent(); {
			#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1051 = ADV_UFCS(SplitReversed)(s.$ref(), Builtin::u8('o')); auto $for_iter_1051 = ADV_UFCS(Iterate)($for_init_1051.$ref()); while($for_iter_1051.$ref().MoveNext()) {
		auto&& ss = $for_iter_1051.$ref().GetCurrent(); {
			#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1057 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':')); auto $for_iter_1057 = ADV_UFCS(Iterate)($for_init_1057.$ref()); while($for_iter_1057.$ref().MoveNext()) {
		auto&& ss = $for_iter_1057.$ref().GetCurrent(); {
			#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1064 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':')); auto $for_iter_1064 = ADV_UFCS(Iterate)($for_init_1064.$ref()); while($for_iter_1064.$ref().MoveNext()) {
		auto&& ss = $for_iter_1064.$ref().GetCurrent(); {
			#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1072 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1072 = ADV_UFCS(Iterate)($for_init_1072.$ref()); while($for_iter_1072.$ref().MoveNext()) {
		auto&& ss = $for_iter_1072.$ref().GetCurrent(); {
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1079 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1079 = ADV_UFCS(Iterate)($for_init_1079.$ref()); while($for_iter_1079.$ref().MoveNext()) {
		auto&& ss = $for_iter_1079.$ref().GetCurrent(); {
			#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1087 = ADV_UFCS(Split)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), Builtin::u32(3U), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1087 = ADV_UFCS(Iterate)($for_init_1087.$ref()); while($for_iter_1087.$ref().MoveNext()) {
		auto&& ss = $for_iter_1087.$ref().GetCurrent(); {
			#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1094 = ADV_UFCS(SplitReversed)(Builtin::Str{":hlslsl::dkdkf \t:  \t\n:\ndkfks:  dfffk:"}.$ref(), Builtin::u8(':'), Builtin::u32(3U), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1094 = ADV_UFCS(Iterate)($for_init_1094.$ref()); while($for_iter_1094.$ref().MoveNext()) {
		auto&& ss = $for_iter_1094.$ref().GetCurrent(); {
			#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(3U)), "count==3u");
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1102 = ADV_UFCS(Split)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), Builtin::Str{":|:"}, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1102 = ADV_UFCS(Iterate)($for_init_1102.$ref()); while($for_iter_1102.$ref().MoveNext()) {
		auto&& ss = $for_iter_1102.$ref().GetCurrent(); {
			#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1109 = ADV_UFCS(SplitReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), Builtin::Str{":|:"}, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1109 = ADV_UFCS(Iterate)($for_init_1109.$ref()); while($for_iter_1109.$ref().MoveNext()) {
		auto&& ss = $for_iter_1109.$ref().GetCurrent(); {
			#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1117 = ADV_UFCS(SplitAny)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), ADV_UPCS(Bytes)(Builtin::Str{":|k"}.$ref()), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1117 = ADV_UFCS(Iterate)($for_init_1117.$ref()); while($for_iter_1117.$ref().MoveNext()) {
		auto&& ss = $for_iter_1117.$ref().GetCurrent(); {
			#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1124 = ADV_UFCS(SplitAnyReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), ADV_UPCS(Bytes)(Builtin::Str{":|k"}.$ref()), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1124 = ADV_UFCS(Iterate)($for_init_1124.$ref()); while($for_iter_1124.$ref().MoveNext()) {
		auto&& ss = $for_iter_1124.$ref().GetCurrent(); {
			#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(8U)), "count==8u");
		#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1132 = ADV_UFCS(SplitAny)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(ADV_UPCS(IsPunctuation)(c.$ref()) || ADV_UPCS(IsSymbol)(c.$ref())); }, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1132 = ADV_UFCS(Iterate)($for_init_1132.$ref()); while($for_iter_1132.$ref().MoveNext()) {
		auto&& ss = $for_iter_1132.$ref().GetCurrent(); {
			#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1139 = ADV_UFCS(SplitAnyReversed)(Builtin::Str{":|:hlslsl:::|::|:dkdkf \t:|:  \t\n:|:\ndkfks::|:  dfffk:|:"}.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(ADV_UPCS(IsPunctuation)(c.$ref()) || ADV_UPCS(IsSymbol)(c.$ref())); }, StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1139 = ADV_UFCS(Iterate)($for_init_1139.$ref()); while($for_iter_1139.$ref().MoveNext()) {
		auto&& ss = $for_iter_1139.$ref().GetCurrent(); {
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1147 = ADV_UPCS(SplitWhitespace)(Builtin::Str{" Mary   had\ta little  \n\t lamb"}.$ref()); auto $for_iter_1147 = ADV_UFCS(Iterate)($for_init_1147.$ref()); while($for_iter_1147.$ref().MoveNext()) {
		auto&& ss = $for_iter_1147.$ref().GetCurrent(); {
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1152 = ADV_UPCS(SplitWhitespaceReversed)(Builtin::Str{" Mary   had\ta little  \n\t lamb"}.$ref()); auto $for_iter_1152 = ADV_UFCS(Iterate)($for_init_1152.$ref()); while($for_iter_1152.$ref().MoveNext()) {
		auto&& ss = $for_iter_1152.$ref().GetCurrent(); {
			#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1158 = ADV_UPCS(Lines)(Builtin::Str{"some line\r\nsome\ttext\nany more text\rend\r\n"}.$ref()); auto $for_iter_1158 = ADV_UFCS(Iterate)($for_init_1158.$ref()); while($for_iter_1158.$ref().MoveNext()) {
		auto&& ss = $for_iter_1158.$ref().GetCurrent(); {
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1163 = ADV_UPCS(LinesReversed)(Builtin::Str{"some line\r\nsome\ttext\nany more text\rend\r\n"}.$ref()); auto $for_iter_1163 = ADV_UFCS(Iterate)($for_init_1163.$ref()); while($for_iter_1163.$ref().MoveNext()) {
		auto&& ss = $for_iter_1163.$ref().GetCurrent(); {
			#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(5U)), "count==5u");
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1169 = ADV_UFCS(Lines)(Builtin::Str{"\nsome line\r\n  some\ttext\n\n  \t\n\tany more text\rend  \r\n"}.$ref(), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1169 = ADV_UFCS(Iterate)($for_init_1169.$ref()); while($for_iter_1169.$ref().MoveNext()) {
		auto&& ss = $for_iter_1169.$ref().GetCurrent(); {
			#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		count = Builtin::u32(0U);
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_1175 = ADV_UFCS(LinesReversed)(Builtin::Str{"\nsome line\r\n  some\ttext\n\n  \t\n\tany more text\rend  \r\n"}.$ref(), StringSplitOptions::SkipEmptyEntries | StringSplitOptions::TrimEntries); auto $for_iter_1175 = ADV_UFCS(Iterate)($for_init_1175.$ref()); while($for_iter_1175.$ref().MoveNext()) {
		auto&& ss = $for_iter_1175.$ref().GetCurrent(); {
			#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((count == Builtin::u32(4U)), "count==4u");
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(Trim)(s.$ref()) == s), "s.Trim==s");
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAscii)(s.$ref()) == s), "s.TrimAscii==s");
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto spaces = Builtin::Str{" \t \n  some text \t\n\r\n "}; 
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAscii)(spaces.$ref()) == Builtin::Str{"some text"}), "spaces.TrimAscii==\"some text\"");
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(Trim)(spaces.$ref()) == Builtin::Str{"some text"}), "spaces.Trim==\"some text\"");
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAsciiStart)(spaces.$ref()) == Builtin::Str{"some text \t\n\r\n "}), "spaces.TrimAsciiStart==\"some text \\t\\n\\r\\n \"");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimStart)(spaces.$ref()) == Builtin::Str{"some text \t\n\r\n "}), "spaces.TrimStart==\"some text \\t\\n\\r\\n \"");
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimAsciiEnd)(spaces.$ref()) == Builtin::Str{" \t \n  some text"}), "spaces.TrimAsciiEnd==\" \\t \\n  some text\"");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(TrimEnd)(spaces.$ref()) == Builtin::Str{" \t \n  some text"}), "spaces.TrimEnd==\" \\t \\n  some text\"");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(spaces.$ref(), Builtin::char32(U' ')) == Builtin::Str{"\t \n  some text \t\n\r\n"}), "spaces.Trim(' ')==\"\\t \\n  some text \\t\\n\\r\\n\"");
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), Builtin::char32(U'😆')) == Builtin::Str{"Hello, моя Лерка ❤"}), "cs.Trim('😆')==\"Hello, моя Лерка ❤\"");
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), chars) == cs), "cs.Trim(chars)==cs");
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Trim)(cs.$ref(), [] (const auto c) { ADV_EXPRESSION_BODY(!ADV_UPCS(IsAscii)(c.$ref()) || ADV_UPCS(IsWhiteSpace)(c.$ref())); }) == Builtin::Str{"Hello,"}), "cs.Trim(c=>notc.IsAsciiorc.IsWhiteSpace)==\"Hello,\"");
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsWhiteSpace)(s.$ref())), "nots.IsWhiteSpace");
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsWhiteSpace)(Builtin::Str{" \r\n \t "}.$ref())), "\" \\r\\n \\t \".IsWhiteSpace");
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAsciiWhiteSpace)(Builtin::Str{" \r\n \t "}.$ref())), "\" \\r\\n \\t \".IsAsciiWhiteSpace");
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAlphabetic)(s.$ref())), "nots.IsAlphabetic");
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsAlphanumeric)(s.$ref())), "nots.IsAlphanumeric");
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsNumeric)(s.$ref())), "nots.IsNumeric");
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsDecimal)(s.$ref())), "nots.IsDecimal");
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsHexadecimal)(s.$ref())), "nots.IsHexadecimal");
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsValidIdentifier)(s.$ref())), "nots.IsValidIdentifier");
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAlphabetic)(Builtin::Str{"abcdef"}.$ref())), "\"abcdef\".IsAlphabetic");
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsAlphanumeric)(Builtin::Str{"abc123"}.$ref())), "\"abc123\".IsAlphanumeric");
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsNumeric)(Builtin::Str{"123"}.$ref())), "\"123\".IsNumeric");
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsDecimal)(Builtin::Str{"123.456"}.$ref())), "\"123.456\".IsDecimal");
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsHexadecimal)(Builtin::Str{"123def"}.$ref())), "\"123def\".IsHexadecimal");
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"abc"}.$ref())), "\"abc\".IsValidIdentifier");
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"abc123"}.$ref())), "\"abc123\".IsValidIdentifier");
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsValidIdentifier)(Builtin::Str{"_abc_123"}.$ref())), "\"_abc_123\".IsValidIdentifier");
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UPCS(IsValidIdentifier)(Builtin::Str{"123abc"}.$ref())), "not\"123abc\".IsValidIdentifier");
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(IsUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U))), "cs.IsUtf8CodePointBoundary(25u)");
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((!ADV_UFCS(IsUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U))), "notcs.IsUtf8CodePointBoundary(26u)");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(FloorIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U)) == Builtin::u32(25U)), "cs.FloorIndexToUtf8CodePointBoundary(25u)==25u");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(FloorIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U)) == Builtin::u32(25U)), "cs.FloorIndexToUtf8CodePointBoundary(26u)==25u");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(CeilIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(25U)) == Builtin::u32(25U)), "cs.CeilIndexToUtf8CodePointBoundary(25u)==25u");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(CeilIndexToUtf8CodePointBoundary)(cs.$ref(), Builtin::u32(26U)) == Builtin::u32(28U)), "cs.CeilIndexToUtf8CodePointBoundary(26u)==28u");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::Str), TryFromUtf8)(ADV_UPCS(Bytes)(cs.$ref())) == cs), "str.TryFromUtf8(cs.Bytes)==cs");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto bytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0xEDU)), Builtin::u8(Builtin::u8(0xA0U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x20U))}); 
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_USFCS((Builtin::Str), TryFromUtf8)(bytes) == nullptr), "str.TryFromUtf8(bytes)==null");
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const auto switched = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			auto __tmp__valid_1225 = Builtin::Cast<false, std::decay_t<decltype(s)>::$self>(s);
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if(__tmp__valid_1225.IsValid() && Builtin::Is(*__tmp__valid_1225, Builtin::Str{"Help"})) {
				#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				const auto& s = *__tmp__valid_1225;
				return Builtin::Str{"help"};
			}
			else {
				#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if(__tmp__valid_1225.IsValid() && Builtin::Is(*__tmp__valid_1225, Builtin::Str{"Hello, world!"})) {
					#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					const auto& s = *__tmp__valid_1225;
					return Builtin::Str{"hello"};
				}
				else {
					return Builtin::Str{"unknown"};
					
				}
			}
		}
ADV_WARNING_POP
		(); 
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((switched == Builtin::Str{"hello"}), "switched==\"hello\"");
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::StaticStr css = cs; 
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		print(css);
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		print(ADV_UPCS(CharCount)(css.$ref()));
		return true;
	}();
	#endif	

}