#include "System/Runtime/Intrinsics/Simd.h"
using namespace System::Runtime::Intrinsics;
#include "InlineArray.h"
#include "Span.h"

namespace System {
template<class T> class SpanContains;
class SpanMismatch;
template<class T> class SpanCount;
template<class T> class SpanIndexOf;
template<class T> class SpanSequenceEquals;
//###############################################################################
//# Type definitions
//###############################################################################
#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanContains : public Builtin::StaticClass {
		public: using $self = SpanContains<T>;
		private: SpanContains() = default;
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const bool;
		
	};
	
	#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanMismatch : public Builtin::StaticClass {
		public: using $self = SpanMismatch;
		private: SpanMismatch() = default;
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
		
	};
	
	#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanCount : public Builtin::StaticClass {
		public: using $self = SpanCount<T>;
		private: SpanCount() = default;
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::usize;
		
	};
	
	#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOf : public Builtin::StaticClass {
		public: using $self = SpanIndexOf<T>;
		private: SpanIndexOf() = default;
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceEquals : public Builtin::StaticClass {
		public: using $self = SpanSequenceEquals<T>;
		private: SpanSequenceEquals() = default;
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	namespace __Span$Protected { 
	
	 }
	
	
	
	
	
	
	
	
	
	




namespace __Span$Protected {
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool
		{
			#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool
		{
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool
		{
			#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool
		{
			#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize
		{
			#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize
		{
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize
		{
			#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize
		{
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
		{
			#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index = length % Builtin::u32(4U);
				#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (index) {
					#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))) {
						#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(0U);
					}
					#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((index <=> Builtin::u32(1U)) > 0) {
						#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) {
							#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(1U);
						}
						#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if ((index <=> Builtin::u32(2U)) > 0 && ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))) {
							#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(2U);
						}
					}
				}
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((index <=> length - Builtin::u32(4U)) <= 0) 
				{
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)) {
						#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index;
					}
					#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U))) {
						#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(1U);
					}
					#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U))) {
						#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(2U);
					}
					#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U))) {
						#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(3U);
					}
					#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					index += Builtin::u32(4U);
				}
				#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return length;
			} else {
				#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Sse2>)(left, right, length);
				} else {
					#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx2, Sse2>)(left, right, length);
					} else {
						#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx512BW, Avx2, Sse2>)(left, right, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool
		{
			#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool
		{
			#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool
		{
			#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL128, Sse2>)(lhs, rhs);
				} else {
					#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool
		{
			#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(lhs, rhs);
				} else {
					#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(lhs, rhs);
					} else {
						#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanContains<T>::Invoke(System::Span<T> data, T val)  -> const bool
	{
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}

#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class Arch> auto SpanMismatch::Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask maskVec{}; 
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((index <=> vecLast) < 0) 
		{
			#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
			#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
				{
					#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *i; const auto& i = __tmp0;
					
					#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
			#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index += vecSize;
		}
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		index = vecLast;
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
			{
				#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *i; const auto& i = __tmp0;
				
				#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index + i;
			}
		}
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return length;
	}

#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanCount<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::usize
	{
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentVec{}; 
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize i{}; 
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (; (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentVec = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(currentVec, values);
			#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			count += ADV_UPCS(Count)(currentMask.$ref());
		}
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()))> mask = ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()); 
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(i - vecLast)> offset = i - vecLast; 
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		mask <<= Builtin::i32{(Builtin::usize(sizeof (mask)) * Builtin::i32(8)) - vecSize + offset};
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count += ADV_UPCS(PopCount)(mask.$ref());
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}

#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
			}
		}
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
			}
		}
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceEquals<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
	{
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> count = ADV_UPCS(Length)(lhs.$ref()); 
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}

#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::Span<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "Span should be 2 pointers wide");
#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISelfEquatable>(), "i32[&] should be ISelfEquatable");
#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, IEquatable<System::Span<Builtin::i32>>>(), "i32[&] should be IEquatable<i32[&]>");
#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISpanConvertible>(), "i32[&] should be ISpanConvertible>");
#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static bool $Test_74f4eaae11671ff9 = [](){
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.$ref())), "notsp.IsEmpty");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp2 = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spmm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = spmm;
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrwide = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15))}); 
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false));
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(3))), "3insp");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(13))), "13insp");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(sp, Builtin::i32(26))), "26notinsp");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(10)); 
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_1552 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((result == Builtin::i32(9)), "result==9");
			}
			else {
				#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
				
			}
		}

		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(20));
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_1557 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
			}
			else {
				#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((ADV_UPCS(Error)(result.$ref()) == Builtin::u32(16U)), "result.Error==16u");
				
			}
		}

		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9))}); 
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv) == Builtin::u32(5U)), "sp.Mismatch(arrv)==5u");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv, DefaultEqualityComparer) == Builtin::u32(5U)), "sp.Mismatch(arrv,DefaultEqualityComparer)==5u");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.Mismatch(arrv2)==0u");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv3 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2))}); 
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(arrv3.$ref(), sp) == Builtin::u32(16U)), "arrv3.Mismatch(sp)==16u");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(ADV_UFCS(AsMutableSpan)(arrv3.$ref()).$ref(), sp) == Builtin::u32(16U)), "arrv3.AsMutableSpan().Mismatch(sp)==16u");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), sp) == nullptr), "sp.Mismatch(sp)==null");
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(15)) == Builtin::u32(1U)), "sp.Count(15)==1u");
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(18)) == Builtin::u32(0U)), "sp.Count(18)==0u");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(2U)), "arrv3[..].Count(sp[..2u])==2u");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(1), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2)};
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = arrv3;
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(13U)), "sp.Count(2)==13u");
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2)};
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(18U)), "sp.Count(2)==18u");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), sp)), "sp.SequenceEquals(sp)");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11), Builtin::i32(12), Builtin::i32(13), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), Builtin::i32(1), Builtin::i32(2)};
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(SequenceEquals)(sp.$ref(), arrv2)), "notsp.SequenceEquals(arrv2)");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false)))), "sp.SequenceEquals(arrv3[..^2u])");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(1))), "sp.StartsWith(1)");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(3))), "notsp.StartsWith(3)");
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), sp)), "arrv3[..].StartsWith(sp)");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)).$ref(), sp)), "notarrv3[1u..].StartsWith(sp)");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.IndexOf(23)==null");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.IndexOf(8)==7u");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.IndexOf(arrv3[5u..10u])==5u");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), arrv3) == nullptr), "sp.IndexOf(arrv3)==null");
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<Builtin::i32> spm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(spm.$ref()) == Builtin::i32(3)), "spm.Length==3");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(spm.$ref())), "notspm.IsEmpty");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "spm[0]==20");
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "spm[1]==3");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "spm[2]==4");
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "spm[@Unchecked3]==5");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "spm[^1u]==4");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "spm[^2u]==3");
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((spm == spm2), "spm==spm2");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "spm[..^1u].Length==2");
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "spm[..=^1u].Length==3");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(spm, Builtin::i32(3))), "3inspm");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(spm, Builtin::i32(6))), "6notinspm");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	

}