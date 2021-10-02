#include <stdio.h>
#include "poly.h"

polynomial addTerm(polynomial p, float a, int e)
{
    int exp;
    int shift_size, index;

    // e > p�� degree ==> p�� coef ���� �������� �̵�
    // �̵��� ũ�� = e - p's degree 
    if (e > p.degree) {
        shift_size = e - p.degree;
        for (exp = 0; exp <= p.degree; exp++) {
            index = p.degree - exp;
            p.coef[index+shift_size] = p.coef[index];
        }

        for (exp = e; exp > exp - shift_size; exp--) {
            index = e - exp;
            p.coef[index] = 0;
        }

        p.degree = e;
    }

    index = p.degree - e;
    if (p.coef[index])
        p.coef[index] = a;
    else {
        printf("addTerm: �ش� ������ �ִ� ����� ���߽��ϴ�. \n");
        p.coef[index] += a;
    }

    return p;
}