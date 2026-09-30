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

    // 1. CHAR
    char c1 = 10, c2 = 20;
    char c_max = CHAR_MAX, c_min = CHAR_MIN;
    printf("[char] OK (10 + 20): %d\n", check_sum(c1, c2));
    printf("[char] OVERFLOW (CHAR_MAX + 1) -> Atteso -1: %d\n", check_sum(c_max, (char)1));
    printf("[char] UNDERFLOW (CHAR_MIN + -1) -> Atteso -1: %d\n\n", check_sum(c_min, (char)-1));

    // 2. SHORT
    short s1 = 100, s2 = 200;
    short s_max = SHRT_MAX, s_min = SHRT_MIN;
    printf("[short] OK (100 + 200): %d\n", check_sum(s1, s2));
    printf("[short] OVERFLOW (SHRT_MAX + 1) -> Atteso -1: %d\n", check_sum(s_max, (short)1));
    printf("[short] UNDERFLOW (SHRT_MIN + -1) -> Atteso -1: %d\n\n", check_sum(s_min, (short)-1));

    // 3. INT
    int i1 = 1000, i2 = 2000;
    printf("[int] OK (1000 + 2000): %d\n", check_sum(i1, i2));
    printf("[int] OVERFLOW (INT_MAX + 1) -> Atteso -1: %d\n", check_sum(INT_MAX, 1));
    printf("[int] UNDERFLOW (INT_MIN + -1) -> Atteso -1: %d\n\n", check_sum(INT_MIN, -1));

    // 4. LONG
    long l1 = 10000L, l2 = 20000L;
    printf("[long] OK (10000 + 20000): %ld\n", check_sum(l1, l2));
    printf("[long] OVERFLOW (LONG_MAX + 1) -> Atteso -1: %ld\n", check_sum(LONG_MAX, 1L));
    printf("[long] UNDERFLOW (LONG_MIN + -1) -> Atteso -1: %ld\n\n", check_sum(LONG_MIN, -1L));

    // 5. LONG LONG
    long long ll1 = 100000LL, ll2 = 200000LL;
    printf("[long long] OK (100000 + 200000): %lld\n", check_sum(ll1, ll2));
    printf("[long long] OVERFLOW (LLONG_MAX + 1) -> Atteso -1: %lld\n", check_sum(LLONG_MAX, 1LL));
    printf("[long long] UNDERFLOW (LLONG_MIN + -1) -> Atteso -1: %lld\n\n", check_sum(LLONG_MIN, -1LL));


    printf("=== TEST CHECK_SUM (TIPI SENZA SEGNO) ===\n");

    // 6. UNSIGNED CHAR
    unsigned char uc1 = 10, uc2 = 20;
    unsigned char uc_max = UCHAR_MAX;
    printf("[uchar] OK (10 + 20): %u\n", check_sum(uc1, uc2));
    printf("[uchar] OVERFLOW (UCHAR_MAX + 1) -> Atteso 255 (-1): %u\n\n", check_sum(uc_max, (unsigned char)1));

    // 7. UNSIGNED SHORT
    unsigned short us1 = 100, us2 = 200;
    unsigned short us_max = USHRT_MAX;
    printf("[ushort] OK (100 + 200): %u\n", check_sum(us1, us2));
    printf("[ushort] OVERFLOW (USHRT_MAX + 1) -> Atteso 65535 (-1): %u\n\n", check_sum(us_max, (unsigned short)1));

    // 8. UNSIGNED INT
    unsigned int ui1 = 1000U, ui2 = 2000U;
    printf("[uint] OK (1000 + 2000): %u\n", check_sum(ui1, ui2));
    printf("[uint] OVERFLOW (UINT_MAX + 1) -> Atteso UINT_MAX (-1): %u\n\n", check_sum(UINT_MAX, 1U));

    // 9. UNSIGNED LONG
    unsigned long ul1 = 10000UL, ul2 = 20000UL;
    printf("[ulong] OK (10000 + 20000): %lu\n", check_sum(ul1, ul2));
    printf("[ulong] OVERFLOW (ULONG_MAX + 1) -> Atteso ULONG_MAX (-1): %lu\n\n", check_sum(ULONG_MAX, 1UL));

    // 10. UNSIGNED LONG LONG
    unsigned long long ull1 = 100000ULL, ull2 = 200000ULL;
    printf("[ullong] OK (100000 + 200000): %llu\n", check_sum(ull1, ull2));
    printf("[ullong] OVERFLOW (ULLONG_MAX + 1) -> Atteso ULLONG_MAX (-1): %llu\n\n", check_sum(ULLONG_MAX, 1ULL));

    return 0;
}
