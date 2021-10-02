#include <stdio.h>
#include "poly.h"

polynomial delTerm(polynomial p, int e)
{
    int degree, index;
    int shift_size;
    // �ְ������� ���� ==> degree ����, coef �迭�� �������� �̵�
    // ���� �ְ������� ����: exp ==> degree - exp ��ŭ �̵�

    if (p.degree == e) {
        // finding nonzero coefficient
        for (degree = p.degree - 1; degree >= 0; degree--) {
            index = p.degree - degree;
            if (p.coef[index] != 0 || degree == 0) break;
        }
        // shift to left
        shift_size = p.degree - degree;
        for (int i = degree; i >= 0; i--) {
            index = p.degree - i;
            p.coef[index - shift_size] = p.coef[index];

        }
        p.degree = degree;
    } else if (e < p.degree) {
        index = p.degree - e;

        if (p.coef[index])
            p.coef[index] = 0;
        else
            printf("delTerm: �����ϰ��� �ϴ� ���� �����ϴ�.\n");
    } else {  // if (e > p.degree)
        //  �����Ϸ��� ���� ���� ���
        //  1. degree���� e�� ū ��� ==> �����ϰ��� �ϴ� ���� �����ϴ�. ���
        //  2. e�� �ش��ϴ� coef�� 0�� ��� ==> ���� �����ϴ�. ���
        printf("delTerm: �����ϰ��� �ϴ� ���� �����ϴ�.\n");
    }

    return p;

}