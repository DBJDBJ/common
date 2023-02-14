#pragma once

#ifndef _MSC_VER
#error to use SEH muse use microsoft cl.exe compiler
#endif
// dbj's universal SEH filter logger
/*
make sure windows are included before this
*/
#include "dbj_windows_include.h"

#ifndef dbjlowlog
#define dbjlowlog(...) fprintf(stderr, __VA_ARGS__)
#endif
/*

int main()
{
    __try {
        // SEH raised
    }
    __except(dbj_filter_seh(GetExceptionCode(), GetExceptionInformation())) {
        dbjlowlog("SEH caught");
    }
*/
int dbj_filter_seh(int code, PEXCEPTION_POINTERS ex)
{
    dbjlowlog("SEH Filtering, code: %d ", code);
    return EXCEPTION_EXECUTE_HANDLER;
}
