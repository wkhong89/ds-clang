#include <stdio.h>
void mergeSort(int a[], int m, int n);
int size;
int main(void) {
	int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	size = sizeof(list) / sizeof(list[0]); 	// list �迭�� ���� ����
	printf("\n ������ ���� >> ");
	for (i = 0; i < size; i++) printf("%4d ", list[i]);
	printf("\n\n<<<<<<<<<< ���� ���� ���� >>>>>>>>>>\n");
	mergeSort(list, 0, size - 1);   // ���� ���� �Լ� ȣ��

	getchar();  return 0;
}