#pragma once
#define cQ_SIZE  4

typedef char element;		// ť ����(element)�� �ڷ����� char�� ����

typedef struct {
	element queue[cQ_SIZE];	// 1���� �迭 ť ����
	int front, rear;
} QueueType;

QueueType* createCQueue();
int isCQueueEmpty(QueueType* cQ);
int isCQueueFull(QueueType* cQ);
void enCQueue(QueueType* cQ, element item);
element deCQueue(QueueType* cQ);
element peekCQ(QueueType* cQ);
void printCQ(QueueType* cQ);