#pragma once
#if defined _WIN32 || defined __CYGWIN__
#ifdef TESTDLL_EXPORTS
#define TESTDLL_API __declspec(dllexport)
#else
#define TESTDLL_API __declspec(dllimport)
#endif
#define TESTDLL_HIDDEN 
#else
#define TESTDLL_API __attribute__((visibility("default")))
#define TESTDLL_HIDDEN __attribute__((visibility("hidden")))
#endif
