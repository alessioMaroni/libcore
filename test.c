#include "libcore.h"

#include <stdio.h>

int main()
 {
    printf("INT MAX: %d\n", INT_MAX);
    printf("INT MIN: %d\n", INT_MIN);
    printf("UINT MAX: %u\n", UINT_MAX);
    printf("UNIT MIN: %u\n", UINT_MIN);

    // Should return -1
    printf("Check Sum Result %d\n", check_sum(10, INT_MAX));

    return 0;
 }
