#pragma once
#define INDEX_SIZE 3						// �ε��� ���̺��� ũ�⸦ 3���� ����
typedef int element;

// �ε��� ���̺��� ����(index, key)�� ����
typedef struct {
	int index;
	element key;
} iTable;

iTable indexTable[INDEX_SIZE];				// �ε��� ���̺� indexTable ����

iTable* makeIndexTable(element a[], int size);
void indexSearch(iTable indexTable[], element a[], int n, element key);