#include "libcore.h"

#include <stdio.h>

int main()
{
    printf("\nCHAR BIT: %d\n", CHAR_BIT);
    printf("SCHAR MAX: %d\n", SCHAR_MAX);
    printf("SCHAR MIN: %d\n", SCHAR_MIN);
    printf("UCHAR MAX: %u\n", UCHAR_MAX);
    printf("UCHAR MIN: %u\n", UCHAR_MIN);
    printf("CHAR MAX: %d\n", CHAR_MAX);
    printf("CHAR MIN: %d\n\n", CHAR_MIN);

    printf("SHORT MAX: %d\n", SHRT_MAX);
    printf("SHORT MIN: %d\n", SHRT_MIN);
    printf("USHORT MAX: %u\n", USHRT_MAX);
    printf("USHORT MIN: %u\n\n", USHRT_MIN);

    printf("INT MAX: %d\n", INT_MAX);
    printf("INT MIN: %d\n", INT_MIN);
    printf("UINT MAX: %u\n", UINT_MAX);
    printf("UNIT MIN: %u\n\n", UINT_MIN);

    printf("LONG MAX: %ld\n", LONG_MAX);
    printf("LONG MIN: %ld\n", LONG_MIN);
    printf("ULONG MAX: %lu\n", ULONG_MAX);
    printf("ULONG MIN: %lu\n\n", ULONG_MIN);

    printf("LLONG MAX: %lld\n", LLONG_MAX);
    printf("LLONG MIN: %lld\n", LLONG_MIN);
    printf("ULLONG MAX: %llu\n", ULLONG_MAX);
    printf("ULLONG MIN: %llu\n\n", ULLONG_MIN);

    printf("FLT MAX: %e\n", FLT_MAX);
    printf("FLT MIN (Pos): %e\n", FLT_MIN);
    printf("FLT NEG MIN: %e\n\n", FLT_NEG_MIN);

    printf("DBL MAX: %.16e\n", DBL_MAX);
    printf("DBL MIN (Pos): %.16e\n", DBL_MIN);
    printf("DBL NEG MIN: %.16e\n\n", DBL_NEG_MIN);

    // Should return -1
    printf("Check Sum Result %d\n", check_sum(10, INT_MAX));

    return 0;
}
