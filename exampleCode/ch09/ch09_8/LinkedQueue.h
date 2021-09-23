#pragma once
typedef int element;     // ���� ť ����(element)�� �ڷ����� char�� ����

typedef struct QNode {    // ���� ť�� ��带 ����ü�� ����
	element data;
	struct QNode* link;
} QNode;

typedef struct {		// ���� ť���� ����ϴ� ������ front�� rear�� ����ü�� ����
	QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue();
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printLQ(LQueueType* LQ);