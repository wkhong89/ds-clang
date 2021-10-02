#include <stdio.h>
#include "sequentialSearch.h"
#include "indexSearch.h"

int main(void) {
	element a[] = { 1, 2, 8, 9, 11, 19, 29 };
	int i, size = sizeof(a) / sizeof(a[0]); //�迭 ������ ����
	iTable* indexTable;

	printf("\n\t<< �˻� ��� �ڷ� >>\n");
	for (i = 0; i < size; i++) printf("%5d", a[i]); puts("");

	printf("\n\n\t<< ���� �˻� >>\n");
	sequentialSearch2(a, size, 9); // �迭 a�� n�� ���� �߿��� Ž��Ű�� 9�� ���� �˻�
	sequentialSearch2(a, size, 6); // �迭 a�� n�� ���� �߿��� Ž��Ű�� 6�� ���� �˻�

	printf("\n\n\t<< ���� ���� �˻� >>\n");
	indexTable= makeIndexTable(a, size);
	indexSearch(indexTable, a, size, 9); // �迭 a�� n�� ���� �߿��� Ž��Ű�� 9�� ���� �˻�
	indexSearch(indexTable, a, size, 6); // �迭 a�� n�� ���� �߿��� Ž��Ű�� 6�� ���� �˻�

	getchar();  return 0;
}