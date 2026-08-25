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
template<class T> class SpanLastIndexOf;
template<class T> class SpanLastIndexOfAny2;
template<class T> class SpanLastIndexOfAny3;
template<class T> class SpanLastIndexOfAny4;
template<class T> class SpanLastIndexOfAny5;
template<class T> class SpanLastIndexOfAnyExcept1;
template<class T> class SpanLastIndexOfAnyExcept2;
template<class T> class SpanLastIndexOfAnyExcept3;
template<class T> class SpanLastIndexOfAnyExcept4;
template<class T> class SpanLastIndexOfAnyExcept5;
template<class T> class SpanLastIndexOfAnyInRange;
template<class T> class SpanLastIndexOfAnyExceptInRange;
template<class T> class SpanReplace;
template<class T> class SpanReverse;
template<class T> class SpanSequenceEquals;
template<class T> class SpanSequenceCompare;
//###############################################################################
//# Type definitions
//###############################################################################
#line 5626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanContains : public Builtin::StaticClass {
		public: using $self = SpanContains<T>;
		private: SpanContains() = default;
		#line 5627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const bool;
		
	};
	
	#line 5650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanMismatch : public Builtin::StaticClass {
		public: using $self = SpanMismatch;
		private: SpanMismatch() = default;
		#line 5651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
		
	};
	
	#line 5674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanCount : public Builtin::StaticClass {
		public: using $self = SpanCount<T>;
		private: SpanCount() = default;
		#line 5675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::usize;
		
	};
	
	#line 5701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOf : public Builtin::StaticClass {
		public: using $self = SpanIndexOf<T>;
		private: SpanIndexOf() = default;
		#line 5702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny2<T>;
		private: SpanIndexOfAny2() = default;
		#line 5730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny3<T>;
		private: SpanIndexOfAny3() = default;
		#line 5759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny4<T>;
		private: SpanIndexOfAny4() = default;
		#line 5789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny5<T>;
		private: SpanIndexOfAny5() = default;
		#line 5820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept1 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept1<T>;
		private: SpanIndexOfAnyExcept1() = default;
		#line 5854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept2<T>;
		private: SpanIndexOfAnyExcept2() = default;
		#line 5882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept3<T>;
		private: SpanIndexOfAnyExcept3() = default;
		#line 5911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept4<T>;
		private: SpanIndexOfAnyExcept4() = default;
		#line 5941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept5<T>;
		private: SpanIndexOfAnyExcept5() = default;
		#line 5972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyInRange<T>;
		private: SpanIndexOfAnyInRange() = default;
		#line 6006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExceptInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExceptInRange<T>;
		private: SpanIndexOfAnyExceptInRange() = default;
		#line 6035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOf : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOf<T>;
		private: SpanLastIndexOf() = default;
		#line 6064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny2 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny2<T>;
		private: SpanLastIndexOfAny2() = default;
		#line 6090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny3 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny3<T>;
		private: SpanLastIndexOfAny3() = default;
		#line 6117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny4 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny4<T>;
		private: SpanLastIndexOfAny4() = default;
		#line 6145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny5 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny5<T>;
		private: SpanLastIndexOfAny5() = default;
		#line 6174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept1 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept1<T>;
		private: SpanLastIndexOfAnyExcept1() = default;
		#line 6206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept2 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept2<T>;
		private: SpanLastIndexOfAnyExcept2() = default;
		#line 6232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept3 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept3<T>;
		private: SpanLastIndexOfAnyExcept3() = default;
		#line 6259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept4 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept4<T>;
		private: SpanLastIndexOfAnyExcept4() = default;
		#line 6287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept5 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept5<T>;
		private: SpanLastIndexOfAnyExcept5() = default;
		#line 6316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyInRange : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyInRange<T>;
		private: SpanLastIndexOfAnyInRange() = default;
		#line 6348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExceptInRange : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExceptInRange<T>;
		private: SpanLastIndexOfAnyExceptInRange() = default;
		#line 6375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 6401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanReplace : public Builtin::StaticClass {
		public: using $self = SpanReplace<T>;
		private: SpanReplace() = default;
		#line 6402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::MutableSpan<T> buf, T oldValue, T newValue)  -> void;
		
	};
	
	#line 6426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanReverse : public Builtin::StaticClass {
		public: using $self = SpanReverse<T>;
		private: SpanReverse() = default;
		#line 6427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::MutableSpan<T> buf)  -> void;
		
	};
	
	#line 6574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceEquals : public Builtin::StaticClass {
		public: using $self = SpanSequenceEquals<T>;
		private: SpanSequenceEquals() = default;
		#line 6575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
		
	};
	
	#line 6600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceCompare : public Builtin::StaticClass {
		public: using $self = SpanSequenceCompare<T>;
		private: SpanSequenceCompare() = default;
		#line 6601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32;
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	namespace __Span$Protected { 
	
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





namespace __Span$Protected {
		#line 2784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool
		{
			#line 2785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool
		{
			#line 2798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool
		{
			#line 2811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool
		{
			#line 2824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize
		{
			#line 2847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize
		{
			#line 2860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize
		{
			#line 2873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize
		{
			#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
		{
			#line 2900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index = length % Builtin::u32(4U);
				#line 2904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (index) {
					#line 2905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))) {
						#line 2906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(0U);
					}
					#line 2909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((index <=> Builtin::u32(1U)) > 0) {
						#line 2910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) {
							#line 2911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(1U);
						}
						#line 2914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if ((index <=> Builtin::u32(2U)) > 0 && ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))) {
							#line 2915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(2U);
						}
					}
				}
				#line 2920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((index <=> length - Builtin::u32(4U)) <= 0) 
				{
					#line 2921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)) {
						#line 2922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index;
					}
					#line 2924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U))) {
						#line 2925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(1U);
					}
					#line 2927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U))) {
						#line 2928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(2U);
					}
					#line 2930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U))) {
						#line 2931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(3U);
					}
					#line 2934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					index += Builtin::u32(4U);
				}
				#line 2936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return length;
			} else {
				#line 2937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Sse2>)(left, right, length);
				} else {
					#line 2939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx2, Sse2>)(left, right, length);
					} else {
						#line 2941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx512BW, Avx2, Sse2>)(left, right, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 3025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 3027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 3038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 3040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 3051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 3053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 3055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 3064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 3066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 3316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 3329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 3342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 3343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 3356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 3357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 3370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 3383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 3396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 3397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 3410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 3411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 3709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 3722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 3735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 3737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 3748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 3750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 3759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 3772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 3785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 3786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 3799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 3800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 3813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 3826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 3839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 3840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 3853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 3854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 3895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 3908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 3910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 3947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 3960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 3962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 4046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 4048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 4059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 4061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 4072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 4074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 4076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 4085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 4087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 4089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 4338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 4351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 4364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 4365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 4378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 4379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 4392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 4405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 4418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 4419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 4432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 4433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 4730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 4743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 4756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 4758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 4769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 4771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 4780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 4793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 4806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 4807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 4820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 4821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 4834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 4847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 4860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 4861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 4874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 4875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 4916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 4929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 4931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 4968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 4981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 4983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceByte(System::MutableSpan<Builtin::u8> buf, Builtin::u8 oldValue, Builtin::u8 newValue)  -> void
		{
			#line 4997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 5000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 5001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 5002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 5003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 5004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceWord(System::MutableSpan<Builtin::u16> buf, Builtin::u16 oldValue, Builtin::u16 newValue)  -> void
		{
			#line 5010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 5012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 5013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 5014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 5015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 5016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 5017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceDword(System::MutableSpan<Builtin::u32> buf, Builtin::u32 oldValue, Builtin::u32 newValue)  -> void
		{
			#line 5023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 5025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 5026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 5027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512VL128, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 5028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 5029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 5030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512F, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceQword(System::MutableSpan<Builtin::u64> buf, Builtin::u64 oldValue, Builtin::u64 newValue)  -> void
		{
			#line 5036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 5038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 5039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 5040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 5041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 5042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 5043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool
		{
			#line 5094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 5095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 5096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 5097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 5098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 5099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 5100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 5101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool
		{
			#line 5107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 5108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 5109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 5110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 5111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 5112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 5113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 5114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool
		{
			#line 5120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 5121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 5122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 5123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 5124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL128, Sse2>)(lhs, rhs);
				} else {
					#line 5125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 5126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 5127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool
		{
			#line 5133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 5134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 5135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 5136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 5137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(lhs, rhs);
				} else {
					#line 5138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 5139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(lhs, rhs);
					} else {
						#line 5140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceCompareByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 5156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 5157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceCompareGeneralCase(lhs, rhs, length);
			} else {
				#line 5158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 5159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Sse2>)(lhs, rhs, length);
				} else {
					#line 5160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 5161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs, length);
					} else {
						#line 5162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceCompareWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 5168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 5169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceCompareGeneralCase(lhs, rhs, length);
			} else {
				#line 5170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 5171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Sse2>)(lhs, rhs, length);
				} else {
					#line 5172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 5173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs, length);
					} else {
						#line 5174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 5192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseBytes(System::MutableSpan<Builtin::u8> buf)  -> void
		{
			#line 5193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(32U)) < 0) {
				#line 5195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 5196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(48U)) < 0) {
					#line 5197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 5198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(128U)) < 0) {
						#line 5199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Avx2, Sse42, Sse2>)(buf);
					} else {
						#line 5200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Avx512Vbmi, Avx2, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseWords(System::MutableSpan<Builtin::u16> buf)  -> void
		{
			#line 5206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 5208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 5209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(24U)) < 0) {
					#line 5210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 5211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 5212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Avx2, Sse42, Sse2>)(buf);
					} else {
						#line 5213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseDwords(System::MutableSpan<Builtin::u32> buf)  -> void
		{
			#line 5219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 5221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 5222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 5223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 5224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 5225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Avx, Sse42, Sse2>)(buf);
					} else {
						#line 5226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Avx512F, Avx, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 5231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseQwords(System::MutableSpan<Builtin::u64> buf)  -> void
		{
			#line 5232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 5234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 5235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 5236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 5237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 5238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Avx, Sse42, Sse2>)(buf);
					} else {
						#line 5239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 5240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Avx512F, Avx, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
#line 5627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanContains<T>::Invoke(System::Span<T> data, T val)  -> const bool
	{
		#line 5628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 5637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 5640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 5643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 5646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}

#line 5651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class Arch> auto SpanMismatch::Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 5652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 5653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 5654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 5656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 5657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask maskVec{}; 
		#line 5658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((index <=> vecLast) < 0) 
		{
			#line 5659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
			#line 5660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
				{
					#line 5660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *i; const auto& i = __tmp0;
					
					#line 5661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
			#line 5663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index += vecSize;
		}
		#line 5665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		index = vecLast;
		#line 5666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
		#line 5667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
			{
				#line 5667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *i; const auto& i = __tmp0;
				
				#line 5668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index + i;
			}
		}
		#line 5670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return length;
	}

#line 5675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanCount<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::usize
	{
		#line 5676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 5680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 5681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentVec{}; 
		#line 5683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 5685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize i{}; 
		#line 5686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (; (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 5687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentVec = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(currentVec, values);
			#line 5689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			count += ADV_UPCS(Count)(currentMask.$ref());
		}
		#line 5691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()))> mask = ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()); 
		#line 5692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((i <=> vecLast) > 0) {
			#line 5694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			mask >>= i - vecLast;
		}
		#line 5696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count += ADV_UPCS(PopCount)(mask.$ref());
		#line 5697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}

#line 5702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 5714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 5721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 5743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 5750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 5773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 5780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 5804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 5811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 5837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 5845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept1<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 5866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 5873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 5895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 5902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 5925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 5932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 5956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 5963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 5989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 5997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 6001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 6012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 6013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 6014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 6017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = ADV_UFCS(_operator_sub_mod)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i)), low);
			#line 6018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)(current, range);
			#line 6019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 6019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 6024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range);
			#line 6026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 6026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 6030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExceptInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 6041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 6042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 6043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 6046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 6047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 6048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 6048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 6053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 6055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 6055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 6059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 6071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 6076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
		#line 6082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 6103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
		#line 6109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 6131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
		#line 6137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 6155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 6160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
		#line 6166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 6184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 6185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 6191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
		#line 6198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept1<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 6213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 6218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
		#line 6224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 6245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
		#line 6251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 6273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
		#line 6279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 6297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 6302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
		#line 6308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 6323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 6324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 6325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 6326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 6327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 6333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
		#line 6340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 6355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 6356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = ADV_UFCS(_operator_sub_mod)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i))), low);
			#line 6360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)(current, range);
			#line 6361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range);
		#line 6367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExceptInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 6376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 6380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 6381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 6382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 6383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 6384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 6386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 6387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 6388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 6388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 6392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 6393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
		#line 6394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 6394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 6395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 6397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 6402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanReplace<T>::Invoke(System::MutableSpan<T> buf, T oldValue, T newValue)  -> void
	{
		#line 6403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> count = ADV_UPCS(Length)(buf.$ref()); 
		#line 6407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 6408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(oldValue))> oldValues = TVector::Create(oldValue); 
		#line 6409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(newValue))> newValues = TVector::Create(newValue); 
		#line 6410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector original{}; 
		#line 6411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 6412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector result{}; 
		#line 6413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 6414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			original = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i));
			#line 6415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(original, oldValues);
			#line 6416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			result = TVector::ConditionalSelect(currentMask, newValues, original);
			#line 6417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(result.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i)));
		}
		#line 6419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		original = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, vecLast));
		#line 6420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_eq_eq_xor)(original, oldValues);
		#line 6421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = TVector::ConditionalSelect(currentMask, newValues, original);
		#line 6422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(StoreUnsafe)(result.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, vecLast)));
	}

#line 6427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanReverse<T>::Invoke(System::MutableSpan<T> buf)  -> void
	{
		#line 6428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> count = ADV_UPCS(Length)(buf.$ref()); 
		#line 6432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::isize>(count))> remainder = Builtin::Cast<true, Builtin::isize>(count); 
		#line 6433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::isize offset{}; 
		#line 6434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(remainder - vecSize)> lastOffset = remainder - vecSize; 
		#line 6436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		do 
		#line 6436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))))> tmpFirst = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))); 
			#line 6438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))))> tmpLast = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))); 
			#line 6440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 6441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<Arch, Avx512Vbmi>) {
					#line 6442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					tmpFirst = Avx512Vbmi::Swizzle(tmpFirst, TVector::Create(Builtin::u8(63U), Builtin::u8(62U), Builtin::u8(61U), Builtin::u8(60U), Builtin::u8(59U), Builtin::u8(58U), Builtin::u8(57U), Builtin::u8(56U), Builtin::u8(55U), Builtin::u8(54U), Builtin::u8(53U), Builtin::u8(52U), Builtin::u8(51U), Builtin::u8(50U), Builtin::u8(49U), Builtin::u8(48U), Builtin::u8(47U), Builtin::u8(46U), Builtin::u8(45U), Builtin::u8(44U), Builtin::u8(43U), Builtin::u8(42U), Builtin::u8(41U), Builtin::u8(40U), Builtin::u8(39U), Builtin::u8(38U), Builtin::u8(37U), Builtin::u8(36U), Builtin::u8(35U), Builtin::u8(34U), Builtin::u8(33U), Builtin::u8(32U), Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
					#line 6447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					tmpLast = Avx512Vbmi::Swizzle(tmpLast, TVector::Create(Builtin::u8(63U), Builtin::u8(62U), Builtin::u8(61U), Builtin::u8(60U), Builtin::u8(59U), Builtin::u8(58U), Builtin::u8(57U), Builtin::u8(56U), Builtin::u8(55U), Builtin::u8(54U), Builtin::u8(53U), Builtin::u8(52U), Builtin::u8(51U), Builtin::u8(50U), Builtin::u8(49U), Builtin::u8(48U), Builtin::u8(47U), Builtin::u8(46U), Builtin::u8(45U), Builtin::u8(44U), Builtin::u8(43U), Builtin::u8(42U), Builtin::u8(41U), Builtin::u8(40U), Builtin::u8(39U), Builtin::u8(38U), Builtin::u8(37U), Builtin::u8(36U), Builtin::u8(35U), Builtin::u8(34U), Builtin::u8(33U), Builtin::u8(32U), Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
				} else {
					#line 6452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (std::is_same_v<Arch, Avx2>) {
						#line 6453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpFirst = Avx2::Swizzle(tmpFirst, TVector::Create(Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
						#line 6457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpLast = Avx2::Swizzle(tmpLast, TVector::Create(Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
					} else {
						#line 6461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Sse42>) {
							#line 6462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Sse42::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
							#line 6464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Sse42::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
						} else {
							#line 6466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Sse2>) {
								#line 6467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Sse2::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
								#line 6469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Sse2::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
							} else {
								#line 6471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Neon64>) {
									#line 6472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Neon64::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
									#line 6474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Neon64::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
								} else {
									#line 6476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Neon>) {
										#line 6477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Neon::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
										#line 6479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Neon::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
									}
								}
							}
						}
					}
				}
			} else {
				#line 6482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 6483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (std::is_same_v<Arch, Avx512BW>) {
						#line 6484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpFirst = Avx512BW::Swizzle(tmpFirst, TVector::Create(Builtin::u16(31U), Builtin::u16(30U), Builtin::u16(29U), Builtin::u16(28U), Builtin::u16(27U), Builtin::u16(26U), Builtin::u16(25U), Builtin::u16(24U), Builtin::u16(23U), Builtin::u16(22U), Builtin::u16(21U), Builtin::u16(20U), Builtin::u16(19U), Builtin::u16(18U), Builtin::u16(17U), Builtin::u16(16U), Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
						#line 6487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpLast = Avx512BW::Swizzle(tmpLast, TVector::Create(Builtin::u16(31U), Builtin::u16(30U), Builtin::u16(29U), Builtin::u16(28U), Builtin::u16(27U), Builtin::u16(26U), Builtin::u16(25U), Builtin::u16(24U), Builtin::u16(23U), Builtin::u16(22U), Builtin::u16(21U), Builtin::u16(20U), Builtin::u16(19U), Builtin::u16(18U), Builtin::u16(17U), Builtin::u16(16U), Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
					} else {
						#line 6490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Avx2>) {
							#line 6491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Avx2::Swizzle(tmpFirst, TVector::Create(Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
							#line 6494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Avx2::Swizzle(tmpLast, TVector::Create(Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
						} else {
							#line 6497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Sse42>) {
								#line 6498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Sse42::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
								#line 6500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Sse42::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
							} else {
								#line 6502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Sse2>) {
									#line 6503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Sse2::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
									#line 6505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Sse2::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
								} else {
									#line 6507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Neon64>) {
										#line 6508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Neon64::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
										#line 6510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Neon64::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
									} else {
										#line 6512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Neon>) {
											#line 6513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Neon::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
											#line 6515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Neon::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
										}
									}
								}
							}
						}
					}
				} else {
					#line 6518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 6519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Avx512F>) {
							#line 6520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Avx512F::template Swizzle<Builtin::i32(15), Builtin::i32(14), Builtin::i32(13), Builtin::i32(12), Builtin::i32(11), Builtin::i32(10), Builtin::i32(9), Builtin::i32(8), Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
							#line 6521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Avx512F::template Swizzle<Builtin::i32(15), Builtin::i32(14), Builtin::i32(13), Builtin::i32(12), Builtin::i32(11), Builtin::i32(10), Builtin::i32(9), Builtin::i32(8), Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
						} else {
							#line 6522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Avx>) {
								#line 6523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Avx::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
								#line 6524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Avx::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
							} else {
								#line 6525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Sse42>) {
									#line 6526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Sse42::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
									#line 6527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Sse42::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
								} else {
									#line 6528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Sse2>) {
										#line 6529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Sse2::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
										#line 6530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Sse2::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
									} else {
										#line 6531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Neon64>) {
											#line 6532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Neon64::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
											#line 6533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Neon64::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
										} else {
											#line 6534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if constexpr (std::is_same_v<Arch, Neon>) {
												#line 6535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpFirst = Neon::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
												#line 6536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpLast = Neon::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
											}
										}
									}
								}
							}
						}
					} else {
						#line 6538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 6539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Avx512F>) {
								#line 6540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Avx512F::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
								#line 6541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Avx512F::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
							} else {
								#line 6542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Avx>) {
									#line 6543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Avx::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
									#line 6544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Avx::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
								} else {
									#line 6545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Sse42>) {
										#line 6546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Sse42::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
										#line 6547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Sse42::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
									} else {
										#line 6548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Sse2>) {
											#line 6549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Sse2::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
											#line 6550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Sse2::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
										} else {
											#line 6551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if constexpr (std::is_same_v<Arch, Neon64>) {
												#line 6552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpFirst = Neon64::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
												#line 6553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpLast = Neon64::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
											} else {
												#line 6554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if constexpr (std::is_same_v<Arch, Neon>) {
													#line 6555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													tmpFirst = Neon::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
													#line 6556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													tmpLast = Neon::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			#line 6560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(tmpLast.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))));
			#line 6561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(tmpFirst.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))));
			#line 6563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			offset += vecSize;
			#line 6564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			lastOffset -= vecSize;
		} while ((lastOffset <=> offset) >= 0);
		#line 6566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		remainder = lastOffset + vecSize - offset;
		#line 6568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((remainder <=> Builtin::i32(1)) > 0) {
			#line 6569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((__Span$Protected::SpanHelpers), ReverseGeneralCase)(ADV_UFCS(SliceUnchecked)(buf.$ref(), Builtin::Cast<true, Builtin::usize>(offset), Builtin::Cast<true, Builtin::usize>(remainder)));
		}
	}

#line 6575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceEquals<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
	{
		#line 6576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> count = ADV_UPCS(Length)(lhs.$ref()); 
		#line 6579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 6580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 6581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 6582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 6583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 6584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 6585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 6586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 6589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 6590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 6593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 6596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}

#line 6601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceCompare<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32
	{
		#line 6602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		length -= vecSize;
		#line 6606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 6607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 6608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize offset{}; 
		#line 6609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask matches{}; 
		#line 6610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto processDifference = [&] () 
		{
			#line 6611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const auto diffs = ADV_UFCS(_operator_not)(matches); 
			#line 6612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(diffs.$ref())) {
				{
					#line 6612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					offset += index;
				}
			}
			#line 6615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const auto result = ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset); 
			#line 6616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((result != Builtin::i32(0)), "result!=0");
			#line 6617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return result;
		}; 
		#line 6619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((length <=> offset) > 0) 
		{
			#line 6620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset));
			#line 6621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset));
			#line 6622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			matches = ADV_UFCS(_operator_eq_eq_xor)(currentLeft, currentRight);
			#line 6623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(All)(matches.$ref())) {
				#line 6624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += vecSize;
				#line 6625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				continue;
			}
			#line 6627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return processDifference();
		}
		#line 6629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		offset = length;
		#line 6630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset));
		#line 6631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset));
		#line 6632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		matches = ADV_UFCS(_operator_eq_eq_xor)(currentLeft, currentRight);
		#line 6633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(All)(matches.$ref())) {
			#line 6634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UFCS(NarrowToInt32)((ADV_UFCS(_operator_sub_mod)(ADV_UPCS(Length)(lhs.$ref()), ADV_UPCS(Length)(rhs.$ref()))).$ref());
		}
		#line 6636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return processDifference();
	}

#line 6640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::Span<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "Span should be 2 pointers wide");
#line 6641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISelfEquatable>(), "i32[&] should be ISelfEquatable");
#line 6642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, IEquatable<System::Span<Builtin::i32>>>(), "i32[&] should be IEquatable<i32[&]>");
#line 6643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISpanConvertible>(), "i32[&] should be ISpanConvertible>");
#line 6645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 6646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 6647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 6649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static bool $Test_74f4eaae11671ff9 = [](){
		#line 6650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 6651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 6652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 6653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.$ref())), "notsp.IsEmpty");
		#line 6654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 6655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 6656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 6657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 6658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 6659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 6660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp2 = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 6661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 6662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 6663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		#line 6664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spmm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = spmm;
		#line 6666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 6667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 6668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 6670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrwide = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15))}); 
		#line 6671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false));
		#line 6673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(3))), "3insp");
		#line 6674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(13))), "13insp");
		#line 6675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(sp, Builtin::i32(26))), "26notinsp");
		#line 6677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 6678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(10)); 
		#line 6679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_6679 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 6680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 6680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 6680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 6680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((result == Builtin::i32(9)), "result==9");
			}
			else {
				#line 6681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
				
			}
		}

		#line 6683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(20));
		#line 6684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_6684 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 6685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 6685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 6685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 6685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
			}
			else {
				#line 6686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((ADV_UPCS(Error)(result.$ref()) == Builtin::u32(16U)), "result.Error==16u");
				
			}
		}

		#line 6689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9))}); 
		#line 6690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv) == Builtin::u32(5U)), "sp.Mismatch(arrv)==5u");
		#line 6691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv, DefaultEqualityComparer) == Builtin::u32(5U)), "sp.Mismatch(arrv,DefaultEqualityComparer)==5u");
		#line 6692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 6693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.Mismatch(arrv2)==0u");
		#line 6694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv3 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2))}); 
		#line 6695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(arrv3.$ref(), sp) == Builtin::u32(16U)), "arrv3.Mismatch(sp)==16u");
		#line 6696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(ADV_UFCS(AsMutableSpan)(arrv3.$ref()).$ref(), sp) == Builtin::u32(16U)), "arrv3.AsMutableSpan().Mismatch(sp)==16u");
		#line 6697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), sp) == nullptr), "sp.Mismatch(sp)==null");
		#line 6698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(15)) == Builtin::u32(1U)), "sp.Count(15)==1u");
		#line 6699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(18)) == Builtin::u32(0U)), "sp.Count(18)==0u");
		#line 6700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(2U)), "arrv3[..].Count(sp[..2u])==2u");
		#line 6701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(1), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(3), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(2), Builtin::i32(2), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(5), Builtin::i32(2), Builtin::i32(2)});
		#line 6702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = arrv3;
		#line 6703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(Trim)(sp.$ref(), Builtin::i32(2)).$ref()) == Builtin::u32(16U)), "sp.Trim(2).Length==16u");
		#line 6704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(10U)), "sp.Count(2)==10u");
		#line 6705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 6706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(3)) == Builtin::u32(4U)), "sp.IndexOf(3)==4u");
		#line 6707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(17U)), "sp.LastIndexOf(2)==17u");
		#line 6708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(3)) == Builtin::u32(11U)), "sp.LastIndexOf(3)==11u");
		#line 6709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::i32 count{}; 
		#line 6710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6710 = ADV_UFCS(Split)(sp.$ref(), Builtin::i32(2)); auto $for_iter_6710 = ADV_UFCS(Iterate)($for_init_6710.$ref()); while($for_iter_6710.$ref().MoveNext()) {
		auto&& i = $for_iter_6710.$ref().GetCurrent(); {
			#line 6711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(11)), "count==11");
		#line 6714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6715 = ADV_UFCS(Split)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(3U))>, false>(Builtin::u32(1U), Builtin::u32(3U)))); auto $for_iter_6715 = ADV_UFCS(Iterate)($for_init_6715.$ref()); while($for_iter_6715.$ref().MoveNext()) {
		auto&& i = $for_iter_6715.$ref().GetCurrent(); {
			#line 6716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(5)), "count==5");
		#line 6719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6720 = ADV_UFCS(SplitAny)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(5U))>, false>(Builtin::u32(3U), Builtin::u32(5U)))); auto $for_iter_6720 = ADV_UFCS(Iterate)($for_init_6720.$ref()); while($for_iter_6720.$ref().MoveNext()) {
		auto&& i = $for_iter_6720.$ref().GetCurrent(); {
			#line 6721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(13)), "count==13");
		#line 6724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6725 = ADV_UFCS(SplitReversed)(sp.$ref(), Builtin::i32(2)); auto $for_iter_6725 = ADV_UFCS(Iterate)($for_init_6725.$ref()); while($for_iter_6725.$ref().MoveNext()) {
		auto&& i = $for_iter_6725.$ref().GetCurrent(); {
			#line 6726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(11)), "count==11");
		#line 6729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6730 = ADV_UFCS(SplitReversed)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(3U))>, false>(Builtin::u32(1U), Builtin::u32(3U)))); auto $for_iter_6730 = ADV_UFCS(Iterate)($for_init_6730.$ref()); while($for_iter_6730.$ref().MoveNext()) {
		auto&& i = $for_iter_6730.$ref().GetCurrent(); {
			#line 6731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(5)), "count==5");
		#line 6734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6735 = ADV_UFCS(SplitAnyReversed)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(5U))>, false>(Builtin::u32(3U), Builtin::u32(5U)))); auto $for_iter_6735 = ADV_UFCS(Iterate)($for_init_6735.$ref()); while($for_iter_6735.$ref().MoveNext()) {
		auto&& i = $for_iter_6735.$ref().GetCurrent(); {
			#line 6736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(13)), "count==13");
		#line 6739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6740 = ADV_UFCS(Sliding)(sp.$ref(), Builtin::u32(2U)); auto $for_iter_6740 = ADV_UFCS(Iterate)($for_init_6740.$ref()); while($for_iter_6740.$ref().MoveNext()) {
		auto&& i = $for_iter_6740.$ref().GetCurrent(); {
			#line 6741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(17)), "count==17");
		#line 6744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6745 = ADV_UFCS(Chunks)(sp.$ref(), Builtin::u32(4U)); auto $for_iter_6745 = ADV_UFCS(Iterate)($for_init_6745.$ref()); while($for_iter_6745.$ref().MoveNext()) {
		auto&& i = $for_iter_6745.$ref().GetCurrent(); {
			#line 6746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(5)), "count==5");
		#line 6749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6750 = ADV_UFCS(ChunksReversed)(sp.$ref(), Builtin::u32(4U)); auto $for_iter_6750 = ADV_UFCS(Iterate)($for_init_6750.$ref()); while($for_iter_6750.$ref().MoveNext()) {
		auto&& i = $for_iter_6750.$ref().GetCurrent(); {
			#line 6751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(5)), "count==5");
		#line 6754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsSorted)(sp.$ref())), "notsp.IsSorted");
		#line 6755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2)});
		#line 6756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(18U)), "sp.Count(2)==18u");
		#line 6757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(0U)), "sp.IndexOf(2)==0u");
		#line 6758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(17U)), "sp.LastIndexOf(2)==17u");
		#line 6760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), sp)), "sp.SequenceEquals(sp)");
		#line 6761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11), Builtin::i32(12), Builtin::i32(13), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), Builtin::i32(1), Builtin::i32(2)});
		#line 6762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(SequenceEquals)(sp.$ref(), arrv2)), "notsp.SequenceEquals(arrv2)");
		#line 6763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 6764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(IsSorted)(sp.$ref())), "sp.IsSorted");
		#line 6765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false)))), "sp.SequenceEquals(arrv3[..^2u])");
		#line 6766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceCompare)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false))) == Builtin::i32(0)), "sp.SequenceCompare(arrv3[..^2u])==0");
		#line 6767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_mul)(sp, arrv3)), "sp<*arrv3");
		#line 6768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_mul)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)))), "sp[1u..]>*arrv3[..^1u]");
		#line 6769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(1))), "sp.StartsWith(1)");
		#line 6770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(3))), "notsp.StartsWith(3)");
		#line 6771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), sp)), "arrv3[..].StartsWith(sp)");
		#line 6772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)).$ref(), sp)), "notarrv3[1u..].StartsWith(sp)");
		#line 6774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 6775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.IndexOf(23)==null");
		#line 6776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.IndexOf(8)==7u");
		#line 6777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.IndexOf(arrv3[5u..10u])==5u");
		#line 6778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), arrv3) == nullptr), "sp.IndexOf(arrv3)==null");
		#line 6779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.LastIndexOf(2)==1u");
		#line 6780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.LastIndexOf(23)==null");
		#line 6781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.LastIndexOf(8)==7u");
		#line 6782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.LastIndexOf(arrv3[5u..10u])==5u");
		#line 6783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrv3.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(16U)), "arrv3.LastIndexOf(sp[..2u])==16u");
		#line 6784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), arrv3) == nullptr), "sp.LastIndexOf(arrv3)==null");
		#line 6786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5)==2u");
		#line 6787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7)==2u");
		#line 6788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7), DefaultEqualityComparer) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7,DefaultEqualityComparer)==2u");
		#line 6789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(20), Builtin::i32(30)) == nullptr), "sp.IndexOfAny(20,30)==null");
		#line 6790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), arrv2) == Builtin::u32(1U)), "sp.IndexOfAny(arrv2)==1u");
		#line 6791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>(Builtin::i32(5), Builtin::i32(10))) == Builtin::u32(4U)), "sp.IndexOfAny(5..=10)==4u");
		#line 6792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(100))>, true>(Builtin::i32(50), Builtin::i32(100))) == nullptr), "sp.IndexOfAny(50..=100)==null");
		#line 6793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1)) == Builtin::u32(1U)), "sp.IndexOfAnyExcept(1)==1u");
		#line 6794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3)) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3)==3u");
		#line 6795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), DefaultEqualityComparer) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3,DefaultEqualityComparer)==3u");
		#line 6796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.IndexOfAnyExcept(arrv2)==0u");
		#line 6797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv3) == nullptr), "sp.IndexOfAnyExcept(arrv3)==null");
		#line 6798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>({}, Builtin::i32(10))) == Builtin::u32(10U)), "sp.IndexOfAnyExcept(..=10)==10u");
		#line 6799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(16))>, true>({}, Builtin::i32(16))) == nullptr), "sp.IndexOfAnyExcept(..=16)==null");
		#line 6801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5)) == Builtin::u32(4U)), "sp.LastIndexOfAny(3,5)==4u");
		#line 6802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7)) == Builtin::u32(6U)), "sp.LastIndexOfAny(3,5,7)==6u");
		#line 6803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7), DefaultEqualityComparer) == Builtin::u32(6U)), "sp.LastIndexOfAny(3,5,7,DefaultEqualityComparer)==6u");
		#line 6804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(20), Builtin::i32(30)) == nullptr), "sp.LastIndexOfAny(20,30)==null");
		#line 6805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), arrv2) == Builtin::u32(4U)), "sp.LastIndexOfAny(arrv2)==4u");
		#line 6806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>(Builtin::i32(5), Builtin::i32(10))) == Builtin::u32(9U)), "sp.LastIndexOfAny(5..=10)==9u");
		#line 6807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(100))>, true>(Builtin::i32(50), Builtin::i32(100))) == nullptr), "sp.LastIndexOfAny(50..=100)==null");
		#line 6808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(16)) == Builtin::u32(14U)), "sp.LastIndexOfAnyExcept(16)==14u");
		#line 6809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16)) == Builtin::u32(12U)), "sp.LastIndexOfAnyExcept(14,15,16)==12u");
		#line 6810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), DefaultEqualityComparer) == Builtin::u32(12U)), "sp.LastIndexOfAnyExcept(14,15,16,DefaultEqualityComparer)==12u");
		#line 6811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), arrv2) == Builtin::u32(15U)), "sp.LastIndexOfAnyExcept(arrv2)==15u");
		#line 6812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), arrv3) == nullptr), "sp.LastIndexOfAnyExcept(arrv3)==null");
		#line 6813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(20))>, true>(Builtin::i32(10), Builtin::i32(20))) == Builtin::u32(8U)), "sp.LastIndexOfAnyExcept(10..=20)==8u");
		#line 6814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(16))>, true>({}, Builtin::i32(16))) == nullptr), "sp.LastIndexOfAnyExcept(..=16)==null");
		#line 6816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(CountAny)(sp.$ref(), arrv2) == Builtin::u32(4U)), "sp.CountAny(arrv2)==4u");
		#line 6817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Overlaps)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(Builtin::u32(5U), System::Index::End, false)).$ref(), arrwide)), "sp[5u..].Overlaps(arrwide)");
		#line 6818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(Overlaps)(sp.$ref(), arrv2)), "notsp.Overlaps(arrv2)");
		#line 6820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto index = Builtin::u32(1U); 
		#line 6821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6821 = ADV_UPCS(Reversed)(sp.$ref()); auto $for_iter_6821 = ADV_UFCS(Iterate)($for_init_6821.$ref()); while($for_iter_6821.$ref().MoveNext()) {
		auto&& i = $for_iter_6821.$ref().GetCurrent(); {
			#line 6822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i == ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(index))), "i==sp[^index]");
			#line 6823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++index;
		}}}
		#line 6826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_dol_eq)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(8U))>, false>(Builtin::u32(3U), Builtin::u32(8U))), Builtin::InitializerList({Builtin::i32(8), Builtin::i32(12), Builtin::i32(14), Builtin::i32(11), Builtin::i32(9)}));
		#line 6827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(3)) == Builtin::i32(8)), "arrwide[3]==8");
		#line 6828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(4)) == Builtin::i32(12)), "arrwide[4]==12");
		#line 6829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(5)) == Builtin::i32(14)), "arrwide[5]==14");
		#line 6830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(6)) == Builtin::i32(11)), "arrwide[6]==11");
		#line 6831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(7)) == Builtin::i32(9)), "arrwide[7]==9");
		#line 6832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_dol_eq)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(8U))>, false>(Builtin::u32(3U), Builtin::u32(8U))), Builtin::InitializerList({Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8)}));
		#line 6833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Replace)(arrwide.$ref(), Builtin::i32(5), Builtin::i32(25));
		#line 6834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(5)) == nullptr), "arrwide.IndexOf(5)==null");
		#line 6835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(25)) == Builtin::u32(4U)), "arrwide.IndexOf(25)==4u");
		#line 6836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(25)) == Builtin::u32(20U)), "arrwide.LastIndexOf(25)==20u");
		#line 6837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Replace)(arrwide.$ref(), Builtin::i32(25), Builtin::i32(5));
		#line 6838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(25)) == nullptr), "arrwide.IndexOf(25)==null");
		#line 6839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(5)) == Builtin::u32(4U)), "arrwide.IndexOf(5)==4u");
		#line 6840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(5)) == Builtin::u32(20U)), "arrwide.LastIndexOf(5)==20u");
		#line 6842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Reverse)(arrwide.$ref());
		#line 6843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(15)), "arrwide[0]==15");
		#line 6844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(15)) == Builtin::i32(16)), "arrwide[15]==16");
		#line 6845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(1)), "arrwide[^1u]==1");
		#line 6847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsSorted)(arrwide.$ref())), "notarrwide.IsSorted");
		#line 6848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Sort)(arrwide.$ref());
		#line 6849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(IsSorted)(arrwide.$ref())), "arrwide.IsSorted");
		#line 6850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(1)), "arrwide[0]==1");
		#line 6851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(1)), "arrwide[1]==1");
		#line 6852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(2)), "arrwide[2]==2");
		#line 6853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(3U))) == Builtin::i32(15)), "arrwide[^3u]==15");
		#line 6854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(15)), "arrwide[^2u]==15");
		#line 6855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(16)), "arrwide[^1u]==16");
		#line 6856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(SortByDescending)(arrwide.$ref());
		#line 6857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IsSorted)(arrwide.$ref(), DefaultDescendingComparator)), "arrwide.IsSorted(DefaultDescendingComparator)");
		#line 6858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(16)), "arrwide[0]==16");
		#line 6859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(15)), "arrwide[1]==15");
		#line 6860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(15)), "arrwide[2]==15");
		#line 6861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(3U))) == Builtin::i32(2)), "arrwide[^3u]==2");
		#line 6862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(1)), "arrwide[^2u]==1");
		#line 6863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(1)), "arrwide[^1u]==1");
		#line 6865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto bytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2))}); 
		#line 6867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Reverse)(bytes.$ref());
		#line 6868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(0)) == Builtin::u8(2U)), "bytes[0]==2u8");
		#line 6869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::u8(1U)), "bytes[^1u]==1u8");
		#line 6871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Sort)(ADV_UFCS(_operator_subscript)(bytes.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(31U))>, false>({}, Builtin::u32(31U))).$ref(), ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)));
		#line 6873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Clear)(arrwide.$ref());
		#line 6874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(arrwide.$ref(), Builtin::i32(0)) == nullptr), "arrwide.IndexOfAnyExcept(0)==null");
		#line 6875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Fill)(arrwide.$ref(), Builtin::i32(6));
		#line 6876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Fill)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), Builtin::i32(6));
		#line 6877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(6)) == Builtin::u32(0U)), "arrwide.IndexOf(6)==0u");
		#line 6878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(6)) == Builtin::u32(30U)), "arrwide.LastIndexOf(6)==30u");
		#line 6879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(arrwide.$ref(), Builtin::i32(6)) == nullptr), "arrwide.IndexOfAnyExcept(6)==null");
		#line 6880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Generate)(arrwide.$ref(), [n = Builtin::i32(0)] () mutable { ADV_EXPRESSION_BODY(n++); });
		#line 6881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(0)), "arrwide[0]==0");
		#line 6882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(1)), "arrwide[1]==1");
		#line 6883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(2)), "arrwide[2]==2");
		#line 6884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(30)) == Builtin::i32(30)), "arrwide[30]==30");
		#line 6885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(RotateLeft)(arrwide.$ref(), Builtin::u32(5U));
		#line 6886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(5)), "arrwide[0]==5");
		#line 6887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(6)), "arrwide[1]==6");
		#line 6888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(7)), "arrwide[2]==7");
		#line 6889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(30)) == Builtin::i32(4)), "arrwide[30]==4");
		#line 6890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(RotateRight)(arrwide.$ref(), Builtin::u32(5U));
		#line 6891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(0)), "arrwide[0]==0");
		#line 6892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(1)), "arrwide[1]==1");
		#line 6893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(2)), "arrwide[2]==2");
		#line 6894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(30)) == Builtin::i32(30)), "arrwide[30]==30");
		#line 6896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(spm.$ref()) == Builtin::i32(3)), "spm.Length==3");
		#line 6898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(spm.$ref())), "notspm.IsEmpty");
		#line 6899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 6900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "spm[0]==20");
		#line 6901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "spm[1]==3");
		#line 6902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "spm[2]==4");
		#line 6903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "spm[@Unchecked3]==5");
		#line 6904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "spm[^1u]==4");
		#line 6905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "spm[^2u]==3");
		#line 6906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((spm == spm2), "spm==spm2");
		#line 6908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "spm[..^1u].Length==2");
		#line 6909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "spm[..=^1u].Length==3");
		#line 6911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(spm, Builtin::i32(3))), "3inspm");
		#line 6912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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