#pragma once

namespace CppAdvance
{
	template<class F>
	struct Defer {
		F f;

		Defer(const F& f) : f(f) {}
		~Defer() { f(); }
	};
}