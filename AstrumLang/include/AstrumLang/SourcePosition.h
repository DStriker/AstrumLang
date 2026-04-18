#pragma once
#include <format>

namespace AstrumLang
{
	struct SourcePosition {
		size_t line;
		size_t column;

		constexpr auto operator<=>(const SourcePosition& that) const noexcept {
			return line == that.line ? column <=> that.column : line <=> that.line;
		}

		std::string toString() const { return std::format("{}:{}", line, column); }
	};
}