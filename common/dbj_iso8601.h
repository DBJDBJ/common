/*
   (c) dbj.org 2021 -2023
*/
#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <assert.h> 
#include <stdint.h>  // portable: uint64_t   MSVC: __int64
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*-------------------------------------------------------------------
https://en.cppreference.com/w/c/chrono/timespec
*/
__inline char* const posix_timestamp_(void) {
  struct timespec ts;
  int ret = timespec_get(&ts, TIME_UTC);
  assert(ret);
  (void)ret;
  static char buff[100] = {0};
  strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
  // now add the nanoseconds part
  ret = sprintf_s(buff, 100, "%s.%09ld UTC", buff, ts.tv_nsec);
  assert(ret);
  (void)ret;
  return buff;
  /*

  printf("Current time: %s.%09ld UTC\n", buff, ts.tv_nsec);
  printf("Raw timespec.time_t: %jd\n", (intmax_t)ts.tv_sec);
  printf("Raw timespec.tv_nsec: %09ld\n", ts.tv_nsec);

  Possible output:

  Current time: 11/24/21 03:10:50.408191283 UTC
  Raw timespec.time_t: 1637723450
  Raw timespec.tv_nsec: 408191283
  */
}
/*-------------------------------------------------------------------*/
// MSVC defines this in winsock2.h!?
typedef struct timeval {
  long tv_sec;
  long tv_usec;
} timeval;

__inline int gettimeofday(struct timeval* tp, struct timezone* tzp) {
  // Note: some broken versions only have 8 trailing zero's, the correct epoch
  // has 9 trailing zero's This magic number is the number of 100 nanosecond
  // intervals since January 1, 1601 (UTC) until 00:00:00 January 1, 1970
  static const uint64_t EPOCH = ((uint64_t)116444736000000000ULL);

  SYSTEMTIME system_time;
  FILETIME file_time;
  uint64_t time;

  GetSystemTime(&system_time);
  SystemTimeToFileTime(&system_time, &file_time);
  time = ((uint64_t)file_time.dwLowDateTime);
  time += ((uint64_t)file_time.dwHighDateTime) << 32;

  tp->tv_sec = (long)((time - EPOCH) / 10000000L);
  tp->tv_usec = (long)(system_time.wMilliseconds * 1000);
  return 0;
}
#if ((defined _WIN32))
#define gettimeofday win_gettimeofday
#endif

// ISO8601 timestamp
// inspired by: https://stackoverflow.com/a/42436648/10870835
// WARNING! reuses internal static buffer
__inline char* const iso8601(void) {
  struct tm tmNow = {0};

  time_t now = time(NULL);  // Get the current time
  _localtime64_s(&tmNow, &now);

  static char bufferTime[26] = {0};
  char bufferTimezoneOffset[6] = {0};
  size_t tsizTime =
      strftime(bufferTime, 26, "%Y-%m-%dT%H:%M:%S",
               &tmNow);  // The current time formatted "2017-02-22T10:00:00"
  size_t tsizOffset = strftime(bufferTimezoneOffset, 6, "%z",
                               &tmNow);  // The timezone offset -0500
  strncpy_s(&bufferTime[tsizTime], 26, bufferTimezoneOffset,
            3);                    // Adds the hour part of the timezone offset
  bufferTime[tsizTime + 3] = ':';  // insert ':'
  strncpy_s(&bufferTime[tsizTime + 4], 26, &bufferTimezoneOffset[3],
            3);         // Adds the minutes part of the timezone offset
  return (bufferTime);  // example: "2022-02-22T10:00:00-05:00"
}

#ifdef dbj_test_iso_8601
static inline void dbj_test_iso_8601 (  void ) {
  for (int k = 0; k < 0xF; ++k) {
    printf("\nISO8601: %s", iso8601());
    //
    printf("\tPOSIX  : %s\n", posix_timestamp_());
    //
    Sleep(1000);
  }
  return 42;
}
#endif // dbj_test_iso_8601
