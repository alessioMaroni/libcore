#ifndef MATH_H
#define MATH_H

#include "limits.h"

int check_sum(int a, int b)
{
    if ((b > 0) && (a > INT_MAX - b)) {
        return -1;
    }

    if ((b < 0) && (a < INT_MIN - b)) {
        return -1;
    }

    return a + b;
}

#endif
