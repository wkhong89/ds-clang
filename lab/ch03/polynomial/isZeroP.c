#include "poly.h"

// polynomial항이 0이면 return true
// polynomial항이 0이 아니면 return false
boolean isZeroP(polynomial p)
{
    if (p.degree == 0 && p.coef[0] == 0)
        return true;
    else
        return false;
}