#include "poly.h"

polynomial addPoly2(polynomial p1, polynomial p2)
{
    polynomial newPoly = zeroP();

    newPoly.degree = MAX(maxExp(p1), maxExp(p2));

    while (!isZeroP(p1) && !isZeroP(p2)) {
        if (maxExp(p1) == maxExp(p2)) {
            newPoly = addTerm(newPoly, p1.coef[0]+p2.coef[0], maxExp(p1));
            p1 = delTerm(p1, maxExp(p1));
            p2 = delTerm(p2, maxExp(p2));
        } 
        else if (maxExp(p1) > maxExp(p2)) {
            newPoly = addTerm(newPoly, p1.coef[0], maxExp(p1));
            p1 = delTerm(p1, maxExp(p1));
        }
        else {      // maxExp(p2) > maxExp(p1)
            newPoly = addTerm(newPoly, p2.coef[0], maxExp(p2));
            p2 = delTerm(p2, maxExp(p2));
        }
    }

    while (!isZeroP(p1)) {
        newPoly = addTerm(newPoly, p1.coef[0], maxExp(p1));
        p1 = delTerm(p1, maxExp(p1));
    }

    while (!isZeroP(p2)) {
        newPoly = addTerm(newPoly, p2.coef[0], maxExp(p2));
        p2 = delTerm(p2, maxExp(p2));
    }

    return newPoly;
}