#ifndef SUM_H
#define SUM_H

#include "../limits.h"
#include <stddef.h>

// ------------- Signed --------------------

static inline char check_sum_char(char a, char b) 
{
    if ((b > 0) && (a > CHAR_MAX - b)) return -1;
    if ((b < 0) && (a < CHAR_MIN - b)) return -1;
    return a + b;
}

static inline short check_sum_shrt(short a, short b) 
{
    if ((b > 0) && (a > SHRT_MAX - b)) return -1;
    if ((b < 0) && (a < SHRT_MIN - b)) return -1;
    return a + b;
}

static inline int check_sum_int(int a, int b) 
{
    if ((b > 0) && (a > INT_MAX - b)) return -1;
    if ((b < 0) && (a < INT_MIN - b)) return -1;
    return a + b;
}

static inline long check_sum_long(long a, long b) 
{
    if ((b > 0) && (a > LONG_MAX - b)) return -1;
    if ((b < 0) && (a < LONG_MIN - b)) return -1;
    return a + b;
}

static inline long long check_sum_llong(long long a, long long b) 
{
    if ((b > 0) && (a > LLONG_MAX - b)) return -1;
    if ((b < 0) && (a < LLONG_MIN - b)) return -1;
    return a + b;
}

//------------------------------------------
// ------------- Unsigned ------------------

static inline unsigned char check_sum_uchar(unsigned char a, unsigned char b) 
{
    if (a > UCHAR_MAX - b) return -1;
    return a + b;
}

static inline unsigned short check_sum_ushrt(unsigned short a, unsigned short b) 
{
    if (a > USHRT_MAX - b) return -1;
    return a + b;
}

static inline unsigned int check_sum_uint(unsigned int a, unsigned int b) 
{
    if (a > UINT_MAX - b) return -1;
    return a + b;
}

static inline unsigned long check_sum_ulong(unsigned long a, unsigned long b) 
{
    if (a > ULONG_MAX - b) return -1;
    return a + b;
}

static inline unsigned long long check_sum_ullong(unsigned long long a, unsigned long long b) 
{
    if (a > ULLONG_MAX - b) return -1;
    return a + b;
}

// -----------------------------------------

#define check_sum(x, y) _Generic((x), \
    char: check_sum_char, \
    short: check_sum_shrt, \
    int: check_sum_int, \
    long: check_sum_long, \
    long long: check_sum_llong, \
    unsigned char: check_sum_uchar, \
    unsigned short: check_sum_ushrt, \
    unsigned int: check_sum_uint, \
    unsigned long: check_sum_ulong, \
    unsigned long long: check_sum_ullong \
)(x, y)

#endif