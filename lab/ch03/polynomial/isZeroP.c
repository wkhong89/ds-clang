#include "poly.h"

// polynomial���� 0�̸� return true
// polynomial���� 0�� �ƴϸ� return false
boolean isZeroP(polynomial p)
{
    if (p.degree == 0 && p.coef[0] == 0)
        return true;
    else
        return false;
}