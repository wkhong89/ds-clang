#include <stdio.h>

int main(void)
{
    int i;
    int *pi;

    printf("i의 크기: %d\n", sizeof(i));
    printf("pi의 크기: %d\n", sizeof(pi));

    //i와 pi의 값을 확인
    printf("i의 값: %d\n", i);
    printf("pi의 값: %d\n", pi);

    // i와 pi의 주소 확인
    printf("i의 주소: %d\n", &i);
    printf("pi의 주소: %d\n", &pi);

    // pi가 가리키는 곳에 정수 5를 저장
    // pi가 가리키는 곳의 공간이 확보되지 않았으므로 에러가 나거나, 
    // 나중에 예상치 못한 결과가 나옴
    //*pi = 5;

    pi = &i;
    printf("pi의 값: %d\n", pi);
    *pi = 10;
    printf("pi가 가리키는 곳의 값: %d\n", *pi);
    printf("i의 값: %d\n", i);

    return 0;
}
