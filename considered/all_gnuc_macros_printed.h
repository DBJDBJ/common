#pragma once
// cpp -dM /dev/null > maacros.h

#include <stdio.h>
#include <stdlib.h>

#define FX(F, X) printf("\n%6d %s : " F, __LINE__, (#X), (X))

FX("%9d", __DBL_MIN_EXP__);
FX("%9d", __UINT_LEAST16_MAX__);
FX("%9d", __ATOMIC_ACQUIRE);
FX("%9d", __FLT128_MAX_10_EXP__);
FX("%9d", __FLT_MIN__);
FX("%9d", __GCC_IEC_559_COMPLEX);
FX("%9d", __UINT_LEAST8_TYPE__);
FX("%9d", __SIZEOF_FLOAT80__);
// FX("%9d",  __INTMAX_C(c) ) ;
FX("%9d", __CHAR_BIT__);
FX("%9d", __UINT8_MAX__);
FX("%9d", __SCHAR_WIDTH__);
FX("%9d", __WINT_MAX__);
FX("%9d", __FLT32_MIN_EXP__);
FX("%9d", __ORDER_LITTLE_ENDIAN__);
FX("%9d", __SIZE_MAX__);
FX("%9d", __WCHAR_MAX__);
FX("%9d", __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1);
FX("%9d", __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2);
FX("%9d", __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4);
FX("%9d", __DBL_DENORM_MIN__);
FX("%9d", __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8);
FX("%9d", __GCC_ATOMIC_CHAR_LOCK_FREE);
FX("%9d", __GCC_IEC_559);
FX("%9d", __FLT32X_DECIMAL_DIG__);
FX("%9d", __FLT_EVAL_METHOD__);
FX("%9d", __FLT64_DECIMAL_DIG__);
FX("%9d", __GCC_ATOMIC_CHAR32_T_LOCK_FREE);
FX("%9d", __UINT_FAST64_MAX__);
FX("%9d", __SIG_ATOMIC_TYPE__);
FX("%9d", __DBL_MIN_10_EXP__);
FX("%9d", __FINITE_MATH_ONLY__);
FX("%9d", __FLT32X_MAX_EXP__);
FX("%9d", __FLT32_HAS_DENORM__);
FX("%9d", __UINT_FAST8_MAX__);
FX("%9d", __FLT32_MAX_10_EXP__);
FX("%9d", __DEC64_MAX_EXP__);
// FX("%9d", __INT8_C(c));
FX("%9d", __INT_LEAST8_WIDTH__);
FX("%9d", __UINT_LEAST64_MAX__);
FX("%9d", __SHRT_MAX__);
FX("%9d", __LDBL_MAX__);
FX("%9d", __FLT64X_MAX_10_EXP__);
FX("%9d", __FLT64X_HAS_QUIET_NAN__);
FX("%9d", __UINT_LEAST8_MAX__);
FX("%9d", __GCC_ATOMIC_BOOL_LOCK_FREE);
FX("%9d", __FLT128_DENORM_MIN__);
FX("%9d", __UINTMAX_TYPE__);
FX("%9d", __linux);
FX("%9d", __DEC32_EPSILON__);
FX("%9d", __FLT_EVAL_METHOD_TS_18661_3__);
FX("%9d", __unix);
FX("%9d", __UINT32_MAX__);
FX("%9d", __FLT128_MIN_EXP__);
FX("%9d", __WINT_MIN__);
FX("%9d", __FLT128_MIN_10_EXP__);
FX("%9d", __INT_LEAST16_WIDTH__);
FX("%9d", __SCHAR_MAX__);
FX("%9d", __FLT128_MANT_DIG__);
FX("%9d", __WCHAR_MIN__);
// FX("%9d",  __INT64_C(c) c##) ;
FX("%9d", __GCC_ATOMIC_POINTER_LOCK_FREE);
FX("%9d", __FLT32X_MANT_DIG__);
// FX("%9d",  ) ;
FX("%9d", __FLT64X_EPSILON__);
FX("%9d", __STDC_HOSTED__);
FX("%9d", __DEC64_MIN_EXP__);
FX("%9d", __DBL_DIG__);
FX("%9d", __FLT32_DIG__);
FX("%9d", __FLT_EPSILON__);
FX("%9d", __SHRT_WIDTH__);
FX("%9d", __FLT32_MAX_EXP__);
FX("%9d", __LDBL_MIN__);
FX("%9d", __STDC_UTF_16__);
FX("%9d", __DEC32_MAX__);
FX("%9d", __FLT64X_DENORM_MIN__);
FX("%9d", __FLT32X_HAS_INFINITY__);
FX("%9d", __INT32_MAX__);
FX("%9d", __unix__);
FX("%9d", __INT_WIDTH__);
FX("%9d", __SIZEOF__);
FX("%9d", __STDC_IEC_559__);
FX("%9d", __STDC_ISO_10646__);
// FX("%9d", __UINT16_C(c));
FX("%9d", __DECIMAL_DIG__);
FX("%9d", __STDC_IEC_559_COMPLEX__);
FX("%9d", __FLT64_EPSILON__);
FX("%9d", __gnu_linux__);
FX("%9d", __FLT64X_MIN_10_EXP__);
FX("%9d", __LDBL_HAS_QUIET_NAN__);
FX("%9d", __FLT64_MANT_DIG__);
FX("%9d", __FLT64X_MANT_DIG__);
FX("%9d", __GNUC__);
FX("%9d", __pie__);
FX("%9d", __MMX__);
FX("%9d", __FLT_HAS_DENORM__);
FX("%9d", __SIZEOF_DOUBLE__);
FX("%9d", __BIGGEST_ALIGNMENT__);
FX("%9d", __FLT64_MAX_10_EXP__);
FX("%9d", __DBL_MAX__);
FX("%9d", __INT_FAST32_MAX__);
FX("%9d", __DBL_HAS_INFINITY__);
FX("%9d", __SIZEOF_FLOAT__);
FX("%9d", __HAVE_SPECULATION_SAFE_VALUE);
FX("%9d", __DEC32_MIN_EXP__);
FX("%9d", __INTPTR_WIDTH__);
FX("%9d", __FLT64X_HAS_INFINITY__);
FX("%9d", __UINT_LEAST32_MAX__);
FX("%9d", __FLT32X_HAS_DENORM__);
FX("%9d", __INT_FAST16_TYPE__);
FX("%9d", __MMX_WITH_SSE__);
FX("%9d", __LDBL_HAS_DENORM__);
FX("%9d", __FLT128_HAS_INFINITY__);
FX("%9d", __DEC32_MIN__);
FX("%9d", __DBL_MAX_EXP__);
FX("%9d", __WCHAR_WIDTH__);
FX("%9d", __FLT32_MAX__);
FX("%9d", __DEC128_EPSILON__);
FX("%9d", __SSE2_MATH__);
FX("%9d", __ATOMIC_HLE_RELEASE);
FX("%9d", __PTRDIFF_MAX__);
FX("%9d", __amd64);
FX("%9d", __ATOMIC_HLE_ACQUIRE);
FX("%9d", __MAX__);
FX("%9d", __SIZEOF_SIZE_T__);
FX("%9d", __FLT64X_MIN_EXP__);
FX("%9d", __SIZEOF_WINT_T__);
FX("%9d", __WIDTH__);
FX("%9d", __GXX_ABI_VERSION);
FX("%9d",  __FLT_MIN_EXP__ (-)
FX("%9d",  __GCC_HAVE_DWARF2_CFI_ASM ) ;
FX("%9d",  __INT16_MAX__ ) ;
FX("%9d",  __x86_64 ) ;
FX("%9d",  __INT_FAST64_TYPE__ ) ;
FX("%9d",  __FLT64_DENORM_MIN__ ) ;
FX("%9d",  __DBL_MIN__ );
FX("%9d",  __FLT128_EPSILON__ ) ;
FX("%9d",  __FLT64X_NORM_MAX__ ) ;
FX("%9d",  __SIZEOF_POINTER__ ) ;
FX("%9d",  __LP64__ ) ;
FX("%9d",  __DBL_HAS_QUIET_NAN__ ) ;
FX("%9d",  __FLT32X_EPSILON__ ) ;
FX("%9d",  __DECIMAL_BID_FORMAT__ ) ;
FX("%9d",  __FLT64_MIN_EXP__ );
FX("%9d",  __FLT64_MIN_10_EXP__ );
FX("%9d",  __FLT64X_DECIMAL_DIG__ ) ;
FX("%9d",  __DEC128_MIN__ ) ;
FX("%9d",  __UINT16_MAX__ ) ;
FX("%9d",  __DBL_HAS_DENORM__ ) ;
FX("%9d",  __LDBL_HAS_INFINITY__ ) ;
FX("%9d",  __FLT32_MIN__ ) ;
FX("%9d",  __UINT8_TYPE__ ) ;
FX("%9d",  __FLT_DIG__ ) ;
FX("%9d",  __NO_INLINE__ ) ;
FX("%9d",  __DEC_EVAL_METHOD__ ) ;
FX("%9d",  __DEC128_MAX__ ) ;
FX("%9d",  __FLT_MANT_DIG__ ) ;
FX("%9d",  __LDBL_DECIMAL_DIG__ ) ;
FX("%s",  __VERSION__ );
// FX("%9d",  __UINT64_C(c) c##) ;
FX("%9d",  _STDC_PREDEF_H ) ;
FX("%9d",  __INT_LEAST32_MAX__ ) ;
FX("%9d",  __GCC_ATOMIC_INT_LOCK_FREE ) ;
FX("%9d",  __FLT128_MAX_EXP__ ) ;
FX("%9d",  __FLT32_MANT_DIG__ ) ;
FX("%9d",  __FLOAT_WORD_ORDER__ ) ;
FX("%9d",  __FLT128_HAS_DENORM__ ) ;
FX("%9d",  __FLT32_DECIMAL_DIG__ ) ;
FX("%9d",  __FLT128_DIG__ ) ;
// FX("%9d",  __INT32_C(c) ) ;
FX("%9d",  __DEC64_EPSILON__ ) ;
FX("%9d",  __ORDER_PDP_ENDIAN__ ) ;
FX("%9d",  __DEC128_MIN_EXP__ );
FX("%9d",  __INT_FAST32_TYPE__ ) ;
FX("%9d",  __UINT_LEAST16_TYPE__  ) ;
FX("%9d",  unix ) ;
FX("%9d",  __SIZE_TYPE__ ) ;
FX("%9d",  __UINT64_MAX__ ) ;
FX("%9d",  __FLT64X_DIG__ ) ;
FX("%9d",  __INT8_TYPE__  ) ;
FX("%9d",  __ELF__ ) ;
FX("%9d",  __GCC_ASM_FLAG_OUTPUTS__ ) ;
FX("%9d",  __UINT32_TYPE__ ) ;
FX("%9d",  __FLT_RADIX__ ) ;
FX("%9d",  __INT_LEAST16_TYPE__  ) ;
FX("%9d",  __LDBL_EPSILON__ ) ;
// FX("%9d",  __UINTMAX_C(c) c##) ;
FX("%9d",  __SSE_MATH__ ) ;
FX("%9d",  __k8 ) ;
FX("%9d",  __FLT32X_MIN__ ) ;
FX("%9d",  __SIG_ATOMIC_MAX__ ) ;
FX("%9d",  __GCC_ATOMIC_WCHAR_T_LOCK_FREE ) ;
FX("%9d",  __SIZEOF_PTRDIFF_T__ ) ;
FX("%9d",  __LDBL_DIG__ ) ;
FX("%9d",  __x86_64__ ) ;
FX("%9d",  __FLT32X_MIN_EXP__ );
FX("%9d",  __DEC32_SUBNORMAL_MIN__ ) ;
FX("%9d",  __INT_FAST16_MAX__ ) ;
FX("%9d",  __FLT64_DIG__ ) ;
FX("%9d",  __UINT_FAST32_MAX__ ) ;
FX("%9d",  __UINT_LEAST64_TYPE__ ) ;
FX("%9d",  __FLT_HAS_QUIET_NAN__ ) ;
FX("%9d",  __FLT_MAX_10_EXP__ ) ;
FX("%9d",  __MAX__ ) ;
FX("%9d",  __FLT64X_HAS_DENORM__ ) ;
FX("%9d",  __DEC128_SUBNORMAL_MIN__ ) ;
FX("%9d",  __FLT_HAS_INFINITY__ ) ;
FX("%9d",  __UINT_FAST16_TYPE__ ) ;
FX("%9d",  __DEC64_MAX__ ) ;
FX("%9d",  __INT_FAST32_WIDTH__ ) ;
FX("%9d",  __CHAR16_TYPE__  ) ;
FX("%9d",  __PRAGMA_REDEFINE_EXTNAME ) ;
FX("%9d",  __SIZE_WIDTH__ ) ;
FX("%9d",  __SEG_FS ) ;
FX("%9d",  __INT_LEAST16_MAX__ ) ;
FX("%9d",  __DEC64_MANT_DIG__ ) ;
FX("%9d",  __INT64_MAX__ ) ;
FX("%9d",  __SEG_GS ) ;
FX("%9d",  __FLT32_DENORM_MIN__ ) ;
FX("%9d",  __SIG_ATOMIC_WIDTH__ ) ;
FX("%9d",  __INT_LEAST64_TYPE__ ) ;
FX("%9d",  __INT16_TYPE__  ) ;
FX("%9d",  __INT_LEAST8_TYPE__  ) ;
FX("%9d",  __STDC_VERSION__ ) ;
FX("%9d",  __SIZEOF_INT__ ) ;
FX("%9d",  __DEC32_MAX_EXP__ ) ;
FX("%9d",  __INT_FAST8_MAX__ ) ;
FX("%9d",  __FLT128_MAX__) ;
FX("%9d",  __INTPTR_MAX__ ) ;
FX("%9d",  linux ) ;
FX("%9d",  __FLT64_HAS_QUIET_NAN__ ) ;
FX("%9d",  __FLT32_MIN_10_EXP__ (-)
FX("%9d",  __FLT32X_DIG__ ) ;
FX("%9d",  __PTRDIFF_WIDTH__ ) ;
FX("%9d",  __LDBL_MANT_DIG__ ) ;
FX("%9d",  __FLT64_HAS_INFINITY__ ) ;
FX("%9d",  __FLT64X_MAX__) ;
FX("%9d",  __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ -)
FX("%9d",  __code_model_small__ ) ;
FX("%9d",  __GCC_ATOMIC_LOCK_FREE ) ;
FX("%9d",  __DEC32_MANT_DIG__ ) ;
FX("%9d",  __k8__ ) ;
FX("%9d",  __INTPTR_TYPE__ ) ;
FX("%9d",  __UINT16_TYPE__  ) ;
FX("%9d",  __WCHAR_TYPE__ ) ;
FX("%9d",  __pic__ ) ;
FX("%9d",  __UINTPTR_MAX__ ) ;
FX("%9d",  __INT_FAST64_WIDTH__ ) ;
FX("%9d",  __INT_FAST64_MAX__ ) ;
FX("%9d",  __GCC_ATOMIC_TEST_AND_SET_TRUEVAL ) ;
FX("%9d",  __FLT_NORM_MAX__) ;
FX("%9d",  __FLT32_HAS_INFINITY__ ) ;
FX("%9d",  __FLT64X_MAX_EXP__ ) ;
FX("%9d",  __UINT_FAST64_TYPE__ ) ;
FX("%9d",  __INT_MAX__ ) ;
FX("%9d",  __linux__ ) ;
FX("%9d",  __INT64_TYPE__ ) ;
FX("%9d",  __FLT_MAX_EXP__ ) ;
FX("%9d",  __ORDER_BIG_ENDIAN__ ) ;
FX("%9d",  __DBL_MANT_DIG__ ) ;
FX("%9d",  __SIZEOF_FLOAT128__ ) ;
FX("%9d",  __INT_LEAST64_MAX__ ) ;
FX("%9d",  __GCC_ATOMIC_CHAR16_T_LOCK_FREE ) ;
FX("%9d",  __DEC64_MIN__) ;
FX("%9d",  __WINT_TYPE__ ) ;
FX("%9d",  __UINT_LEAST32_TYPE__ ) ;
FX("%9d",  __SIZEOF__ ) ;
FX("%9d",  __FLT32_NORM_MAX__) ;
FX("%9d",  __SSE__ ) ;
FX("%9d",  __LDBL_MIN_EXP__ );
FX("%9d",  __FLT64_MAX__) ;
FX("%9d",  __amd64__ ) ;
FX("%9d",  __WINT_WIDTH__ ) ;
FX("%9d",  __INT_LEAST8_MAX__ ) ;
FX("%9d",  __INT_LEAST64_WIDTH__ ) ;
FX("%9d",  __LDBL_MAX_EXP__ ) ;
FX("%9d",  __FLT32X_MAX_10_EXP__ ) ;
FX("%9d",  __SIZEOF_INT128__ ) ;
FX("%9d",  __LDBL_MAX_10_EXP__ ) ;
FX("%9d",  __ATOMIC_RELAXED ) ;
FX("%9d",  __DBL_EPSILON__ );
FX("%9d",  __FLT128_MIN__) ;
FX("%9d",  _LP64 ) ;
// FX("%9d",  __UINT8_C(c) ) ;
FX("%9d",  __FLT64_MAX_EXP__ ) ;
FX("%9d",  __INT_LEAST32_TYPE__ ) ;
FX("%9d",  __SIZEOF_WCHAR_T__ ) ;
FX("%9d",  __UINT64_TYPE__ ) ;
FX("%9d",  __GNUC_PATCHLEVEL__ ) ;
FX("%9d",  __FLT128_NORM_MAX__) ;
FX("%9d",  __FLT64_NORM_MAX__) ;
FX("%9d",  __FLT128_HAS_QUIET_NAN__ ) ;
FX("%9d",  __INTMAX_MAX__ ) ;
FX("%9d",  __INT_FAST8_TYPE__  ) ;
FX("%9d",  __FLT64X_MIN__) ;
FX("%9d",  __GNUC_STDC_INLINE__ ) ;
FX("%9d",  __FLT64_HAS_DENORM__ ) ;
FX("%9d",  __FLT32_EPSILON__) ;
FX("%9d",  __DBL_DECIMAL_DIG__ ) ;
FX("%9d",  __STDC_UTF_32__ ) ;
FX("%9d",  __INT_FAST8_WIDTH__ ) ;
FX("%9d",  __FXSR__ ) ;
FX("%9d",  __FLT32X_MAX__) ;
FX("%9d",  __DBL_NORM_MAX__ );
FX("%9d",  __BYTE_ORDER__ ) ;
FX("%9d",  __INTMAX_WIDTH__ ) ;
// FX("%9d",  __UINT32_C(c) c##) ;
FX("%9d",  __FLT_DENORM_MIN__) ;
FX("%9d",  __INT8_MAX__ ) ;
FX("%9d",  __WIDTH__ ) ;
FX("%9d",  __PIC__ ) ;
FX("%9d",  __UINT_FAST32_TYPE__ ) ;
FX("%9d",  __FLT32X_NORM_MAX__) ;
FX("%9d",  __CHAR32_TYPE__ ) ;
FX("%9d",  __FLT_MAX__) ;
FX("%9d",  __SSE2__ ) ;
FX("%9d",  __INT32_TYPE__ ) ;
FX("%9d",  __SIZEOF_DOUBLE__ ) ;
FX("%9d",  __FLT_MIN_10_EXP__ (-)
FX("%9d",  __FLT64_MIN__) ;
FX("%9d",  __INT_LEAST32_WIDTH__ ) ;
FX("%9d",  __INTMAX_TYPE__ ) ;
FX("%9d",  __DEC128_MAX_EXP__ ) ;
FX("%9d",  __FLT32X_HAS_QUIET_NAN__ ) ;
FX("%9d",  __ATOMIC_CONSUME ) ;
FX("%9d",  __GNUC_MINOR__ ) ;
FX("%9d",  __INT_FAST16_WIDTH__ ) ;
FX("%9d",  __UINTMAX_MAX__ ) ;
FX("%9d",  __PIE__ ) ;
FX("%9d",  __FLT32X_DENORM_MIN__) ;
FX("%9d",  __DBL_MAX_10_EXP__ ) ;
FX("%9d",  __LDBL_DENORM_MIN__) ;
// FX("%9d",  __INT16_C(c) ) ;
FX("%9d",  __STDC__ ) ;
FX("%9d",  __PTRDIFF_TYPE__ ) ;
FX("%9d",  __ATOMIC_SEQ_CST ) ;
FX("%9d",  __FLT32X_MIN_10_EXP__ );
FX("%9d",  __UINTPTR_TYPE__ ) ;
FX("%9d",  __DEC64_SUBNORMAL_MIN__) ;
FX("%9d",  __DEC128_MANT_DIG__ ) ;
FX("%9d",  __LDBL_MIN_10_EXP__ );
FX("%9d",  __SIZEOF__ ) ;
FX("%9d",  __FLT128_DECIMAL_DIG__ ) ;
FX("%9d",  __GCC_ATOMIC_LLOCK_FREE ) ;
FX("%9d",  __FLT32_HAS_QUIET_NAN__ ) ;
FX("%9d",  __FLT_DECIMAL_DIG__ ) ;
FX("%9d",  __UINT_FAST16_MAX__ ) ;
FX("%9d",  __LDBL_NORM_MAX__) ;
FX("%9d",  __GCC_ATOMIC__LOCK_FREE__ ) ;
FX("%9d",  __UINT_FAST8_TYPE__ ) ;
FX("%9d",  __ATOMIC_ACQ_REL__ ) ;
FX("%9d",  __ATOMIC_RELEASE__ ) ;
