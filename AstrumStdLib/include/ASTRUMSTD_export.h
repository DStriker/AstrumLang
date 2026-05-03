#pragma once
#if defined _WIN32 || defined __CYGWIN__
#ifdef ASTRUMSTD_EXPORTS
#define ASTRUMSTD_API __declspec(dllexport)
#else
#define ASTRUMSTD_API __declspec(dllimport)
#endif
#define ASTRUMSTD_HIDDEN 
#else
#define ASTRUMSTD_API __attribute__((visibility("default")))
#define ASTRUMSTD_HIDDEN __attribute__((visibility("hidden")))
#endif
