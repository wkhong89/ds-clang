#include <stdio.h>

int main(void)
{
    int i;
    int *pi;

    printf("i�� ũ��: %d\n", sizeof(i));
    printf("pi�� ũ��: %d\n", sizeof(pi));

    //i�� pi�� ���� Ȯ��
    printf("i�� ��: %d\n", i);
    printf("pi�� ��: %d\n", pi);

    // i�� pi�� �ּ� Ȯ��
    printf("i�� �ּ�: %d\n", &i);
    printf("pi�� �ּ�: %d\n", &pi);

    // pi�� ����Ű�� ���� ���� 5�� ����
    // pi�� ����Ű�� ���� ������ Ȯ������ �ʾ����Ƿ� ������ ���ų�, 
    // ���߿� ����ġ ���� ����� ����
    //*pi = 5;

    pi = &i;
    printf("pi�� ��: %d\n", pi);
    *pi = 10;
    printf("pi�� ����Ű�� ���� ��: %d\n", *pi);
    printf("i�� ��: %d\n", i);

    return 0;
}
