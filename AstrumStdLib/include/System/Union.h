#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Union$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T1, class T2> class Union2;
template<class T1, class T2> class $Class_Union2;
template<class T1, class T2, class T3> class Union3;
template<class T1, class T2, class T3> class $Class_Union3;
template<class T1, class T2, class T3, class T4> class Union4;
template<class T1, class T2, class T3, class T4> class $Class_Union4;
template<class T1, class T2, class T3, class T4, class T5> class Union5;
template<class T1, class T2, class T3, class T4, class T5> class $Class_Union5;
template<class T1, class T2, class T3, class T4, class T5, class T6> class Union6;
template<class T1, class T2, class T3, class T4, class T5, class T6> class $Class_Union6;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> class Union7;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> class $Class_Union7;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> class Union8;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> class $Class_Union8;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> class Union9;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> class $Class_Union9;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> class Union10;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> class $Class_Union10;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T1, class T2> class $Class_Union2;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2> struct Union2 final : public Builtin::Union {
		public: using $self = Union2<T1, T2>;
		public: using $class = $Class_Union2<T1, T2>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		private: union {
			#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2
 		} __union_internal_tag;
		public:
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 2;
		Union2() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union2(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union2(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				
			}
		}
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union2(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				
			}
		}
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union2($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				
			}
		}
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union2() { __destroy(); }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union2& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union2& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else static_assert(false, "Cannot to cast union type Union2 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3> class $Class_Union3;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3> struct Union3 final : public Builtin::Union {
		public: using $self = Union3<T1, T2, T3>;
		public: using $class = $Class_Union3<T1, T2, T3>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		private: union {
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3
 		} __union_internal_tag;
		public:
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 3;
		Union3() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				
			}
		}
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union3(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				
			}
		}
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union3($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				
			}
		}
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union3() { __destroy(); }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union3& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else static_assert(false, "Cannot to cast union type Union3 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4> class $Class_Union4;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4> struct Union4 final : public Builtin::Union {
		public: using $self = Union4<T1, T2, T3, T4>;
		public: using $class = $Class_Union4<T1, T2, T3, T4>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		private: union {
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4
 		} __union_internal_tag;
		public:
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 4;
		Union4() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				
			}
		}
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union4(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				
			}
		}
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union4($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				
			}
		}
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union4() { __destroy(); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union4& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else static_assert(false, "Cannot to cast union type Union4 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5> class $Class_Union5;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5> struct Union5 final : public Builtin::Union {
		public: using $self = Union5<T1, T2, T3, T4, T5>;
		public: using $class = $Class_Union5<T1, T2, T3, T4, T5>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		private: union {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5
 		} __union_internal_tag;
		public:
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 5;
		Union5() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				
			}
		}
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union5(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				
			}
		}
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union5($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				
			}
		}
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union5() { __destroy(); }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union5& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else static_assert(false, "Cannot to cast union type Union5 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6> class $Class_Union6;
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> struct Union6 final : public Builtin::Union {
		public: using $self = Union6<T1, T2, T3, T4, T5, T6>;
		public: using $class = $Class_Union6<T1, T2, T3, T4, T5, T6>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		private: union {
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item6 _Item6;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5, _TAG__Item6
 		} __union_internal_tag;
		public:
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 6;
		Union6() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6(Builtin::In<Item6> value) : __union_internal_tag{ _TAG__Item6 } { new (&_Item6) Item6(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(other._Item6); break;
				
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union6(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(std::move(other._Item6)); break;
				
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union6($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: _Item6.~Item6(); break;
				
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union6() { __destroy(); }
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union6& operator=(Builtin::In<Item6> value) {
			__destroy();
			__union_internal_tag = _TAG__Item6;
			new (&_Item6) Item6(value); return *this;
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem6() { if (__union_internal_tag != _TAG__Item6) throw std::logic_error("Type mismatch in the discriminated union"); return _Item6; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else if constexpr (std::is_same_v<__SomeT, Item6>) { if(__union_internal_tag == _TAG__Item6) return _Item6; }
			else static_assert(false, "Cannot to cast union type Union6 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6 && _Item6 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> class $Class_Union7;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> struct Union7 final : public Builtin::Union {
		public: using $self = Union7<T1, T2, T3, T4, T5, T6, T7>;
		public: using $class = $Class_Union7<T1, T2, T3, T4, T5, T6, T7>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item7 = T7; ADV_CHECK_REF_STRUCT("T7", T7);
		private: union {
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item6 _Item6;
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item7 _Item7;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5, _TAG__Item6, _TAG__Item7
 		} __union_internal_tag;
		public:
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 7;
		Union7() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item6> value) : __union_internal_tag{ _TAG__Item6 } { new (&_Item6) Item6(value); }
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7(Builtin::In<Item7> value) : __union_internal_tag{ _TAG__Item7 } { new (&_Item7) Item7(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(other._Item6); break;
				#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(other._Item7); break;
				
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union7(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(std::move(other._Item6)); break;
				#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(std::move(other._Item7)); break;
				
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union7($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: _Item6.~Item6(); break;
				#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: _Item7.~Item7(); break;
				
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union7() { __destroy(); }
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item6> value) {
			__destroy();
			__union_internal_tag = _TAG__Item6;
			new (&_Item6) Item6(value); return *this;
		}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union7& operator=(Builtin::In<Item7> value) {
			__destroy();
			__union_internal_tag = _TAG__Item7;
			new (&_Item7) Item7(value); return *this;
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem6() { if (__union_internal_tag != _TAG__Item6) throw std::logic_error("Type mismatch in the discriminated union"); return _Item6; }
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem7() { if (__union_internal_tag != _TAG__Item7) throw std::logic_error("Type mismatch in the discriminated union"); return _Item7; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else if constexpr (std::is_same_v<__SomeT, Item6>) { if(__union_internal_tag == _TAG__Item6) return _Item6; }
			else if constexpr (std::is_same_v<__SomeT, Item7>) { if(__union_internal_tag == _TAG__Item7) return _Item7; }
			else static_assert(false, "Cannot to cast union type Union7 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6 && _Item6 == other;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7 && _Item7 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> class $Class_Union8;
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> struct Union8 final : public Builtin::Union {
		public: using $self = Union8<T1, T2, T3, T4, T5, T6, T7, T8>;
		public: using $class = $Class_Union8<T1, T2, T3, T4, T5, T6, T7, T8>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item7 = T7; ADV_CHECK_REF_STRUCT("T7", T7);
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item8 = T8; ADV_CHECK_REF_STRUCT("T8", T8);
		private: union {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item6 _Item6;
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item7 _Item7;
			#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item8 _Item8;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5, _TAG__Item6, _TAG__Item7, _TAG__Item8
 		} __union_internal_tag;
		public:
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 8;
		Union8() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item6> value) : __union_internal_tag{ _TAG__Item6 } { new (&_Item6) Item6(value); }
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item7> value) : __union_internal_tag{ _TAG__Item7 } { new (&_Item7) Item7(value); }
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8(Builtin::In<Item8> value) : __union_internal_tag{ _TAG__Item8 } { new (&_Item8) Item8(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(other._Item6); break;
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(other._Item7); break;
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(other._Item8); break;
				
			}
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union8(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(std::move(other._Item6)); break;
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(std::move(other._Item7)); break;
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(std::move(other._Item8)); break;
				
			}
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union8($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: _Item6.~Item6(); break;
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: _Item7.~Item7(); break;
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: _Item8.~Item8(); break;
				
			}
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union8() { __destroy(); }
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item6> value) {
			__destroy();
			__union_internal_tag = _TAG__Item6;
			new (&_Item6) Item6(value); return *this;
		}
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item7> value) {
			__destroy();
			__union_internal_tag = _TAG__Item7;
			new (&_Item7) Item7(value); return *this;
		}
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union8& operator=(Builtin::In<Item8> value) {
			__destroy();
			__union_internal_tag = _TAG__Item8;
			new (&_Item8) Item8(value); return *this;
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem6() { if (__union_internal_tag != _TAG__Item6) throw std::logic_error("Type mismatch in the discriminated union"); return _Item6; }
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem7() { if (__union_internal_tag != _TAG__Item7) throw std::logic_error("Type mismatch in the discriminated union"); return _Item7; }
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem8() { if (__union_internal_tag != _TAG__Item8) throw std::logic_error("Type mismatch in the discriminated union"); return _Item8; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else if constexpr (std::is_same_v<__SomeT, Item6>) { if(__union_internal_tag == _TAG__Item6) return _Item6; }
			else if constexpr (std::is_same_v<__SomeT, Item7>) { if(__union_internal_tag == _TAG__Item7) return _Item7; }
			else if constexpr (std::is_same_v<__SomeT, Item8>) { if(__union_internal_tag == _TAG__Item8) return _Item8; }
			else static_assert(false, "Cannot to cast union type Union8 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6 && _Item6 == other;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7 && _Item7 == other;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8 && _Item8 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> class $Class_Union9;
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> struct Union9 final : public Builtin::Union {
		public: using $self = Union9<T1, T2, T3, T4, T5, T6, T7, T8, T9>;
		public: using $class = $Class_Union9<T1, T2, T3, T4, T5, T6, T7, T8, T9>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item7 = T7; ADV_CHECK_REF_STRUCT("T7", T7);
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item8 = T8; ADV_CHECK_REF_STRUCT("T8", T8);
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item9 = T9; ADV_CHECK_REF_STRUCT("T9", T9);
		private: union {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item6 _Item6;
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item7 _Item7;
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item8 _Item8;
			#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item9 _Item9;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5, _TAG__Item6, _TAG__Item7, _TAG__Item8, _TAG__Item9
 		} __union_internal_tag;
		public:
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 9;
		Union9() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item6> value) : __union_internal_tag{ _TAG__Item6 } { new (&_Item6) Item6(value); }
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item7> value) : __union_internal_tag{ _TAG__Item7 } { new (&_Item7) Item7(value); }
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item8> value) : __union_internal_tag{ _TAG__Item8 } { new (&_Item8) Item8(value); }
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9(Builtin::In<Item9> value) : __union_internal_tag{ _TAG__Item9 } { new (&_Item9) Item9(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(other._Item6); break;
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(other._Item7); break;
				#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(other._Item8); break;
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: new (&_Item9) Item9(other._Item9); break;
				
			}
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union9(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(std::move(other._Item6)); break;
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(std::move(other._Item7)); break;
				#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(std::move(other._Item8)); break;
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: new (&_Item9) Item9(std::move(other._Item9)); break;
				
			}
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union9($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: _Item6.~Item6(); break;
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: _Item7.~Item7(); break;
				#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: _Item8.~Item8(); break;
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: _Item9.~Item9(); break;
				
			}
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union9() { __destroy(); }
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item6> value) {
			__destroy();
			__union_internal_tag = _TAG__Item6;
			new (&_Item6) Item6(value); return *this;
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item7> value) {
			__destroy();
			__union_internal_tag = _TAG__Item7;
			new (&_Item7) Item7(value); return *this;
		}
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item8> value) {
			__destroy();
			__union_internal_tag = _TAG__Item8;
			new (&_Item8) Item8(value); return *this;
		}
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union9& operator=(Builtin::In<Item9> value) {
			__destroy();
			__union_internal_tag = _TAG__Item9;
			new (&_Item9) Item9(value); return *this;
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem6() { if (__union_internal_tag != _TAG__Item6) throw std::logic_error("Type mismatch in the discriminated union"); return _Item6; }
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem7() { if (__union_internal_tag != _TAG__Item7) throw std::logic_error("Type mismatch in the discriminated union"); return _Item7; }
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem8() { if (__union_internal_tag != _TAG__Item8) throw std::logic_error("Type mismatch in the discriminated union"); return _Item8; }
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem9() { if (__union_internal_tag != _TAG__Item9) throw std::logic_error("Type mismatch in the discriminated union"); return _Item9; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8;
			else if constexpr (std::is_same_v<__SomeT, Item9>) return __union_internal_tag == _TAG__Item9;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else if constexpr (std::is_same_v<__SomeT, Item6>) { if(__union_internal_tag == _TAG__Item6) return _Item6; }
			else if constexpr (std::is_same_v<__SomeT, Item7>) { if(__union_internal_tag == _TAG__Item7) return _Item7; }
			else if constexpr (std::is_same_v<__SomeT, Item8>) { if(__union_internal_tag == _TAG__Item8) return _Item8; }
			else if constexpr (std::is_same_v<__SomeT, Item9>) { if(__union_internal_tag == _TAG__Item9) return _Item9; }
			else static_assert(false, "Cannot to cast union type Union9 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6 && _Item6 == other;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7 && _Item7 == other;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8 && _Item8 == other;
			else if constexpr (std::is_same_v<__SomeT, Item9>) return __union_internal_tag == _TAG__Item9 && _Item9 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> class $Class_Union10;
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> struct Union10 final : public Builtin::Union {
		public: using $self = Union10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;
		public: using $class = $Class_Union10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item7 = T7; ADV_CHECK_REF_STRUCT("T7", T7);
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item8 = T8; ADV_CHECK_REF_STRUCT("T8", T8);
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item9 = T9; ADV_CHECK_REF_STRUCT("T9", T9);
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using Item10 = T10; ADV_CHECK_REF_STRUCT("T10", T10);
		private: union {
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item1 _Item1;
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item2 _Item2;
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item3 _Item3;
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item4 _Item4;
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item5 _Item5;
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item6 _Item6;
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item7 _Item7;
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item8 _Item8;
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item9 _Item9;
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
			Item10 _Item10;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Item1, _TAG__Item2, _TAG__Item3, _TAG__Item4, _TAG__Item5, _TAG__Item6, _TAG__Item7, _TAG__Item8, _TAG__Item9, _TAG__Item10
 		} __union_internal_tag;
		public:
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		static constexpr int __variants = 10;
		Union10() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item1> value) : __union_internal_tag{ _TAG__Item1 } { new (&_Item1) Item1(value); }
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item2> value) : __union_internal_tag{ _TAG__Item2 } { new (&_Item2) Item2(value); }
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item3> value) : __union_internal_tag{ _TAG__Item3 } { new (&_Item3) Item3(value); }
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item4> value) : __union_internal_tag{ _TAG__Item4 } { new (&_Item4) Item4(value); }
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item5> value) : __union_internal_tag{ _TAG__Item5 } { new (&_Item5) Item5(value); }
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item6> value) : __union_internal_tag{ _TAG__Item6 } { new (&_Item6) Item6(value); }
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item7> value) : __union_internal_tag{ _TAG__Item7 } { new (&_Item7) Item7(value); }
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item8> value) : __union_internal_tag{ _TAG__Item8 } { new (&_Item8) Item8(value); }
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item9> value) : __union_internal_tag{ _TAG__Item9 } { new (&_Item9) Item9(value); }
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10(Builtin::In<Item10> value) : __union_internal_tag{ _TAG__Item10 } { new (&_Item10) Item10(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(other._Item1); break;
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(other._Item2); break;
				#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(other._Item3); break;
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(other._Item4); break;
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(other._Item5); break;
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(other._Item6); break;
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(other._Item7); break;
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(other._Item8); break;
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: new (&_Item9) Item9(other._Item9); break;
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item10: new (&_Item10) Item10(other._Item10); break;
				
			}
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union10(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: new (&_Item1) Item1(std::move(other._Item1)); break;
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: new (&_Item2) Item2(std::move(other._Item2)); break;
				#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: new (&_Item3) Item3(std::move(other._Item3)); break;
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: new (&_Item4) Item4(std::move(other._Item4)); break;
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: new (&_Item5) Item5(std::move(other._Item5)); break;
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: new (&_Item6) Item6(std::move(other._Item6)); break;
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: new (&_Item7) Item7(std::move(other._Item7)); break;
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: new (&_Item8) Item8(std::move(other._Item8)); break;
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: new (&_Item9) Item9(std::move(other._Item9)); break;
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item10: new (&_Item10) Item10(std::move(other._Item10)); break;
				
			}
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: Union10($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item1: _Item1.~Item1(); break;
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item2: _Item2.~Item2(); break;
				#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item3: _Item3.~Item3(); break;
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item4: _Item4.~Item4(); break;
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item5: _Item5.~Item5(); break;
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item6: _Item6.~Item6(); break;
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item7: _Item7.~Item7(); break;
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item8: _Item8.~Item8(); break;
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item9: _Item9.~Item9(); break;
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
				case _TAG__Item10: _Item10.~Item10(); break;
				
			}
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: ~Union10() { __destroy(); }
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item1> value) {
			__destroy();
			__union_internal_tag = _TAG__Item1;
			new (&_Item1) Item1(value); return *this;
		}
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item2> value) {
			__destroy();
			__union_internal_tag = _TAG__Item2;
			new (&_Item2) Item2(value); return *this;
		}
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item3> value) {
			__destroy();
			__union_internal_tag = _TAG__Item3;
			new (&_Item3) Item3(value); return *this;
		}
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item4> value) {
			__destroy();
			__union_internal_tag = _TAG__Item4;
			new (&_Item4) Item4(value); return *this;
		}
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item5> value) {
			__destroy();
			__union_internal_tag = _TAG__Item5;
			new (&_Item5) Item5(value); return *this;
		}
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item6> value) {
			__destroy();
			__union_internal_tag = _TAG__Item6;
			new (&_Item6) Item6(value); return *this;
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item7> value) {
			__destroy();
			__union_internal_tag = _TAG__Item7;
			new (&_Item7) Item7(value); return *this;
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item8> value) {
			__destroy();
			__union_internal_tag = _TAG__Item8;
			new (&_Item8) Item8(value); return *this;
		}
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item9> value) {
			__destroy();
			__union_internal_tag = _TAG__Item9;
			new (&_Item9) Item9(value); return *this;
		}
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		Union10& operator=(Builtin::In<Item10> value) {
			__destroy();
			__union_internal_tag = _TAG__Item10;
			new (&_Item10) Item10(value); return *this;
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem1() { if (__union_internal_tag != _TAG__Item1) throw std::logic_error("Type mismatch in the discriminated union"); return _Item1; }
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem2() { if (__union_internal_tag != _TAG__Item2) throw std::logic_error("Type mismatch in the discriminated union"); return _Item2; }
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem3() { if (__union_internal_tag != _TAG__Item3) throw std::logic_error("Type mismatch in the discriminated union"); return _Item3; }
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem4() { if (__union_internal_tag != _TAG__Item4) throw std::logic_error("Type mismatch in the discriminated union"); return _Item4; }
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem5() { if (__union_internal_tag != _TAG__Item5) throw std::logic_error("Type mismatch in the discriminated union"); return _Item5; }
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem6() { if (__union_internal_tag != _TAG__Item6) throw std::logic_error("Type mismatch in the discriminated union"); return _Item6; }
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem7() { if (__union_internal_tag != _TAG__Item7) throw std::logic_error("Type mismatch in the discriminated union"); return _Item7; }
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem8() { if (__union_internal_tag != _TAG__Item8) throw std::logic_error("Type mismatch in the discriminated union"); return _Item8; }
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem9() { if (__union_internal_tag != _TAG__Item9) throw std::logic_error("Type mismatch in the discriminated union"); return _Item9; }
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: auto GetItem10() { if (__union_internal_tag != _TAG__Item10) throw std::logic_error("Type mismatch in the discriminated union"); return _Item10; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8;
			else if constexpr (std::is_same_v<__SomeT, Item9>) return __union_internal_tag == _TAG__Item9;
			else if constexpr (std::is_same_v<__SomeT, Item10>) return __union_internal_tag == _TAG__Item10;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) { if(__union_internal_tag == _TAG__Item1) return _Item1; }
			else if constexpr (std::is_same_v<__SomeT, Item2>) { if(__union_internal_tag == _TAG__Item2) return _Item2; }
			else if constexpr (std::is_same_v<__SomeT, Item3>) { if(__union_internal_tag == _TAG__Item3) return _Item3; }
			else if constexpr (std::is_same_v<__SomeT, Item4>) { if(__union_internal_tag == _TAG__Item4) return _Item4; }
			else if constexpr (std::is_same_v<__SomeT, Item5>) { if(__union_internal_tag == _TAG__Item5) return _Item5; }
			else if constexpr (std::is_same_v<__SomeT, Item6>) { if(__union_internal_tag == _TAG__Item6) return _Item6; }
			else if constexpr (std::is_same_v<__SomeT, Item7>) { if(__union_internal_tag == _TAG__Item7) return _Item7; }
			else if constexpr (std::is_same_v<__SomeT, Item8>) { if(__union_internal_tag == _TAG__Item8) return _Item8; }
			else if constexpr (std::is_same_v<__SomeT, Item9>) { if(__union_internal_tag == _TAG__Item9) return _Item9; }
			else if constexpr (std::is_same_v<__SomeT, Item10>) { if(__union_internal_tag == _TAG__Item10) return _Item10; }
			else static_assert(false, "Cannot to cast union type Union10 to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Item1>) return __union_internal_tag == _TAG__Item1 && _Item1 == other;
			else if constexpr (std::is_same_v<__SomeT, Item2>) return __union_internal_tag == _TAG__Item2 && _Item2 == other;
			else if constexpr (std::is_same_v<__SomeT, Item3>) return __union_internal_tag == _TAG__Item3 && _Item3 == other;
			else if constexpr (std::is_same_v<__SomeT, Item4>) return __union_internal_tag == _TAG__Item4 && _Item4 == other;
			else if constexpr (std::is_same_v<__SomeT, Item5>) return __union_internal_tag == _TAG__Item5 && _Item5 == other;
			else if constexpr (std::is_same_v<__SomeT, Item6>) return __union_internal_tag == _TAG__Item6 && _Item6 == other;
			else if constexpr (std::is_same_v<__SomeT, Item7>) return __union_internal_tag == _TAG__Item7 && _Item7 == other;
			else if constexpr (std::is_same_v<__SomeT, Item8>) return __union_internal_tag == _TAG__Item8 && _Item8 == other;
			else if constexpr (std::is_same_v<__SomeT, Item9>) return __union_internal_tag == _TAG__Item9 && _Item9 == other;
			else if constexpr (std::is_same_v<__SomeT, Item10>) return __union_internal_tag == _TAG__Item10 && _Item10 == other;
			return false;
		}
		
	};
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2> class $Class_Union2 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union2<T1, T2>; using $self = $underlying;
		$self __value;
		$Class_Union2(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3> class $Class_Union3 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union3<T1, T2, T3>; using $self = $underlying;
		$self __value;
		$Class_Union3(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4> class $Class_Union4 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union4<T1, T2, T3, T4>; using $self = $underlying;
		$self __value;
		$Class_Union4(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5> class $Class_Union5 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union5<T1, T2, T3, T4, T5>; using $self = $underlying;
		$self __value;
		$Class_Union5(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> class $Class_Union6 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union6<T1, T2, T3, T4, T5, T6>; using $self = $underlying;
		$self __value;
		$Class_Union6(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> class $Class_Union7 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union7<T1, T2, T3, T4, T5, T6, T7>; using $self = $underlying;
		$self __value;
		$Class_Union7(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> class $Class_Union8 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union8<T1, T2, T3, T4, T5, T6, T7, T8>; using $self = $underlying;
		$self __value;
		$Class_Union8(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> class $Class_Union9 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union9<T1, T2, T3, T4, T5, T6, T7, T8, T9>; using $self = $underlying;
		$self __value;
		$Class_Union9(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	

	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> class $Class_Union10 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		public: using $underlying = Union10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>; using $self = $underlying;
		$self __value;
		$Class_Union10(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	
} namespace $extensions {
template<class __TT> struct $static_StaticStr;
template<class __TT> struct $static_getStaticStr;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	

}