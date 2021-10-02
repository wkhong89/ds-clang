#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1. ���� �޸� �ּҸ� �̿��Ͽ� �����͸� �а� ����
    int i = 7;
    int *pi;

    pi = &i;
    printf("i�� �ּ�: %p\n", &i);
    printf("i�� ��: %d\n", *pi);
    // pi = 0x0061FF18;
    printf("�޸� �ּҸ� ����� i�� ��: %d\n", *(int *)0x0061FF18);

    // 1-1. �ٸ� �ڷ����� �����ͷ� �޸� ������ �о����

    i = 0xABCDEF12;
    char *pc;
    pc = (char *)&i;
    printf("pc�� ����Ű�� ��: %x\n", *pc);
    printf("pc+1 ����Ű�� ��: %x\n", *(pc+1));
    printf("pc+2 ����Ű�� ��: %x\n", *(pc+2));
    printf("pc+3 ����Ű�� ��: %x\n", *(pc+3));

    short *ps;
    ps = (short *)&i;
    printf("ps�� ����Ű�� ��: %x\n", *ps);

    // 2. malloc �Լ� �̿��ϱ�
    int *iPool;
    double *dPool;

    iPool = (int *)malloc(10);
    dPool = (double *)malloc(10);
    printf("���� pool�� �ּ�: %p\n", iPool);
    printf("�Ǽ� pool�� �ּ�: %p\n", dPool);
    printf("iPool + 1: %p\n", iPool + 1);
    printf("dPool + 1: %p\n", dPool + 1);

    // 2-1. �б�/���� 
    *iPool = 5;
    *dPool = 5.5;
    *(iPool + 1) = 6;
    *(dPool + 1) = 7.7;
    printf("dPool�� ��: %f\n", *dPool);
    printf("dPool + 1�� ��: %f\n", *(dPool + 1));

    // 2-2. �ּ��� ħ��
    *(iPool + 7) = 0x1CFDEFCC;
    printf("dPool�� ��: %f\n", *dPool);


    // 3. ���ڿ� ����� ������
    char *str = "Korea";

    printf("Korea�� �����ּ�: %p\n", str);
    printf("�ι�° ������ ���: %c\n", *(char *)0x00405065);
    printf("����° ������ ���: %c\n", *(str+2));

    // str, str+1, str+2
    // *str, *(str+1), *(str+2),...
    // str[0], str[1], str[2]
    for (int i = 0; i < 6; i++) {
        printf("str[%d]: %c, ", i, str[i]);
    }

    printf("\n");
    for (int i=0; i < 6; i++) {
        printf("*(str+%d): %c, ", i, *(str+i));

    }

    // 4. �迭�� ������
    char aArray[10];
    printf("aArray: %d\n", aArray);
    printf("aArray�� ���� �ּ�: %d\n", &aArray[0]);
    char *p2;
    p2 = (char *)6422262;
    p2[0] = 'A'; p2[1] = 'B'; p2[3] = 'C';
    printf("%c\n", *(p2+1));

    return 0;
}
