#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

QueueType* createCQueue() {
	QueueType* cQ;
	cQ = (QueueType*)malloc(sizeof(QueueType));
	cQ->front = 0;       // front �ʱ갪 ����
	cQ->rear = 0;        // rear �ʱ갪 ����
	return cQ;
}

// ���� ť�� ���� �������� �˻��ϴ� ����
int isCQueueEmpty(QueueType* cQ) {
	if (cQ->front == cQ->rear) {
		printf(" Circular Queue is empty! ");
		return 1;
	}
	else return 0;
}

// ���� ť�� ��ȭ �������� �˻��ϴ� ����
int isCQueueFull(QueueType* cQ) {
	if (((cQ->rear + 1) % cQ_SIZE) == cQ->front) {
		printf("  Circular Queue is full! ");
		return 1;
	}
	else return 0;
}

// ���� ť�� rear�� ���Ҹ� �����ϴ� ����
void enCQueue(QueueType* cQ, element item) {
	if (isCQueueFull(cQ))	return;
	else {
		cQ->rear = (cQ->rear + 1) % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

// ���� ť�� front���� ���Ҹ� �����ϰ� ��ȯ�ϴ� ����
element deCQueue(QueueType* cQ) {
	if (isCQueueEmpty(cQ)) return;
	else {
		cQ->front = (cQ->front + 1) % cQ_SIZE;
		return cQ->queue[cQ->front];
	}
}

// ���� ť�� ���� �տ� �ִ� ���Ҹ� �˻��ϴ� ����
element peekCQ(QueueType* cQ) {
	if (isCQueueEmpty(cQ)) exit(1);
	else return cQ->queue[(cQ->front + 1) % cQ_SIZE];
}

// ���� ť�� ���Ҹ� ����ϴ� ����
void printCQ(QueueType* cQ) {
	int i, first, last;
	first = (cQ->front + 1) % cQ_SIZE;
	last = (cQ->rear + 1) % cQ_SIZE;
	printf(" Circular Queue : [");
	i = first;
	while (i != last) {
		printf("%3c", cQ->queue[i]);
		i = (i + 1) % cQ_SIZE;
	}
	printf(" ] ");
}