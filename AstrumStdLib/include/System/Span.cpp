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
#line 5204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanContains : public Builtin::StaticClass {
		public: using $self = SpanContains<T>;
		private: SpanContains() = default;
		#line 5205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const bool;
		
	};
	
	#line 5228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanMismatch : public Builtin::StaticClass {
		public: using $self = SpanMismatch;
		private: SpanMismatch() = default;
		#line 5229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
		
	};
	
	#line 5252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanCount : public Builtin::StaticClass {
		public: using $self = SpanCount<T>;
		private: SpanCount() = default;
		#line 5253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::usize;
		
	};
	
	#line 5279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOf : public Builtin::StaticClass {
		public: using $self = SpanIndexOf<T>;
		private: SpanIndexOf() = default;
		#line 5280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny2<T>;
		private: SpanIndexOfAny2() = default;
		#line 5308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny3<T>;
		private: SpanIndexOfAny3() = default;
		#line 5337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny4<T>;
		private: SpanIndexOfAny4() = default;
		#line 5367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAny5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAny5<T>;
		private: SpanIndexOfAny5() = default;
		#line 5398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept1 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept1<T>;
		private: SpanIndexOfAnyExcept1() = default;
		#line 5432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept2 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept2<T>;
		private: SpanIndexOfAnyExcept2() = default;
		#line 5460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept3 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept3<T>;
		private: SpanIndexOfAnyExcept3() = default;
		#line 5489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept4 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept4<T>;
		private: SpanIndexOfAnyExcept4() = default;
		#line 5519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExcept5 : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExcept5<T>;
		private: SpanIndexOfAnyExcept5() = default;
		#line 5550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyInRange<T>;
		private: SpanIndexOfAnyInRange() = default;
		#line 5584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanIndexOfAnyExceptInRange : public Builtin::StaticClass {
		public: using $self = SpanIndexOfAnyExceptInRange<T>;
		private: SpanIndexOfAnyExceptInRange() = default;
		#line 5613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOf : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOf<T>;
		private: SpanLastIndexOf() = default;
		#line 5642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny2 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny2<T>;
		private: SpanLastIndexOfAny2() = default;
		#line 5668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny3 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny3<T>;
		private: SpanLastIndexOfAny3() = default;
		#line 5695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny4 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny4<T>;
		private: SpanLastIndexOfAny4() = default;
		#line 5723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAny5 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAny5<T>;
		private: SpanLastIndexOfAny5() = default;
		#line 5752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept1 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept1<T>;
		private: SpanLastIndexOfAnyExcept1() = default;
		#line 5784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept2 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept2<T>;
		private: SpanLastIndexOfAnyExcept2() = default;
		#line 5810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept3 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept3<T>;
		private: SpanLastIndexOfAnyExcept3() = default;
		#line 5837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept4 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept4<T>;
		private: SpanLastIndexOfAnyExcept4() = default;
		#line 5865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExcept5 : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExcept5<T>;
		private: SpanLastIndexOfAnyExcept5() = default;
		#line 5894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyInRange : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyInRange<T>;
		private: SpanLastIndexOfAnyInRange() = default;
		#line 5926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanLastIndexOfAnyExceptInRange : public Builtin::StaticClass {
		public: using $self = SpanLastIndexOfAnyExceptInRange<T>;
		private: SpanLastIndexOfAnyExceptInRange() = default;
		#line 5953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>;
		
	};
	
	#line 5979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanReplace : public Builtin::StaticClass {
		public: using $self = SpanReplace<T>;
		private: SpanReplace() = default;
		#line 5980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::MutableSpan<T> buf, T oldValue, T newValue)  -> void;
		
	};
	
	#line 6004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanReverse : public Builtin::StaticClass {
		public: using $self = SpanReverse<T>;
		private: SpanReverse() = default;
		#line 6005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::MutableSpan<T> buf)  -> void;
		
	};
	
	#line 6152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceEquals : public Builtin::StaticClass {
		public: using $self = SpanSequenceEquals<T>;
		private: SpanSequenceEquals() = default;
		#line 6153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
		
	};
	
	#line 6178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanSequenceCompare : public Builtin::StaticClass {
		public: using $self = SpanSequenceCompare<T>;
		private: SpanSequenceCompare() = default;
		#line 6179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32;
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	namespace __Span$Protected { 
	
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





namespace __Span$Protected {
		#line 2451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool
		{
			#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool
		{
			#line 2465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool
		{
			#line 2478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool
		{
			#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ContainsGeneralCase(data, val);
			} else {
				#line 2494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize
		{
			#line 2514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize
		{
			#line 2527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize
		{
			#line 2540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize
		{
			#line 2553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return CountGeneralCase(data, val);
			} else {
				#line 2556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanCount<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
		{
			#line 2567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index = length % Builtin::u32(4U);
				#line 2571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (index) {
					#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))) {
						#line 2573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(0U);
					}
					#line 2576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((index <=> Builtin::u32(1U)) > 0) {
						#line 2577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) {
							#line 2578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(1U);
						}
						#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if ((index <=> Builtin::u32(2U)) > 0 && ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))) {
							#line 2582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::u32(2U);
						}
					}
				}
				#line 2587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((index <=> length - Builtin::u32(4U)) <= 0) 
				{
					#line 2588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)) {
						#line 2589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index;
					}
					#line 2591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U))) {
						#line 2592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(1U);
					}
					#line 2594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U))) {
						#line 2595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(2U);
					}
					#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U))) {
						#line 2598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return index + Builtin::u32(3U);
					}
					#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					index += Builtin::u32(4U);
				}
				#line 2603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return length;
			} else {
				#line 2604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Sse2>)(left, right, length);
				} else {
					#line 2606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx2, Sse2>)(left, right, length);
					} else {
						#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx512BW, Avx2, Sse2>)(left, right, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 2692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 2694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 2704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 2705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 2706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 2707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 2708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 2709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 2717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 2718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 2719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 2720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 2721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 2722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 2730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfGeneralCase(data, val);
			} else {
				#line 2731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 2732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 2733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 2734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 2735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 2983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 2985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 2987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 2992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 2995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 2996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 2997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 2998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 3009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 3010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 3023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 3024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 3037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 3050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 3063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 3064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 3077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 3078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAny5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 3376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 3389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 3402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 3404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 3413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 3415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 3417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 3426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 3439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 3452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 3453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 3466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 3467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 3480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 3482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 3484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 3493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 3495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 3497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 3506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 3507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 3509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 3511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 3520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 3521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 3523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 3525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExcept5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 3562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 3573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 3575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 3577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 3601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 3614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 3616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return IndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 3625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 3627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 3629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 3712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 3713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 3714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 3715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 3716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 3725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 3726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 3727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 3728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 3729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 3730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 3738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 3739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 3740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 3741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 3742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 3743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 3748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 3751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfGeneralCase(data, val);
			} else {
				#line 3752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 3753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 3754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 3755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 3756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 3757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOf<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 4005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 4018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 4031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 4032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 4045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u8>(data, values);
			} else {
				#line 4046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2);
			} else {
				#line 4059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyGeneralCase(data, val1, val2, val3);
			} else {
				#line 4072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 4085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 4086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 4099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInternal<Builtin::u16>(data, values);
			} else {
				#line 4100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAny5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Sse2>)(data, val);
				} else {
					#line 4397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Sse2>)(data, val);
				} else {
					#line 4410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
					} else {
						#line 4412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
				} else {
					#line 4423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
					} else {
						#line 4425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val);
			} else {
				#line 4434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
				} else {
					#line 4436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
					} else {
						#line 4438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept1<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 4447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 4460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4)}); 
				#line 4473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 4474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(val1), Builtin::u8(val2), Builtin::u8(val3), Builtin::u8(val4), Builtin::u8(val5)}); 
				#line 4487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u8>(data, values);
			} else {
				#line 4488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2);
			} else {
				#line 4501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Sse2>)(data, val1, val2);
				} else {
					#line 4503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2);
					} else {
						#line 4505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept2<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptGeneralCase(data, val1, val2, val3);
			} else {
				#line 4514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3);
				} else {
					#line 4516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3);
					} else {
						#line 4518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept3<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4)}); 
				#line 4527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 4528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4);
				} else {
					#line 4530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4);
					} else {
						#line 4532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept4<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto values = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(val1), Builtin::u16(val2), Builtin::u16(val3), Builtin::u16(val4), Builtin::u16(val5)}); 
				#line 4541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInternal<Builtin::u16>(data, values);
			} else {
				#line 4542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Sse2>)(data, val1, val2, val3, val4, val5);
				} else {
					#line 4544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
					} else {
						#line 4546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExcept5<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val1, val2, val3, val4, val5);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 4583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyInRangeGeneralCase(data, start, end);
			} else {
				#line 4594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 4596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 4598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Sse2>)(data, start, end);
				} else {
					#line 4622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, start, end);
				} else {
					#line 4635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, start, end);
					} else {
						#line 4637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::LastIndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return LastIndexOfAnyExceptInRangeGeneralCase(data, start, end);
			} else {
				#line 4646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, start, end);
				} else {
					#line 4648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, start, end);
					} else {
						#line 4650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanLastIndexOfAnyExceptInRange<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, start, end);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceByte(System::MutableSpan<Builtin::u8> buf, Builtin::u8 oldValue, Builtin::u8 newValue)  -> void
		{
			#line 4664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 4667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 4669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 4671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u8>, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceWord(System::MutableSpan<Builtin::u16> buf, Builtin::u16 oldValue, Builtin::u16 newValue)  -> void
		{
			#line 4677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 4680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 4682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 4684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u16>, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceDword(System::MutableSpan<Builtin::u32> buf, Builtin::u32 oldValue, Builtin::u32 newValue)  -> void
		{
			#line 4690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 4693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512VL128, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 4695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 4697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u32>, Neon, Avx512F, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReplaceQword(System::MutableSpan<Builtin::u64> buf, Builtin::u64 oldValue, Builtin::u64 newValue)  -> void
		{
			#line 4703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReplaceGeneralCase(buf, oldValue, newValue);
			} else {
				#line 4706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(buf, oldValue, newValue);
				} else {
					#line 4708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
					} else {
						#line 4710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReplace<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(buf, oldValue, newValue);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool
		{
			#line 4761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 4764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 4766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 4768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool
		{
			#line 4774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 4777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Sse2>)(lhs, rhs);
				} else {
					#line 4779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 4781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool
		{
			#line 4787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 4790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL128, Sse2>)(lhs, rhs);
				} else {
					#line 4792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(lhs, rhs);
					} else {
						#line 4794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool
		{
			#line 4800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(2U)) < 0) {
				#line 4802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceEqualsGeneralCase(lhs, rhs);
			} else {
				#line 4803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(4U)) < 0) {
					#line 4804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(lhs, rhs);
				} else {
					#line 4805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(8U)) < 0) {
						#line 4806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(lhs, rhs);
					} else {
						#line 4807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceEquals<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(lhs, rhs);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceCompareByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 4823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceCompareGeneralCase(lhs, rhs, length);
			} else {
				#line 4825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 4826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Sse2>)(lhs, rhs, length);
				} else {
					#line 4827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Avx2, Sse2>)(lhs, rhs, length);
					} else {
						#line 4829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::SequenceCompareWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 4835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return SequenceCompareGeneralCase(lhs, rhs, length);
			} else {
				#line 4837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Sse2>)(lhs, rhs, length);
				} else {
					#line 4839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Avx2, Sse2>)(lhs, rhs, length);
					} else {
						#line 4841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanSequenceCompare<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(lhs, rhs, length);
						}
					}
				}
			}
			return {};
		}
	}
namespace __Span$Protected {
		#line 4859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseBytes(System::MutableSpan<Builtin::u8> buf)  -> void
		{
			#line 4860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(32U)) < 0) {
				#line 4862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 4863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(48U)) < 0) {
					#line 4864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 4865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(128U)) < 0) {
						#line 4866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Avx2, Sse42, Sse2>)(buf);
					} else {
						#line 4867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u8>, Neon64, Neon, Avx512Vbmi, Avx2, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseWords(System::MutableSpan<Builtin::u16> buf)  -> void
		{
			#line 4873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 4875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 4876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(24U)) < 0) {
					#line 4877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 4878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(64U)) < 0) {
						#line 4879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Avx2, Sse42, Sse2>)(buf);
					} else {
						#line 4880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u16>, Neon64, Neon, Avx512BW, Avx2, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseDwords(System::MutableSpan<Builtin::u32> buf)  -> void
		{
			#line 4886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 4888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 4889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 4890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 4891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(32U)) < 0) {
						#line 4892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Avx, Sse42, Sse2>)(buf);
					} else {
						#line 4893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u32>, Neon64, Neon, Avx512F, Avx, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
namespace __Span$Protected {
		#line 4898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto SpanHelpers::ReverseQwords(System::MutableSpan<Builtin::u64> buf)  -> void
		{
			#line 4899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 4900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 4901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ReverseGeneralCase(buf);
			} else {
				#line 4902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 4903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Sse42, Sse2>)(buf);
				} else {
					#line 4904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((length <=> Builtin::u32(16U)) < 0) {
						#line 4905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Avx, Sse42, Sse2>)(buf);
					} else {
						#line 4906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 4907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanReverse<Builtin::u64>, Neon64, Neon, Avx512F, Avx, Sse42, Sse2>)(buf);
						}
					}
				}
			}
		}
	}
#line 5205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanContains<T>::Invoke(System::Span<T> data, T val)  -> const bool
	{
		#line 5206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 5215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 5218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 5221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 5224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}

#line 5229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class Arch> auto SpanMismatch::Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 5230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 5231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 5232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 5234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 5235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask maskVec{}; 
		#line 5236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((index <=> vecLast) < 0) 
		{
			#line 5237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
			#line 5238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
				{
					#line 5238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *i; const auto& i = __tmp0;
					
					#line 5239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
			#line 5241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index += vecSize;
		}
		#line 5243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		index = vecLast;
		#line 5244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
		#line 5245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
			{
				#line 5245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *i; const auto& i = __tmp0;
				
				#line 5246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index + i;
			}
		}
		#line 5248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return length;
	}

#line 5253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanCount<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::usize
	{
		#line 5254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 5258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 5259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentVec{}; 
		#line 5261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 5263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize i{}; 
		#line 5264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (; (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 5265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentVec = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(currentVec, values);
			#line 5267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			count += ADV_UPCS(Count)(currentMask.$ref());
		}
		#line 5269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()))> mask = ADV_UPCS(ScalarMask)((ADV_UFCS(_operator_eq_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast)), values)).$ref()); 
		#line 5270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((i <=> vecLast) > 0) {
			#line 5272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			mask >>= i - vecLast;
		}
		#line 5274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count += ADV_UPCS(PopCount)(mask.$ref());
		#line 5275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}

#line 5280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 5292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 5299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 5321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 5328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 5351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 5358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 5382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 5389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAny5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 5415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 5423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept1<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 5444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 5451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 5473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 5480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 5503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 5510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 5534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 5541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExcept5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 5567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 5575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 5591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 5592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = ADV_UFCS(_operator_sub_mod)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i)), low);
			#line 5596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)(current, range);
			#line 5597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range);
			#line 5604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanIndexOfAnyExceptInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 5620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 5621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 5624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 5625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 5626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 5631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 5632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 5633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(currentMask.$ref())) {
				{
					#line 5633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + vecLast;
				}
			}
		}
		#line 5637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOf<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
			#line 5654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_eq_eq_xor)(current, values);
		#line 5660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
			#line 5681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2));
		#line 5687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
			#line 5709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3));
		#line 5715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
			#line 5738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4));
		#line 5744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAny5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
			#line 5769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = (ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5));
		#line 5776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept1<T>::Invoke(System::Span<T> data, T val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 5791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
			#line 5796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_ne_eq_xor)(current, values);
		#line 5802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept2<T>::Invoke(System::Span<T> data, T val1, T val2)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
			#line 5823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2))));
		#line 5829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept3<T>::Invoke(System::Span<T> data, T val1, T val2, T val3)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
			#line 5851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3))));
		#line 5857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept4<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
			#line 5880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4))));
		#line 5886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExcept5<T>::Invoke(System::Span<T> data, T val1, T val2, T val3, T val4, T val5)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val1))> values1 = TVector::Create(val1); 
		#line 5901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val2))> values2 = TVector::Create(val2); 
		#line 5902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val3))> values3 = TVector::Create(val3); 
		#line 5903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val4))> values4 = TVector::Create(val4); 
		#line 5904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val5))> values5 = TVector::Create(val5); 
		#line 5905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
			#line 5911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)(((ADV_UFCS(_operator_eq_eq_xor)(current, values1)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values2)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values3)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values4)) | (ADV_UFCS(_operator_eq_eq_xor)(current, values5))));
		#line 5918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 5933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 5934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = ADV_UFCS(_operator_sub_mod)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i))), low);
			#line 5938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_lt_eq_xor)(current, range);
			#line 5939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range);
		#line 5945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanLastIndexOfAnyExceptInRange<T>::Invoke(System::Span<T> data, T start, T end)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 5954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 5958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::isize{count} - vecSize)> vecLast = Builtin::isize{count} - vecSize; 
		#line 5959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(start))> low = TVector::Create(start); 
		#line 5960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(end - start))> range = TVector::Create(end - start); 
		#line 5961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 5962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(vecLast)> i = vecLast; (i <=> Builtin::i32(0)) > 0; i -= vecSize) 
		{
			#line 5964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)));
			#line 5965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
			#line 5966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
				{
					#line 5966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 5967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
		}
		#line 5970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
		#line 5971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_not)((ADV_UFCS(_operator_lt_eq_xor)((ADV_UFCS(_operator_sub_mod)(current, low)), range)));
		#line 5972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto index = ADV_UPCS(LastSet)(currentMask.$ref())) {
			{
				#line 5972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 5973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		}
		#line 5975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}

#line 5980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanReplace<T>::Invoke(System::MutableSpan<T> buf, T oldValue, T newValue)  -> void
	{
		#line 5981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 5982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 5983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 5984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> count = ADV_UPCS(Length)(buf.$ref()); 
		#line 5985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 5986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(oldValue))> oldValues = TVector::Create(oldValue); 
		#line 5987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(newValue))> newValues = TVector::Create(newValue); 
		#line 5988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector original{}; 
		#line 5989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask currentMask{}; 
		#line 5990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector result{}; 
		#line 5991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 5992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			original = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i));
			#line 5993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentMask = ADV_UFCS(_operator_eq_eq_xor)(original, oldValues);
			#line 5994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			result = TVector::ConditionalSelect(currentMask, newValues, original);
			#line 5995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(result.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i)));
		}
		#line 5997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		original = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, vecLast));
		#line 5998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentMask = ADV_UFCS(_operator_eq_eq_xor)(original, oldValues);
		#line 5999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = TVector::ConditionalSelect(currentMask, newValues, original);
		#line 6000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(StoreUnsafe)(result.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, vecLast)));
	}

#line 6005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanReverse<T>::Invoke(System::MutableSpan<T> buf)  -> void
	{
		#line 6006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> count = ADV_UPCS(Length)(buf.$ref()); 
		#line 6010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::isize>(count))> remainder = Builtin::Cast<true, Builtin::isize>(count); 
		#line 6011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::isize offset{}; 
		#line 6012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(remainder - vecSize)> lastOffset = remainder - vecSize; 
		#line 6014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		do 
		#line 6014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))))> tmpFirst = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))); 
			#line 6016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))))> tmpLast = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))); 
			#line 6018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 6019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<Arch, Avx512Vbmi>) {
					#line 6020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					tmpFirst = Avx512Vbmi::Swizzle(tmpFirst, TVector::Create(Builtin::u8(63U), Builtin::u8(62U), Builtin::u8(61U), Builtin::u8(60U), Builtin::u8(59U), Builtin::u8(58U), Builtin::u8(57U), Builtin::u8(56U), Builtin::u8(55U), Builtin::u8(54U), Builtin::u8(53U), Builtin::u8(52U), Builtin::u8(51U), Builtin::u8(50U), Builtin::u8(49U), Builtin::u8(48U), Builtin::u8(47U), Builtin::u8(46U), Builtin::u8(45U), Builtin::u8(44U), Builtin::u8(43U), Builtin::u8(42U), Builtin::u8(41U), Builtin::u8(40U), Builtin::u8(39U), Builtin::u8(38U), Builtin::u8(37U), Builtin::u8(36U), Builtin::u8(35U), Builtin::u8(34U), Builtin::u8(33U), Builtin::u8(32U), Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
					#line 6025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					tmpLast = Avx512Vbmi::Swizzle(tmpLast, TVector::Create(Builtin::u8(63U), Builtin::u8(62U), Builtin::u8(61U), Builtin::u8(60U), Builtin::u8(59U), Builtin::u8(58U), Builtin::u8(57U), Builtin::u8(56U), Builtin::u8(55U), Builtin::u8(54U), Builtin::u8(53U), Builtin::u8(52U), Builtin::u8(51U), Builtin::u8(50U), Builtin::u8(49U), Builtin::u8(48U), Builtin::u8(47U), Builtin::u8(46U), Builtin::u8(45U), Builtin::u8(44U), Builtin::u8(43U), Builtin::u8(42U), Builtin::u8(41U), Builtin::u8(40U), Builtin::u8(39U), Builtin::u8(38U), Builtin::u8(37U), Builtin::u8(36U), Builtin::u8(35U), Builtin::u8(34U), Builtin::u8(33U), Builtin::u8(32U), Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
				} else {
					#line 6030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (std::is_same_v<Arch, Avx2>) {
						#line 6031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpFirst = Avx2::Swizzle(tmpFirst, TVector::Create(Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
						#line 6035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpLast = Avx2::Swizzle(tmpLast, TVector::Create(Builtin::u8(31U), Builtin::u8(30U), Builtin::u8(29U), Builtin::u8(28U), Builtin::u8(27U), Builtin::u8(26U), Builtin::u8(25U), Builtin::u8(24U), Builtin::u8(23U), Builtin::u8(22U), Builtin::u8(21U), Builtin::u8(20U), Builtin::u8(19U), Builtin::u8(18U), Builtin::u8(17U), Builtin::u8(16U), Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
					} else {
						#line 6039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Sse42>) {
							#line 6040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Sse42::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
							#line 6042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Sse42::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
						} else {
							#line 6044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Sse2>) {
								#line 6045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Sse2::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
								#line 6047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Sse2::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
							} else {
								#line 6049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Neon64>) {
									#line 6050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Neon64::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
									#line 6052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Neon64::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
								} else {
									#line 6054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Neon>) {
										#line 6055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Neon::Swizzle(tmpFirst, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
										#line 6057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Neon::Swizzle(tmpLast, TVector::Create(Builtin::u8(15U), Builtin::u8(14U), Builtin::u8(13U), Builtin::u8(12U), Builtin::u8(11U), Builtin::u8(10U), Builtin::u8(9U), Builtin::u8(8U), Builtin::u8(7U), Builtin::u8(6U), Builtin::u8(5U), Builtin::u8(4U), Builtin::u8(3U), Builtin::u8(2U), Builtin::u8(1U), Builtin::u8(0U)));
									}
								}
							}
						}
					}
				}
			} else {
				#line 6060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 6061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (std::is_same_v<Arch, Avx512BW>) {
						#line 6062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpFirst = Avx512BW::Swizzle(tmpFirst, TVector::Create(Builtin::u16(31U), Builtin::u16(30U), Builtin::u16(29U), Builtin::u16(28U), Builtin::u16(27U), Builtin::u16(26U), Builtin::u16(25U), Builtin::u16(24U), Builtin::u16(23U), Builtin::u16(22U), Builtin::u16(21U), Builtin::u16(20U), Builtin::u16(19U), Builtin::u16(18U), Builtin::u16(17U), Builtin::u16(16U), Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
						#line 6065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmpLast = Avx512BW::Swizzle(tmpLast, TVector::Create(Builtin::u16(31U), Builtin::u16(30U), Builtin::u16(29U), Builtin::u16(28U), Builtin::u16(27U), Builtin::u16(26U), Builtin::u16(25U), Builtin::u16(24U), Builtin::u16(23U), Builtin::u16(22U), Builtin::u16(21U), Builtin::u16(20U), Builtin::u16(19U), Builtin::u16(18U), Builtin::u16(17U), Builtin::u16(16U), Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
					} else {
						#line 6068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Avx2>) {
							#line 6069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Avx2::Swizzle(tmpFirst, TVector::Create(Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
							#line 6072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Avx2::Swizzle(tmpLast, TVector::Create(Builtin::u16(15U), Builtin::u16(14U), Builtin::u16(13U), Builtin::u16(12U), Builtin::u16(11U), Builtin::u16(10U), Builtin::u16(9U), Builtin::u16(8U), Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
						} else {
							#line 6075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Sse42>) {
								#line 6076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Sse42::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
								#line 6078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Sse42::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
							} else {
								#line 6080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Sse2>) {
									#line 6081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Sse2::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
									#line 6083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Sse2::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
								} else {
									#line 6085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Neon64>) {
										#line 6086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Neon64::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
										#line 6088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Neon64::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
									} else {
										#line 6090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Neon>) {
											#line 6091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Neon::Swizzle(tmpFirst, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
											#line 6093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Neon::Swizzle(tmpLast, TVector::Create(Builtin::u16(7U), Builtin::u16(6U), Builtin::u16(5U), Builtin::u16(4U), Builtin::u16(3U), Builtin::u16(2U), Builtin::u16(1U), Builtin::u16(0U)));
										}
									}
								}
							}
						}
					}
				} else {
					#line 6096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 6097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (std::is_same_v<Arch, Avx512F>) {
							#line 6098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpFirst = Avx512F::template Swizzle<Builtin::i32(15), Builtin::i32(14), Builtin::i32(13), Builtin::i32(12), Builtin::i32(11), Builtin::i32(10), Builtin::i32(9), Builtin::i32(8), Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
							#line 6099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmpLast = Avx512F::template Swizzle<Builtin::i32(15), Builtin::i32(14), Builtin::i32(13), Builtin::i32(12), Builtin::i32(11), Builtin::i32(10), Builtin::i32(9), Builtin::i32(8), Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
						} else {
							#line 6100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Avx>) {
								#line 6101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Avx::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
								#line 6102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Avx::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
							} else {
								#line 6103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Sse42>) {
									#line 6104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Sse42::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
									#line 6105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Sse42::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
								} else {
									#line 6106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Sse2>) {
										#line 6107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Sse2::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
										#line 6108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Sse2::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
									} else {
										#line 6109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Neon64>) {
											#line 6110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Neon64::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
											#line 6111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Neon64::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
										} else {
											#line 6112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if constexpr (std::is_same_v<Arch, Neon>) {
												#line 6113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpFirst = Neon::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
												#line 6114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpLast = Neon::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
											}
										}
									}
								}
							}
						}
					} else {
						#line 6116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 6117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (std::is_same_v<Arch, Avx512F>) {
								#line 6118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpFirst = Avx512F::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
								#line 6119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								tmpLast = Avx512F::template Swizzle<Builtin::i32(7), Builtin::i32(6), Builtin::i32(5), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
							} else {
								#line 6120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (std::is_same_v<Arch, Avx>) {
									#line 6121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpFirst = Avx::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
									#line 6122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									tmpLast = Avx::template Swizzle<Builtin::i32(3), Builtin::i32(2), Builtin::i32(1), Builtin::i32(0)>(tmpLast);
								} else {
									#line 6123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (std::is_same_v<Arch, Sse42>) {
										#line 6124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpFirst = Sse42::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
										#line 6125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										tmpLast = Sse42::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
									} else {
										#line 6126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (std::is_same_v<Arch, Sse2>) {
											#line 6127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpFirst = Sse2::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
											#line 6128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											tmpLast = Sse2::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
										} else {
											#line 6129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if constexpr (std::is_same_v<Arch, Neon64>) {
												#line 6130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpFirst = Neon64::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
												#line 6131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												tmpLast = Neon64::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpLast);
											} else {
												#line 6132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if constexpr (std::is_same_v<Arch, Neon>) {
													#line 6133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													tmpFirst = Neon::template Swizzle<Builtin::i32(1), Builtin::i32(0)>(tmpFirst);
													#line 6134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
			#line 6138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(tmpLast.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(offset))));
			#line 6139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(StoreUnsafe)(tmpFirst.$ref(), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(lastOffset))));
			#line 6141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			offset += vecSize;
			#line 6142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			lastOffset -= vecSize;
		} while ((lastOffset <=> offset) >= 0);
		#line 6144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		remainder = lastOffset + vecSize - offset;
		#line 6146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((remainder <=> Builtin::i32(1)) > 0) {
			#line 6147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((__Span$Protected::SpanHelpers), ReverseGeneralCase)(ADV_UFCS(SliceUnchecked)(buf.$ref(), Builtin::Cast<true, Builtin::usize>(offset), Builtin::Cast<true, Builtin::usize>(remainder)));
		}
	}

#line 6153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceEquals<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
	{
		#line 6154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> count = ADV_UPCS(Length)(lhs.$ref()); 
		#line 6157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 6158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 6159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 6160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 6161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 6162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i));
			#line 6163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 6164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 6167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 6168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 6170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!ADV_UFCS(EqualsAll)(currentLeft.$ref(), currentRight)) {
				#line 6171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}
		#line 6174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}

#line 6179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanSequenceCompare<T>::Invoke(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32
	{
		#line 6180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 6181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<T, Arch>;
		#line 6182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 6183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		length -= vecSize;
		#line 6184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentLeft{}; 
		#line 6185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector currentRight{}; 
		#line 6186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize offset{}; 
		#line 6187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask matches{}; 
		#line 6188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto processDifference = [&] () 
		{
			#line 6189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const auto diffs = ADV_UFCS(_operator_not)(matches); 
			#line 6190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto index = ADV_UPCS(FirstSet)(diffs.$ref())) {
				{
					#line 6190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *index; const auto& index = __tmp0;
					
					#line 6191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					offset += index;
				}
			}
			#line 6193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const auto result = ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset); 
			#line 6194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((result != Builtin::i32(0)), "result!=0");
			#line 6195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return result;
		}; 
		#line 6197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((length <=> offset) > 0) 
		{
			#line 6198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset));
			#line 6199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset));
			#line 6200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			matches = ADV_UFCS(_operator_eq_eq_xor)(currentLeft, currentRight);
			#line 6201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(All)(matches.$ref())) {
				#line 6202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += vecSize;
				#line 6203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				continue;
			}
			#line 6205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return processDifference();
		}
		#line 6207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		offset = length;
		#line 6208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentLeft = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset));
		#line 6209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		currentRight = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset));
		#line 6210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		matches = ADV_UFCS(_operator_eq_eq_xor)(currentLeft, currentRight);
		#line 6211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(All)(matches.$ref())) {
			#line 6212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UFCS(NarrowToInt32)((ADV_UFCS(_operator_sub_mod)(ADV_UPCS(Length)(lhs.$ref()), ADV_UPCS(Length)(rhs.$ref()))).$ref());
		}
		#line 6214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return processDifference();
	}

#line 6218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::Span<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "Span should be 2 pointers wide");
#line 6219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISelfEquatable>(), "i32[&] should be ISelfEquatable");
#line 6220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, IEquatable<System::Span<Builtin::i32>>>(), "i32[&] should be IEquatable<i32[&]>");
#line 6221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISpanConvertible>(), "i32[&] should be ISpanConvertible>");
#line 6223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 6224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 6225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 6227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static bool $Test_74f4eaae11671ff9 = [](){
		#line 6228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 6229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 6230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 6231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.$ref())), "notsp.IsEmpty");
		#line 6232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 6233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 6234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 6235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 6236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 6237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 6238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp2 = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 6239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 6240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 6241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		#line 6242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spmm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = spmm;
		#line 6244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 6245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 6246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 6248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrwide = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15))}); 
		#line 6249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false));
		#line 6251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(3))), "3insp");
		#line 6252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(13))), "13insp");
		#line 6253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(sp, Builtin::i32(26))), "26notinsp");
		#line 6255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 6256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(10)); 
		#line 6257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_6257 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 6258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((result == Builtin::i32(9)), "result==9");
			}
			else {
				#line 6259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
				
			}
		}

		#line 6261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(20));
		#line 6262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_6262 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 6263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
			}
			else {
				#line 6264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((ADV_UPCS(Error)(result.$ref()) == Builtin::u32(16U)), "result.Error==16u");
				
			}
		}

		#line 6267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9))}); 
		#line 6268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv) == Builtin::u32(5U)), "sp.Mismatch(arrv)==5u");
		#line 6269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv, DefaultEqualityComparer) == Builtin::u32(5U)), "sp.Mismatch(arrv,DefaultEqualityComparer)==5u");
		#line 6270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 6271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.Mismatch(arrv2)==0u");
		#line 6272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv3 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2))}); 
		#line 6273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(arrv3.$ref(), sp) == Builtin::u32(16U)), "arrv3.Mismatch(sp)==16u");
		#line 6274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(ADV_UFCS(AsMutableSpan)(arrv3.$ref()).$ref(), sp) == Builtin::u32(16U)), "arrv3.AsMutableSpan().Mismatch(sp)==16u");
		#line 6275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), sp) == nullptr), "sp.Mismatch(sp)==null");
		#line 6276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(15)) == Builtin::u32(1U)), "sp.Count(15)==1u");
		#line 6277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(18)) == Builtin::u32(0U)), "sp.Count(18)==0u");
		#line 6278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(2U)), "arrv3[..].Count(sp[..2u])==2u");
		#line 6279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(1), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(3), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(2), Builtin::i32(2), Builtin::i32(4), Builtin::i32(3), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(5), Builtin::i32(2), Builtin::i32(2)});
		#line 6280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = arrv3;
		#line 6281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(Trim)(sp.$ref(), Builtin::i32(2)).$ref()) == Builtin::u32(16U)), "sp.Trim(2).Length==16u");
		#line 6282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(10U)), "sp.Count(2)==10u");
		#line 6283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 6284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(3)) == Builtin::u32(4U)), "sp.IndexOf(3)==4u");
		#line 6285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(17U)), "sp.LastIndexOf(2)==17u");
		#line 6286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(3)) == Builtin::u32(11U)), "sp.LastIndexOf(3)==11u");
		#line 6287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::i32 count{}; 
		#line 6288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6288 = ADV_UFCS(Split)(sp.$ref(), Builtin::i32(2)); auto $for_iter_6288 = ADV_UFCS(Iterate)($for_init_6288.$ref()); while($for_iter_6288.$ref().MoveNext()) {
		auto&& i = $for_iter_6288.$ref().GetCurrent(); {
			#line 6289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(11)), "count==11");
		#line 6292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6293 = ADV_UFCS(Split)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(3U))>, false>(Builtin::u32(1U), Builtin::u32(3U)))); auto $for_iter_6293 = ADV_UFCS(Iterate)($for_init_6293.$ref()); while($for_iter_6293.$ref().MoveNext()) {
		auto&& i = $for_iter_6293.$ref().GetCurrent(); {
			#line 6294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(5)), "count==5");
		#line 6297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		count = Builtin::i32(0);
		#line 6298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6298 = ADV_UFCS(SplitAny)(sp.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(5U))>, false>(Builtin::u32(3U), Builtin::u32(5U)))); auto $for_iter_6298 = ADV_UFCS(Iterate)($for_init_6298.$ref()); while($for_iter_6298.$ref().MoveNext()) {
		auto&& i = $for_iter_6298.$ref().GetCurrent(); {
			#line 6299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
		}}}
		#line 6301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((count == Builtin::i32(13)), "count==13");
		#line 6302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2), Builtin::i32(2)});
		#line 6303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Count)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(18U)), "sp.Count(2)==18u");
		#line 6304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(0U)), "sp.IndexOf(2)==0u");
		#line 6305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(17U)), "sp.LastIndexOf(2)==17u");
		#line 6307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), sp)), "sp.SequenceEquals(sp)");
		#line 6308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		arrv3 = Builtin::InitializerList({Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11), Builtin::i32(12), Builtin::i32(13), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), Builtin::i32(1), Builtin::i32(2)});
		#line 6309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(SequenceEquals)(sp.$ref(), arrv2)), "notsp.SequenceEquals(arrv2)");
		#line 6310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 6311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceEquals)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false)))), "sp.SequenceEquals(arrv3[..^2u])");
		#line 6312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(SequenceCompare)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(2U)), false))) == Builtin::i32(0)), "sp.SequenceCompare(arrv3[..^2u])==0");
		#line 6313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_mul)(sp, arrv3)), "sp<*arrv3");
		#line 6314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_mul)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)))), "sp[1u..]>*arrv3[..^1u]");
		#line 6315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(1))), "sp.StartsWith(1)");
		#line 6316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(sp.$ref(), Builtin::i32(3))), "notsp.StartsWith(3)");
		#line 6317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), sp)), "arrv3[..].StartsWith(sp)");
		#line 6318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::IndexRange(Builtin::u32(1U), System::Index::End, false)).$ref(), sp)), "notarrv3[1u..].StartsWith(sp)");
		#line 6320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.IndexOf(2)==1u");
		#line 6321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.IndexOf(23)==null");
		#line 6322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.IndexOf(8)==7u");
		#line 6323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.IndexOf(arrv3[5u..10u])==5u");
		#line 6324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(sp.$ref(), arrv3) == nullptr), "sp.IndexOf(arrv3)==null");
		#line 6325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(2)) == Builtin::u32(1U)), "sp.LastIndexOf(2)==1u");
		#line 6326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(23)) == nullptr), "sp.LastIndexOf(23)==null");
		#line 6327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), Builtin::i32(8)) == Builtin::u32(7U)), "sp.LastIndexOf(8)==7u");
		#line 6328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), ADV_UFCS(_operator_subscript)(arrv3.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(10U))>, false>(Builtin::u32(5U), Builtin::u32(10U)))) == Builtin::u32(5U)), "sp.LastIndexOf(arrv3[5u..10u])==5u");
		#line 6329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrv3.$ref(), ADV_UFCS(_operator_subscript)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(2U))>, false>({}, Builtin::u32(2U)))) == Builtin::u32(16U)), "arrv3.LastIndexOf(sp[..2u])==16u");
		#line 6330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(sp.$ref(), arrv3) == nullptr), "sp.LastIndexOf(arrv3)==null");
		#line 6332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5)==2u");
		#line 6333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7)) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7)==2u");
		#line 6334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7), DefaultEqualityComparer) == Builtin::u32(2U)), "sp.IndexOfAny(3,5,7,DefaultEqualityComparer)==2u");
		#line 6335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), Builtin::i32(20), Builtin::i32(30)) == nullptr), "sp.IndexOfAny(20,30)==null");
		#line 6336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), arrv2) == Builtin::u32(1U)), "sp.IndexOfAny(arrv2)==1u");
		#line 6337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>(Builtin::i32(5), Builtin::i32(10))) == Builtin::u32(4U)), "sp.IndexOfAny(5..=10)==4u");
		#line 6338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(100))>, true>(Builtin::i32(50), Builtin::i32(100))) == nullptr), "sp.IndexOfAny(50..=100)==null");
		#line 6339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1)) == Builtin::u32(1U)), "sp.IndexOfAnyExcept(1)==1u");
		#line 6340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3)) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3)==3u");
		#line 6341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), DefaultEqualityComparer) == Builtin::u32(3U)), "sp.IndexOfAnyExcept(1,2,3,DefaultEqualityComparer)==3u");
		#line 6342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.IndexOfAnyExcept(arrv2)==0u");
		#line 6343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), arrv3) == nullptr), "sp.IndexOfAnyExcept(arrv3)==null");
		#line 6344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>({}, Builtin::i32(10))) == Builtin::u32(10U)), "sp.IndexOfAnyExcept(..=10)==10u");
		#line 6345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(16))>, true>({}, Builtin::i32(16))) == nullptr), "sp.IndexOfAnyExcept(..=16)==null");
		#line 6347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5)) == Builtin::u32(4U)), "sp.LastIndexOfAny(3,5)==4u");
		#line 6348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7)) == Builtin::u32(6U)), "sp.LastIndexOfAny(3,5,7)==6u");
		#line 6349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(3), Builtin::i32(5), Builtin::i32(7), DefaultEqualityComparer) == Builtin::u32(6U)), "sp.LastIndexOfAny(3,5,7,DefaultEqualityComparer)==6u");
		#line 6350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), Builtin::i32(20), Builtin::i32(30)) == nullptr), "sp.LastIndexOfAny(20,30)==null");
		#line 6351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), arrv2) == Builtin::u32(4U)), "sp.LastIndexOfAny(arrv2)==4u");
		#line 6352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(10))>, true>(Builtin::i32(5), Builtin::i32(10))) == Builtin::u32(9U)), "sp.LastIndexOfAny(5..=10)==9u");
		#line 6353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAny)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(100))>, true>(Builtin::i32(50), Builtin::i32(100))) == nullptr), "sp.LastIndexOfAny(50..=100)==null");
		#line 6354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(16)) == Builtin::u32(14U)), "sp.LastIndexOfAnyExcept(16)==14u");
		#line 6355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16)) == Builtin::u32(12U)), "sp.LastIndexOfAnyExcept(14,15,16)==12u");
		#line 6356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), Builtin::i32(14), Builtin::i32(15), Builtin::i32(16), DefaultEqualityComparer) == Builtin::u32(12U)), "sp.LastIndexOfAnyExcept(14,15,16,DefaultEqualityComparer)==12u");
		#line 6357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), arrv2) == Builtin::u32(15U)), "sp.LastIndexOfAnyExcept(arrv2)==15u");
		#line 6358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), arrv3) == nullptr), "sp.LastIndexOfAnyExcept(arrv3)==null");
		#line 6359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(20))>, true>(Builtin::i32(10), Builtin::i32(20))) == Builtin::u32(8U)), "sp.LastIndexOfAnyExcept(10..=20)==8u");
		#line 6360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOfAnyExcept)(sp.$ref(), System::Range<Builtin::Auto<decltype(Builtin::i32(16))>, true>({}, Builtin::i32(16))) == nullptr), "sp.LastIndexOfAnyExcept(..=16)==null");
		#line 6362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(CountAny)(sp.$ref(), arrv2) == Builtin::u32(4U)), "sp.CountAny(arrv2)==4u");
		#line 6363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Overlaps)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(Builtin::u32(5U), System::Index::End, false)).$ref(), arrwide)), "sp[5u..].Overlaps(arrwide)");
		#line 6364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(Overlaps)(sp.$ref(), arrv2)), "notsp.Overlaps(arrv2)");
		#line 6366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto index = Builtin::u32(1U); 
		#line 6367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_6367 = ADV_UPCS(Reversed)(sp.$ref()); auto $for_iter_6367 = ADV_UFCS(Iterate)($for_init_6367.$ref()); while($for_iter_6367.$ref().MoveNext()) {
		auto&& i = $for_iter_6367.$ref().GetCurrent(); {
			#line 6368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i == ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(index))), "i==sp[^index]");
			#line 6369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++index;
		}}}
		#line 6372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_dol_eq)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(8U))>, false>(Builtin::u32(3U), Builtin::u32(8U))), Builtin::InitializerList({Builtin::i32(8), Builtin::i32(12), Builtin::i32(14), Builtin::i32(11), Builtin::i32(9)}));
		#line 6373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(3)) == Builtin::i32(8)), "arrwide[3]==8");
		#line 6374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(4)) == Builtin::i32(12)), "arrwide[4]==12");
		#line 6375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(5)) == Builtin::i32(14)), "arrwide[5]==14");
		#line 6376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(6)) == Builtin::i32(11)), "arrwide[6]==11");
		#line 6377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(7)) == Builtin::i32(9)), "arrwide[7]==9");
		#line 6378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_dol_eq)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(8U))>, false>(Builtin::u32(3U), Builtin::u32(8U))), Builtin::InitializerList({Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8)}));
		#line 6379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Replace)(arrwide.$ref(), Builtin::i32(5), Builtin::i32(25));
		#line 6380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(5)) == nullptr), "arrwide.IndexOf(5)==null");
		#line 6381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(25)) == Builtin::u32(4U)), "arrwide.IndexOf(25)==4u");
		#line 6382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(25)) == Builtin::u32(20U)), "arrwide.LastIndexOf(25)==20u");
		#line 6383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Replace)(arrwide.$ref(), Builtin::i32(25), Builtin::i32(5));
		#line 6384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(25)) == nullptr), "arrwide.IndexOf(25)==null");
		#line 6385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(5)) == Builtin::u32(4U)), "arrwide.IndexOf(5)==4u");
		#line 6386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(5)) == Builtin::u32(20U)), "arrwide.LastIndexOf(5)==20u");
		#line 6388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Reverse)(arrwide.$ref());
		#line 6389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(15)), "arrwide[0]==15");
		#line 6390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(15)) == Builtin::i32(16)), "arrwide[15]==16");
		#line 6391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(1)), "arrwide[^1u]==1");
		#line 6393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Sort)(arrwide.$ref());
		#line 6394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(1)), "arrwide[0]==1");
		#line 6395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(1)), "arrwide[1]==1");
		#line 6396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(2)), "arrwide[2]==2");
		#line 6397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(3U))) == Builtin::i32(15)), "arrwide[^3u]==15");
		#line 6398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(15)), "arrwide[^2u]==15");
		#line 6399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(16)), "arrwide[^1u]==16");
		#line 6400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(SortByDescending)(arrwide.$ref());
		#line 6401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(0)) == Builtin::i32(16)), "arrwide[0]==16");
		#line 6402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(1)) == Builtin::i32(15)), "arrwide[1]==15");
		#line 6403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), Builtin::i32(2)) == Builtin::i32(15)), "arrwide[2]==15");
		#line 6404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(3U))) == Builtin::i32(2)), "arrwide[^3u]==2");
		#line 6405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(1)), "arrwide[^2u]==1");
		#line 6406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arrwide.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(1)), "arrwide[^1u]==1");
		#line 6408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto bytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(6)), Builtin::u8(Builtin::i32(7)), Builtin::u8(Builtin::i32(8)), Builtin::u8(Builtin::i32(9)), Builtin::u8(Builtin::i32(10)), Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15)), Builtin::u8(Builtin::i32(16)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2))}); 
		#line 6410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Reverse)(bytes.$ref());
		#line 6411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(0)) == Builtin::u8(2U)), "bytes[0]==2u8");
		#line 6412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::u8(1U)), "bytes[^1u]==1u8");
		#line 6414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Sort)(ADV_UFCS(_operator_subscript)(bytes.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(31U))>, false>({}, Builtin::u32(31U))).$ref(), ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)));
		#line 6416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Clear)(arrwide.$ref());
		#line 6417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(arrwide.$ref(), Builtin::i32(0)) == nullptr), "arrwide.IndexOfAnyExcept(0)==null");
		#line 6418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Fill)(arrwide.$ref(), Builtin::i32(6));
		#line 6419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(Fill)(ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(System::Index::Start, System::Index::End, false)).$ref(), Builtin::i32(6));
		#line 6420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOf)(arrwide.$ref(), Builtin::i32(6)) == Builtin::u32(0U)), "arrwide.IndexOf(6)==0u");
		#line 6421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(LastIndexOf)(arrwide.$ref(), Builtin::i32(6)) == Builtin::u32(30U)), "arrwide.LastIndexOf(6)==30u");
		#line 6422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(IndexOfAnyExcept)(arrwide.$ref(), Builtin::i32(6)) == nullptr), "arrwide.IndexOfAnyExcept(6)==null");
		#line 6424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(spm.$ref()) == Builtin::i32(3)), "spm.Length==3");
		#line 6426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(spm.$ref())), "notspm.IsEmpty");
		#line 6427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 6428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "spm[0]==20");
		#line 6429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "spm[1]==3");
		#line 6430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "spm[2]==4");
		#line 6431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "spm[@Unchecked3]==5");
		#line 6432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "spm[^1u]==4");
		#line 6433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "spm[^2u]==3");
		#line 6434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 6435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((spm == spm2), "spm==spm2");
		#line 6436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "spm[..^1u].Length==2");
		#line 6437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "spm[..=^1u].Length==3");
		#line 6439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(spm, Builtin::i32(3))), "3inspm");
		#line 6440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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