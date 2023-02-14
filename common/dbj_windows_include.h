#pragma once
#ifndef DBJ_WINDOWS_INCLUDE_INC_
#define DBJ_WINDOWS_INCLUDE_INC_
/* 
(c) 2019-2020 by dbj.org   -- LICENSE DBJ -- https://dbj.org/license_dbj/ 
*/
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif

#define NOMINMAX

#undef  min
#define min(x, y) ((x) < (y) ? (x) : (y))

#undef  max
#define max(x, y) ((x) > (y) ? (x) : (y))

#define STRICT 1
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <crtdbg.h>

// 2022DEC18    dbj@dbj.org added   non destructive assert
#ifdef _DEBUG
#define dbj_assert(x_) _ASSERTE(x_)
#else
#define dbj_assert(x_) (__typeof(x_)) (x_)
#endif

#endif // DBJ_WINDOWS_INCLUDE_INC_
