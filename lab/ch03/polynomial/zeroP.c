#include "poly.h"

polynomial zeroP(void)
{
    polynomial p;

    p.degree = 0;
    for (int i = 0; i < MAX_DEGREE; i++)
        p.coef[i] = 0.0;

    return p;
}