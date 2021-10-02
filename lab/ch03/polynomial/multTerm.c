#include "poly.h"

polynomial multTerm(polynomial p, float a, int e)
{
    polynomial new;

    if (isZeroP(p) || a == 0)
        return zeroP();
    else {
        // new degree = p.degree + e
        new.degree = p.degree + e;

        // reserve a space
        for (int i = 0; i <= new.degree; i++)
            new.coef[i] = 0;
        
        for (int i =0; i <= p.degree; i++) {
            new.coef[i] = p.coef[i] * a;
        }

    }

    return new;
}