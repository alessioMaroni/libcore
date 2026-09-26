#ifndef LIMITS_H
#define LIMITS_H

#define CHAR_BIT    8
#define SCHAR_MAX   ((signed char)((unsigned char)~0 >> 1))
#define SCHAR_MIN   ~SCHAR_MAX
#define UCHAR_MAX   ((unsigned char)~0U)
#define UCHAR_MIN   ((unsigned char)0U)
#define CHAR_MAX    SCHAR_MAX
#define CHAR_MIN    SCHAR_MIN

#define SHRT_MAX    ((short)((unsigned short)~0 >> 1))
#define SHRT_MIN    ~SHRT_MAX
#define USHRT_MAX   ((unsigned short)~0U)
#define USHRT_MIN   ((unsigned short)0U)

#define INT_MAX     ((int)(~0U >> 1))
#define INT_MIN     ~INT_MAX
#define UINT_MAX    ~0U
#define UINT_MIN    0U

#define LONG_MAX    ((long)(~0UL >> 1))
#define LONG_MIN    (-LONG_MAX - 1)
#define ULONG_MAX   (~0UL)
#define ULONG_MIN   0UL

#define LLONG_MAX   ((long long)(~0ULL >> 1))
#define LLONG_MIN   (-LLONG_MAX - 1)
#define ULLONG_MAX  (~0ULL)
#define ULLONG_MIN  0ULL

#define FLT_MAX     3.40282347e+38F
#define FLT_MIN     1.17549435e-38F
#define FLT_NEG_MIN (-3.40282347e+38F)

#define DBL_MAX     1.7976931348623157e+308
#define DBL_MIN     2.2250738585072014e-308
#define DBL_NEG_MIN (-1.7976931348623157e+308)

#endif
