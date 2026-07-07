#pragma once
#include <iomanip>
#include <iostream>

#include "BuiltinInt128.h"
#include "Floating.h"
#include "Str.h"

inline void print(Builtin::i8 v) { std::cout << int(v) << "\n"; }

inline void print(Builtin::i16 v) { std::cout << int(v) << "\n"; }

inline void print(Builtin::i32 v) { std::cout << int(v) << "\n"; }

inline void print(Builtin::i64 v) { std::cout << int64_t(v) << "\n"; }

inline void print(Builtin::i128 v) { std::cout << Builtin::DebugPrintInt128(v) << "\n"; }

inline void print(Builtin::u8 v) { std::cout << unsigned(v) << "\n"; }

inline void print(Builtin::u16 v) { std::cout << unsigned(v) << "\n"; }

inline void print(Builtin::u32 v) { std::cout << unsigned(v) << "\n"; }

inline void print(Builtin::u64 v) { std::cout << uint64_t(v) << "\n"; }

inline void print(Builtin::u128 v) { std::cout << Builtin::DebugPrintUInt128(v) << "\n"; }

inline void print(Builtin::f16 v) { std::cout << std::setprecision(30) << float(v) << "\n"; }
inline void print(Builtin::f32 v) { std::cout << std::setprecision(30) << float(v) << "\n"; }

inline void print(Builtin::f64 v) { std::cout << std::setprecision(30) << double(v) << "\n"; }

inline void print(Builtin::f128 v) { std::cout << Builtin::DebugPrintFloat128(v) << "\n"; }

inline void print(Builtin::fext v) { std::cout << std::setprecision(30) << long double(v) << "\n"; }

inline void print(Builtin::char32 ch) {
	std::string out;
	uint32_t codepoint = Builtin::u32(ch);

	if (codepoint <= 0x7F) {
		out.push_back(static_cast<char>(codepoint));
	} else if (codepoint <= 0x7FF) {
		out.push_back(static_cast<char>(0xC0 | ((codepoint >> 6) & 0x1F)));
		out.push_back(static_cast<char>(0x80 | (codepoint & 0x3F)));
	} else if (codepoint <= 0xFFFF) {
		out.push_back(static_cast<char>(0x0E0 | ((codepoint >> 12) & 0x0F)));
		out.push_back(static_cast<char>(0x80 | ((codepoint >> 6) & 0x3F)));
		out.push_back(static_cast<char>(0x80 | (codepoint & 0x3F)));
	} else if (codepoint <= 0x10FFFF) {
		out.push_back(static_cast<char>(0xF0 | ((codepoint >> 18) & 0x07)));
		out.push_back(static_cast<char>(0x80 | ((codepoint >> 12) & 0x3F)));
		out.push_back(static_cast<char>(0x80 | ((codepoint >> 6) & 0x3F)));
		out.push_back(static_cast<char>(0x80 | (codepoint & 0x3F)));
	}
	std::cout << out << "\n";
}

inline void print(Builtin::Str v) {
	for (auto c = v.raw_data(); c != v.raw_data() + (int) v.length(); c++) {
		std::cout << char(*c);
	}
	std::cout << "\n";
}

inline void print(const std::string& v) { std::cout << v << "\n"; }

inline void printDecimal(Builtin::u128 mantissa, bool isNegative, Builtin::u32 sc) {
	unsigned scale = sc;
	if (isNegative) {
		std::cout << "-";
	}
	auto str = Builtin::DebugPrintUInt128(mantissa);
	if (scale >= str.length()) {
		str.insert(0, scale - str.length() + 1, '0');
	}
	if (scale > 0) {
		str.insert(str.length() - scale, 1, '.');
	}
	std::cout << str << "\n";
}