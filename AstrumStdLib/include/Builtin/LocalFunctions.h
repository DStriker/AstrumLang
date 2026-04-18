#pragma once
#include <functional>

namespace CppAdvance {
	template <class>
	class LocalFunction;

	template <class R, class... Args>
	class LocalFunction<R(Args...)> {
		std::function<R(Args...)> func;

	   public:
		LocalFunction() = default;

		template <class F>
		LocalFunction(F&& f) : func(std::forward<F>(f)) {}

		template <class F>
		LocalFunction& operator=(F&& f) {
			func = std::forward<F>(f);
			return *this;
		}

		R operator()(Args... args) const { return func(std::forward<Args>(args)...); }
	};
}  // namespace CppAdvance