#include "System/Runtime/Intrinsics/Simd.h"
using namespace System::Runtime::Intrinsics;
#include "InlineArray.h"
#include "Span.h"

namespace System {
template<class T> class SpanContains;
class SpanMismatch;
template<class T> class SpanCount;
template<class T> class SpanIndexOf;
template<class T> class SpanIndexOfAny2;
template<class T> class SpanIndexOfAny3;
template<class T> class SpanIndexOfAny4;
template<class T> class SpanIndexOfAny5;
template<class T> class SpanIndexOfAnyExcept1;
template<class T> class SpanIndexOfAnyExcept2;
template<class T> class SpanIndexOfAnyExcept3;
template<class T> class SpanIndexOfAnyExcept4;
template<class T> class SpanIndexOfAnyExcept5;
template<class T> class SpanIndexOfAnyInRange;
template<class T> class SpanIndexOfAnyExceptInRange;
template<class T> class SpanSequenceEquals;
//###############################################################################
//# Type definitions
//###############################################################################
#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanContains : public Builtin::StaticClass {
		public: using $self = SpanContains<T>;
		private: SpanContains() = default;
		#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const bool;
		
	};
	
	#line 2702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanMismatch : public Builtin::StaticClass {
		public: using $self = SpanMismatch;
		private: SpanMismatch() = default;
		#line 2703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
		
	};
	
	#line 2726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanCount : public Builtin::StaticClass {
		public: using $self = SpanCount<T>;
		private: SpanCount() = default;
		#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::usize;
		
	};
	
	#line 2750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOf : public Builtin::StaticClass {
		public: using $self = SpanIndexOf<T>;
		private: SpanIndexOf() = default;
		#line 2751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny2<T>;
		private: SpanIndexOfAny2() = default;
		#line 2779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny3<T>;
		private: SpanIndexOfAny3() = default;
		#line 2808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny4<T>;
		private: SpanIndexOfAny4() = default;
		#line 2838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny5<T>;
		private: SpanIndexOfAny5() = default;
		#line 2869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept1 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept1<T>;
		private: SpanIndexOfAnyExcept1() = default;
		#line 2903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept2<T>;
		private: SpanIndexOfAnyExcept2() = default;
		#line 2931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept3<T>;
		private: SpanIndexOfAnyExcept3() = default;
		#line 2960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 2989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept4<T>;
		private: SpanIndexOfAnyExcept4() = default;
		#line 2990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 3020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept5<T>;
		private: SpanIndexOfAnyExcept5() = default;
		#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 3054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyInRange<T>;
		private: SpanIndexOfAnyInRange() = default;
		#line 3055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 3083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExceptInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExceptInRange<T>;
		private: SpanIndexOfAnyExceptInRange() = default;
		#line 3084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 3112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceEquals : public Builtin::StaticClass {
		public: using $self = SpanSequenceEquals<T>;
		private: SpanSequenceEquals() = default;
		#line 3113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	namespace __Span$Protected { 
	
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




namespace __Span$Protected {
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool
		{
			#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool
		{
			#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool
		{
			#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool
		{
			#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize
		{
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize
		{
			#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize
		{
			#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize
		{
			#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
		{
			#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index = length % Builtin::u32(4U);
				#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (index) {
					#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))) {
						#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(0U);
					}
					#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((index <=> Builtin::u32(1U)) > 0) {
						#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) {
							#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(1U);
						}
						#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if ((index <=> Builtin::u32(2U)) > 0 && ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))) {
							#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(2U);
						}
					}
				}
				#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((index <=> length - Builtin::u32(4U)) <= 0) 
				{
					#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)) {
						#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index;
					}
					#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U))) {
						#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(1U);
					}
					#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U))) {
						#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(2U);
					}
					#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U))) {
						#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(3U);
					}
					#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					index += Builtin::u32(4U);
				}
				#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return length;
			} else {
				#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Sse2>)(left, right, length);
				} else {
					#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx2, Sse2>)(left, right, length);
					} else {
						#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx512BW, Avx2, Sse2>)(left, right, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 1968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 2000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 2012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 2028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 2333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 2346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 2359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 2372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 2374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 2376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 2385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 2387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 2389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 2398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 2399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 2401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 2403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 2412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 2413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 2415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 2417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 2426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 2439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 2441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 2443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 2453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 2467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 2469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 2471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 2480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 2493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 2495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 2506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 2508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 2519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 2521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 2523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 2532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 2534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 2545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 2547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 2558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 2560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 2562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 2571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 2573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 2575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool
		{
			#line 2626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 2629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 2631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool
		{
			#line 2639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 2640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 2644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 2646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool
		{
			#line 2652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 2653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL128, Sse2>)(lhs, rhs);
				} else {
					#line 2657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 2659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool
		{
			#line 2665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 2666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 2668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(lhs, rhs);
				} else {
					#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(lhs, rhs);
					} else {
						#line 2672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanContains<T>::Invoke(System::Span<T> data, T val)  -> const bool
	{
		#line 2680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 2689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 2692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 2695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 2698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}

#line 2703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class Arch> auto SpanMismatch::Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 2704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 2705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 2706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 2708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 2709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask maskVec{}; 
		#line 2710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((index <=> vecLast) < 0) 
		{
			#line 2711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
			#line 2712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
				{
					#line 2712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *i; const auto& i = __tmp0;
					
					#line 2713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
			#line 2715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index += vecSize;
		}
		#line 2717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		index = vecLast;
		#line 2718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
		#line 2719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
			{
				#line 2719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *i; const auto& i = __tmp0;
				
				#line 2720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index + i;
			}
		}
		#line 2722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return length;
	}

#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanCount<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::usize
	{
		#line 2728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 2732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 2733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 2734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentVec{}; 
		#line 2735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 2737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize i{}; 
		#line 2738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (; (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 2739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentVec = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(currentVec, values);
			#line 2741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			count += ADV_UPCS(Count)(currentMask.$ref());
		}
		#line 2743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()))> mask = ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()); 
		#line 2744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		mask >>= i - vecLast;
		#line 2745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count += ADV_UPCS(PopCount)(mask.$ref());
		#line 2746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}

#line 2751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 2758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 2763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 2770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 2792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 2799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 2817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 2822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 2829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 2847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 2848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 2853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 2860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 2878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 2880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 2894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept1<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 2910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 2915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 2922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 2944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 2951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 2969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 2970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 2971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 2972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 2973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 2974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 2978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 2979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 2980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 2981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 2981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 2982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 2985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 2990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 2991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 2993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 2994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 2995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 2996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 2997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 2998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 3000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 3001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 3002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 3003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 3004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 3009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 3010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 3012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 3016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 3022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 3023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 3024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 3025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 3026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 3027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 3028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 3029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 3030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 3031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 3032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 3033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 3034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 3035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 3036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 3038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 3042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 3043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 3046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 3050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 3055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 3056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 3057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 3058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 3059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 3060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 3061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 3062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 3063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 3064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 3066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = ADV_UFCS(_operator_sub_mod)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i)), low);
			#line 3067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)(current, range);
			#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 3072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 3073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range);
			#line 3075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 3079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 3084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExceptInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 3085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 3086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 3087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 3088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 3089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 3090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 3091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 3092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 3093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 3094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 3095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 3096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 3097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 3101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 3102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 3104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LeadingZeros)(currentMask.$ref())) {
				{
					#line 3104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 3105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 3108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 3113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceEquals<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
	{
		#line 3114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 3115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 3116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> count = ADV_UPCS(Length)(lhs.$ref()); 
		#line 3117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 3118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 3119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 3120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 3121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 3122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 3123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 3124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 3127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 3128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 3130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 3131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 3134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}

#line 3138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::Span<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "Span should be 2 pointers wide");
#line 3139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISelfEquatable>(), "i32[&] should be ISelfEquatable");
#line 3140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, IEquatable<System::Span<Builtin::i32>>>(), "i32[&] should be IEquatable<i32[&]>");
#line 3141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISpanConvertible>(), "i32[&] should be ISpanConvertible>");
#line 3143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 3144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 3145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 3147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static bool $Test_74f4eaae11671ff9 = [](){
		#line 3148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 3149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 3150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 3151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.$ref())), "notsp.IsEmpty");
		#line 3152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 3153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 3154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 3155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 3156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 3157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 3158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp2 = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 3159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 3160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 3161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		#line 3162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spmm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 3163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = spmm;
		#line 3164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 3165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 3166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 3168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrwide = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15))}); 
		#line 3169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false));
		#line 3171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(3))), "3insp");
		#line 3172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(13))), "13insp");
		#line 3173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(sp, Builtin::i32(26))), "26notinsp");
		#line 3175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 3176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(10)); 
		#line 3177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_3177 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((result == Builtin::i32(9)), "result==9");
			}
			else {
				#line 3179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
				
			}
		}

		#line 3181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(20));
		#line 3182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_3182 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
			}
			else {
				#line 3184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((ADV_UPCS(Error)(result.$ref()) == Builtin::u32(16U)), "result.Error==16u");
				
			}
		}

		#line 3187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9))}); 
		#line 3188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv) == Builtin::u32(5U)), "sp.Mismatch(arrv)==5u");
		#line 3189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv, DefaultEqualityComparer) == Builtin::u32(5U)), "sp.Mismatch(arrv,DefaultEqualityComparer)==5u");
		#line 3190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 3191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.Mismatch(arrv2)==0u");
		#line 3192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv3 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2))}); 
		#line 3193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(arrv3.$ref(), sp) == Builtin::u32(16U)), "arrv3.Mismatch(sp)==16u");
		#line 3194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(ADV_UFCS(AsMutableSpan)(arrv3.$ref()).$ref(), sp) == Builtin::u32(16U)), "arrv3.AsMutableSpan().Mismatch(sp)==16u");
		#line 3195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), sp) == nullptr), "sp.Mismatch(sp)==null");
		#line 3196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(15)) == Builtin::u32(1U)), "sp.Count(15)==1u");
		#line 3197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(18)) == Builtin::u32(0U)), "sp.Count(18)==0u");
		#line 3198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(2U)), "arrv3[..].Count(sp[..2u])==2u");
		#line 3199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(1), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(3), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(2), Builtin::i32(2), Builtin::i32(4), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(5), Builtin::i32(2), Builtin::i32(3)};
		#line 3200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = arrv3;
		#line 3201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(10U)), "sp.Count(2)==10u");
		#line 3202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 3203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(3)) == Builtin::u32(4U)), "sp.IndexOf(3)==4u");
		#line 3204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2)};
		#line 3205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(18U)), "sp.Count(2)==18u");
		#line 3206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(0U)), "sp.IndexOf(2)==0u");
		#line 3208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), sp)), "sp.SequenceEquals(sp)");
		#line 3209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = {Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11), Builtin::i32(12), Builtin::i32(13), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), Builtin::i32(1), Builtin::i32(2)};
		#line 3210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(SequenceEquals)(sp.$ref(), arrv2)), "notsp.SequenceEquals(arrv2)");
		#line 3211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 3212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false)))), "sp.SequenceEquals(arrv3[..^2u])");
		#line 3213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(1))), "sp.StartsWith(1)");
		#line 3214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(3))), "notsp.StartsWith(3)");
		#line 3215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), sp)), "arrv3[..].StartsWith(sp)");
		#line 3216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)).$ref(), sp)), "notarrv3[1u..].StartsWith(sp)");
		#line 3218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 3219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.IndexOf(23)==null");
		#line 3220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.IndexOf(8)==7u");
		#line 3221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.IndexOf(arrv3[5u..10u])==5u");
		#line 3222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), arrv3) == nullptr), "sp.IndexOf(arrv3)==null");
		#line 3224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5)==2u");
		#line 3225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7)==2u");
		#line 3226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7), DefaultEqualityComparer) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7,DefaultEqualityComparer)==2u");
		#line 3227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(20), Builtin::i32(30)) == nullptr), "sp.IndexOfAny(20,30)==null");
		#line 3228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), arrv2) == Builtin::u32(1U)), "sp.IndexOfAny(arrv2)==1u");
		#line 3229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>(Builtin::i32(5), Builtin::i32(10))) == Builtin::u32(4U)), "sp.IndexOfAny(5..=10)==4u");
		#line 3230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(100))>, true>(Builtin::i32(50), Builtin::i32(100))) == nullptr), "sp.IndexOfAny(50..=100)==null");
		#line 3231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1)) == Builtin::u32(1U)), "sp.IndexOfAnyExcept(1)==1u");
		#line 3232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3)) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3)==3u");
		#line 3233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), DefaultEqualityComparer) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3,DefaultEqualityComparer)==3u");
		#line 3234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.IndexOfAnyExcept(arrv2)==0u");
		#line 3235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv3) == nullptr), "sp.IndexOfAnyExcept(arrv3)==null");
		#line 3236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>({}, Builtin::i32(10))) == Builtin::u32(10U)), "sp.IndexOfAnyExcept(..=10)==10u");
		#line 3237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(16))>, true>({}, Builtin::i32(16))) == nullptr), "sp.IndexOfAnyExcept(..=16)==null");
		#line 3239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<Builtin::i32> spm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 3240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(spm.$ref()) == Builtin::i32(3)), "spm.Length==3");
		#line 3241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(spm.$ref())), "notspm.IsEmpty");
		#line 3242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 3243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "spm[0]==20");
		#line 3244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "spm[1]==3");
		#line 3245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "spm[2]==4");
		#line 3246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "spm[@Unchecked3]==5");
		#line 3247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "spm[^1u]==4");
		#line 3248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "spm[^2u]==3");
		#line 3249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 3250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((spm == spm2), "spm==spm2");
		#line 3251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "spm[..^1u].Length==2");
		#line 3252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "spm[..=^1u].Length==3");
		#line 3254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(spm, Builtin::i32(3))), "3inspm");
		#line 3255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(spm, Builtin::i32(6))), "6notinspm");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	

}