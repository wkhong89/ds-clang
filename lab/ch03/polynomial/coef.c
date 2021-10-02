#include "poly.h"

float coef(polynomial p, int e)
{
    int index;

    index = p.degree - e;

    return p.coef[index];
}