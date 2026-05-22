#pragma once
#include <stdexcept>
#include <type_traits>

#include "CompilerUtils.h"
#ifndef NDEBUG
#include <iostream>
#endif  // NDEBUG

#ifdef MSVC
#pragma warning(disable : 26455)
#endif

namespace Builtin {

	struct IntegerOverflowException : public std::runtime_error {
		IntegerOverflowException() : std::runtime_error("Integer overflow") {}
	};

	struct DivisionByZeroException : public std::runtime_error {
		DivisionByZeroException() : std::runtime_error("Division by zero") {}
	};

	struct SafetyException : public std::runtime_error {
		SafetyException() : std::runtime_error("Context safety violation") {}
	};

	struct InvalidArgumentException : public std::runtime_error {
		InvalidArgumentException() : std::runtime_error("Invalid operation") {}
	};

	struct InvalidOperationException : public std::runtime_error {
		InvalidOperationException() : std::runtime_error("Invalid operation") {}
	};

	template <class T>
	inline void Throw(const T& e) requires(std::is_base_of_v<std::exception, T>) {
#ifndef NDEBUG
		// std::cout << typeid(e).name() << "\n";
#endif  // NDEBUG
		throw e;
	}

}  // namespace Builtin

#ifdef MSVC
#pragma warning(default : 26455)
#endif