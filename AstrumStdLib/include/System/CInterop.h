#pragma once
#include <cstdint>

namespace System {
	using CChar             = char;
	using CSignedChar       = signed char;
	using CUnsignedChar     = unsigned char;
	using CShort            = short;
	using CUnsignedShort    = unsigned short;
	using CInt              = int;
	using CUnsignedInt      = unsigned int;
	using CLong             = long;
	using CUnsignedLong     = unsigned long;
	using CLongLong         = long long;
	using CUnsignedLongLong = unsigned long long;
	using CInt8             = int8_t;
	using CUInt8            = uint8_t;
	using CInt16            = int16_t;
	using CUInt16           = uint16_t;
	using CInt32            = int32_t;
	using CUInt32           = uint32_t;
	using CInt64            = int64_t;
	using CUInt64           = uint64_t;
	using CFloat            = float;
	using CDouble           = double;
	using CLongDouble       = long double;
	using CBool             = bool;
	using CSize             = size_t;
	using CPtrDiff          = ptrdiff_t;
	using CIntPtr           = intptr_t;
	using CUIntPtr          = uintptr_t;
	using CVoid             = void;
	using CWChar            = wchar_t;
	using CChar8            = char8_t;
	using CChar16           = char16_t;
	using CChar32           = char32_t;
	namespace __Unsafe {
		using CString  = const char*;
		using CWString = const wchar_t*;
		template <class T>
		using CPointer = T*;
		template <class T>
		using CConstPointer = const T*;
	}  // namespace __Unsafe
}  // namespace System