#include <stdio.h>
void treeSort(int a[], int n);

int main(void) {
	int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]); 	// list �迭�� ���� ����
	printf("\n������ ���� : ");
	for (i = 0; i <= size - 1; i++) printf(" %d", list[i]);
	printf("\n\n <<<<< Ʈ�� ���� ���� >>>>>> \n\n");
	treeSort(list, size);  // Ʈ�� ���� �Լ� ȣ��

	getchar(); return 0;
}