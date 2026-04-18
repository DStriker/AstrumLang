#pragma once

#if defined(_MSC_VER) || (defined(WIN32) && defined(__clang__))
#ifdef LIBASTRUMLANG_DLL_BUILD
#define ASTRUMLANG_API __declspec(dllexport)
#elif LIBASTRUMLANG_STATIC_BUILD
#define ASTRUMLANG_API 
#else
#define ASTRUMLANG_API __declspec(dllimport)
#endif
#else
#define __attribute__((__visibility__("default")))
#endif  // WIN32