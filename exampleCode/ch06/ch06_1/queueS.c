#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

// ���� ���� ť�� �����ϴ� ����
QueueType* createQueue() {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;	// front �ʱ갪 ����
	Q->rear = -1;	// rear �ʱ갪 ����
	return Q;
}

// ���� ť�� ���� �������� �˻��ϴ� ����
int isQueueEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf(" Queue is empty! \n\t ");
		return 1;
	}
	else return 0;
}

// ���� ť�� ��ȭ �������� �˻��ϴ� ����
int isQueueFull(QueueType* Q) {
	if (Q->rear == Q_SIZE - 1) {
		printf(" Queue is full! \n\t ");
		return 1;
	}
	else return 0;
}

// ���� ť�� rear�� ���Ҹ� �����ϴ� ����
void enQueue(QueueType* Q, element item) {
	if (isQueueFull(Q)) return;  // ��ȭ �����̸�, ���� ���� �ߴ�
	else {
		Q->rear++;
		Q->queue[Q->rear] = item;
	}
}

// ���� ť�� front���� ���Ҹ� �����ϴ� ����
element deQueue(QueueType* Q) {
	if (isQueueEmpty(Q)) return;  // ���� �����̸�, ���� ���� �ߴ�
	else {
		Q->front++;
		return Q->queue[Q->front];
	}
}

// ���� ť�� ���� �տ� �ִ� ���Ҹ� �˻��ϴ� ����
element peekQ(QueueType* Q) {
	if (isQueueEmpty(Q)) return; // ���� �����̸� ���� �ߴ�
	else return Q->queue[Q->front + 1];
}

// ���� ť�� ���Ҹ� ����ϴ� ����
void printQ(QueueType* Q) {
	int i;
	printf(" Queue : [");
	for (i = Q->front + 1; i <= Q->rear; i++)
		printf("%3c", Q->queue[i]);
	printf(" ]");
}