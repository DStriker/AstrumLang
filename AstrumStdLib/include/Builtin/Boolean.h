#pragma once
#include "CheckedArithmetic.h"

namespace Builtin {
	template <class T>
	class __Class_Basic;

	struct Boolean : public Struct {
		using __self       = Boolean;
		using __class      = __Class_Basic<Boolean>;
		using __underlying = bool;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr Boolean() noexcept = default;
		constexpr Boolean(bool value) noexcept : _value(value) {}

		constexpr Boolean& operator=(bool value) noexcept {
			_value = value;
			return *this;
		}

		constexpr operator bool() const noexcept { return _value; }

		constexpr Boolean operator!() const noexcept { return !_value; }

		constexpr Boolean operator~() const noexcept { return !_value; }
		constexpr Boolean operator&(Boolean other) const noexcept {
			return (_value & other._value);
		}
		constexpr Boolean operator|(Boolean other) const noexcept {
			return (_value | other._value);
		}
		constexpr Boolean operator^(Boolean other) const noexcept {
			return (_value ^ other._value);
		}
		constexpr Boolean& operator&=(Boolean other) noexcept {
			_value &= other._value;
			return *this;
		}
		constexpr Boolean& operator|=(Boolean other) noexcept {
			_value |= other._value;
			return *this;
		}
		constexpr Boolean& operator^=(Boolean other) noexcept {
			_value ^= other._value;
			return *this;
		}

		constexpr Boolean operator==(Boolean other) const noexcept {
			return (_value == other._value);
		}

		constexpr Boolean operator!=(Boolean other) const noexcept {
			return (_value != other._value);
		}

		constexpr int operator<=>(Boolean other) const noexcept {
			if (_value) {
				if (!other)
					return 1;
			} else {
				if (other)
					return -1;
			}
			return 0;
		}

	   private:
		bool _value = false;
	};
}  // namespace Builtin