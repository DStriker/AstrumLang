#pragma once
#include <iostream>
#include <iomanip>

#include "BuiltinInt128.h"
#include "Floating.h"
#include "Str.h"

inline void print(Builtin::i8 v) { std::cout << int(v) << std::endl; }

inline void print(Builtin::i16 v) { std::cout << int(v) << std::endl; }

inline void print(Builtin::i32 v) { std::cout << int(v) << std::endl; }

inline void print(Builtin::i64 v) { std::cout << int64_t(v) << std::endl; }

inline void print(Builtin::i128 v) { std::cout << Builtin::DebugPrintInt128(v) << std::endl; }

inline void print(Builtin::u8 v) { std::cout << unsigned(v) << std::endl; }

inline void print(Builtin::u16 v) { std::cout << unsigned(v) << std::endl; }

inline void print(Builtin::u32 v) { std::cout << unsigned(v) << std::endl; }

inline void print(Builtin::u64 v) { std::cout << uint64_t(v) << std::endl; }

inline void print(Builtin::u128 v) { std::cout << Builtin::DebugPrintUInt128(v) << std::endl; }

inline void print(Builtin::f32 v) { std::cout << std::setprecision(30) << float(v) << std::endl; }

inline void print(Builtin::f64 v) { std::cout << std::setprecision(30) << double(v) << std::endl; }

inline void print(Builtin::fext v) {
	std::cout << std::setprecision(30) << long double(v) << std::endl;
}

inline void print(Builtin::char8 v) { std::cout << char(v) << std::endl; }

inline void print(Builtin::char16 v) { std::cout << char(v) << std::endl; }

inline void print(Builtin::Str v) {
	for (auto c = v.raw_data(); c != v.raw_data() + (int) v.length(); c++) {
		std::cout << char(*c);
	}
	std::cout << std::endl;
}

inline void print(const std::string& v) { std::cout << v << std::endl; }