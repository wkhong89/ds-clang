#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1. 실제 메모리 주소를 이용하여 데이터를 읽고 쓰기
    int i = 7;
    int *pi;

    pi = &i;
    printf("i의 주소: %p\n", &i);
    printf("i의 값: %d\n", *pi);
    // pi = 0x0061FF18;
    printf("메모리 주소를 사용한 i의 값: %d\n", *(int *)0x0061FF18);

    // 1-1. 다른 자료형의 포인터로 메모리 데이터 읽어오기

    i = 0xABCDEF12;
    char *pc;
    pc = (char *)&i;
    printf("pc가 가리키는 값: %x\n", *pc);
    printf("pc+1 가리키는 값: %x\n", *(pc+1));
    printf("pc+2 가리키는 값: %x\n", *(pc+2));
    printf("pc+3 가리키는 값: %x\n", *(pc+3));

    short *ps;
    ps = (short *)&i;
    printf("ps가 가리키는 값: %x\n", *ps);

    // 2. malloc 함수 이용하기
    int *iPool;
    double *dPool;

    iPool = (int *)malloc(10);
    dPool = (double *)malloc(10);
    printf("정수 pool의 주소: %p\n", iPool);
    printf("실수 pool의 주소: %p\n", dPool);
    printf("iPool + 1: %p\n", iPool + 1);
    printf("dPool + 1: %p\n", dPool + 1);

    // 2-1. 읽기/쓰기 
    *iPool = 5;
    *dPool = 5.5;
    *(iPool + 1) = 6;
    *(dPool + 1) = 7.7;
    printf("dPool의 값: %f\n", *dPool);
    printf("dPool + 1의 값: %f\n", *(dPool + 1));

    // 2-2. 주소의 침범
    *(iPool + 7) = 0x1CFDEFCC;
    printf("dPool의 값: %f\n", *dPool);


    // 3. 문자열 상수와 포인터
    char *str = "Korea";
    char *p;
    p = str;
    printf("Korea의 주소: %p\n", str);
    printf("r의 메모리 주소(값): %p(%c), str[2]: %c, p[2]: %c\n", str + 2, *((int *)0x00405115), str[2], p[2]);

    // 4. 배열과 포인터
    char aArray[10];
    printf("aArray: %d\n", aArray);
    printf("aArray의 시작 주소: %d\n", &aArray[0]);
    char *p2;
    p2 = (char *)6422262;
    p2[0] = 'A'; p2[1] = 'B'; p2[3] = 'C';
    printf("%c\n", *(p2+1));

    return 0;
}
