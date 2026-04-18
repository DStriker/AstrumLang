#pragma once
#include <iostream>

#include "Floating.h"
#include "Int128.h"
#include "Str.h"

inline void print(CppAdvance::i8 v) { std::cout << int(v) << std::endl; }

inline void print(CppAdvance::i16 v) { std::cout << int(v) << std::endl; }

inline void print(CppAdvance::i32 v) { std::cout << int(v) << std::endl; }

inline void print(CppAdvance::i64 v) { std::cout << int64_t(v) << std::endl; }

inline void print(CppAdvance::i128 v) { std::cout << v.toString() << std::endl; }

inline void print(CppAdvance::u8 v) { std::cout << unsigned(v) << std::endl; }

inline void print(CppAdvance::u16 v) { std::cout << unsigned(v) << std::endl; }

inline void print(CppAdvance::u32 v) { std::cout << unsigned(v) << std::endl; }

inline void print(CppAdvance::u64 v) { std::cout << uint64_t(v) << std::endl; }

inline void print(CppAdvance::u128 v) { std::cout << v.toString() << std::endl; }

inline void print(CppAdvance::f32 v) { std::cout << float(v) << std::endl; }

inline void print(CppAdvance::f64 v) { std::cout << double(v) << std::endl; }

inline void print(CppAdvance::fext v) { std::cout << long double(v) << std::endl; }

inline void print(CppAdvance::char8 v) { std::cout << char(v) << std::endl; }

inline void print(CppAdvance::char16 v) { std::cout << char(v) << std::endl; }

inline void print(CppAdvance::Str v) {
	for (auto c = v.raw_data(); c != v.raw_data() + (int) v.length(); c++) {
		std::cout << char(*c);
	}
	std::cout << std::endl;
}

inline void print(const std::string& v) { std::cout << v << std::endl; }