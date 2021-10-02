#include <stdio.h>
#include "poly.h"

polynomial delTerm(polynomial p, int e)
{
    int degree, index;
    int shift_size;
    // 최고차항을 삭제 ==> degree 수정, coef 배열을 왼쪽으로 이동
    // 다음 최고차항의 지수: exp ==> degree - exp 만큼 이동

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
            printf("delTerm: 삭제하고자 하는 항이 없습니다.\n");
    } else {  // if (e > p.degree)
        //  삭제하려는 항이 없는 경우
        //  1. degree보다 e가 큰 경우 ==> 삭제하고자 하는 항이 없습니다. 출력
        //  2. e에 해당하는 coef가 0인 경우 ==> 항이 없습니다. 출력
        printf("delTerm: 삭제하고자 하는 항이 없습니다.\n");
    }

    return p;

}