#pragma once
#define MAX_ELEMENT 100

// ������ ���� 1���� �迭�� ���� ������ ������ ����ü�� ��� ����
typedef struct {
	int heap[MAX_ELEMENT];
	int heap_size;
} heapType;

heapType* createHeap();
void insertHeap(heapType* h, int item);
int deleteHeap(heapType* h);
void printHeap(heapType* h);