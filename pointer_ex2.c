#include <stdio.h>

int main(void)
{
    // 모든 연산은 동일한 자료형에 대해서만 이루어진다.
    int i, j;
    char c;
    double di, dj;
    int *pi, *pj;
    char *pc;
    double *pdi, *pdj;

    i = 5;
    j = 10;
    i = j;
    i = j + 10;
    c = i;
    j = c + i;
    di = 10;
    dj = 20;

    di = 0.1 * c + i / 2.5 + (2 * i + j);
    printf("%d %d %d %d %d\n", sizeof(pi), sizeof(pj), sizeof(pc), sizeof(pdi), sizeof(pdj));

    pc = &c;
    pi = (int *)pc;

    return 0;
}