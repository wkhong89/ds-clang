#include <stdio.h>
void shellSort(int a[], int size);

int main(void) {
	int list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]); 	// list �迭�� ���� ����
	printf("\n������ ���� : ");
	for (int i = 0; i < size; i++)  printf("%3d ", list[i]);
	printf("\n\n<<<<<<<<<< �� ���� ���� >>>>>>>>>>\n");
	shellSort(list, size);  // �� ���� �Լ� ȣ��

	getchar();  return 0;
}