#include <stdio.h>
#include "indexSearch.h"

// �迭 a�� ���� �ε��� ���̺� �����
iTable* makeIndexTable(element a[], int size) {
	int i, n;
	n = size / INDEX_SIZE;					// �ε��� ���̺� ���� �迭 ������ ���� ���
	if (size % INDEX_SIZE > 0)  n++;
	for (i = 0; i < INDEX_SIZE; i++) {		// �ε��� ���̺���  ä���
		indexTable[i].index = i * n;
		indexTable[i].key = a[i * n];
	}
	return indexTable;
}

// ���� ���� �˻� 
void indexSearch(iTable indexTable[], element a[], int n, element key) {
	int i, begin, end;
	if (key < a[0] || key > a[n - 1])
		printf("\nã�� Ű�� �����ϴ�. �˻� ����! \n");

	// �ε��� ���̺��� �˻��Ͽ� �˻� ���� ����
	for (i = 0; i < INDEX_SIZE; i++){
		if ((indexTable[i].key <= key) && (indexTable[i + 1].key > key)) {
			begin = indexTable[i].index;
			end = indexTable[i + 1].index;
			break;
		}
		if (i == INDEX_SIZE) {
			begin = indexTable[i - 1].index;
			end = n;
		}
	}
	sequentialSearch3(a, begin, end, key);	// �˻� ������ ���� �����˻� ����
}