#include "lib/limits.h"
#include "lib/math.h"

#include <stdio.h>

void main(void)
 {
    printf("INT MAX: %d\n", INT_MAX);
    printf("INT MIN: %d\n", INT_MIN);
    printf("UINT MAX: %u\n", UINT_MAX);
    printf("UNIT MIN: %u\n", UINT_MIN);

    // SHould return -1
    printf("Check Sum Result %d\n", check_sum(10, INT_MAX));
 }
