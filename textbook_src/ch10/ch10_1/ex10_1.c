#include <stdio.h>
typedef int element;

void sequentialSearch1(element a[], int n, int key);

int main(void) {
	int i;
	element a[] = { 8, 30, 1, 9, 11, 19, 2 };
	int size = sizeof(a)/sizeof(a[0]); //�迭 ������ ����

	printf("\n\t<< �˻� ��� �ڷ� >>\n");
	for (i = 0; i < size; i++) printf("%5d", a[i]); puts("");
	sequentialSearch1(a, size, 9);  // �迭 a�� n�� ���� �߿��� Ž��Ű�� 9�� ���� �˻�
	sequentialSearch1(a, size, 6);  // �迭 a�� n�� ���� �߿��� Ž��Ű�� 6�� ���� �˻�

	getchar();  return 0;
}