#include <stdio.h>
void SelectionSort(int a[], int size);

int main(void) {
	int i,  list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };	// ������ ����
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n������ ���� : ");
	for (i = 0; i < size; i++) 	printf("%d ", list[i]);	// ���� ���� ���� ���
	printf("\n\n<<<<<<<<<< ���� ���� ���� >>>>>>>>>>\n");
	SelectionSort(list, size);		// ���� ���� �Լ� ȣ��

	getchar(); return 0;
}