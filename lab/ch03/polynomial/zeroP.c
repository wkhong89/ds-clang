#include "poly.h"

polynomial zeroP(void)
{
    polynomial p;

    p.degree = 0;
    p.coef[0] = 0.0;

    return p;
}