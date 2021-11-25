#include <stdio.h>
#include <stdlib.h>
#include "deQue.h"

// ���� ��ũ�� �����ϴ� ����
DQueType* createDQue() {
	DQueType* DQ;
	DQ = (DQueType*)malloc(sizeof(DQueType));
	DQ->front = NULL;
	DQ->rear = NULL;
	return DQ;
}

// ��ũ�� ���� �������� �˻��ϴ� ����
int isDeQEmpty(DQueType* DQ) {
	if (DQ->front == NULL)  return 1;
	else return 0;
}

// ��ũ�� front ������ ���Ҹ� �����ϴ� ����
void insertFront(DQueType* DQ, element item) {
	DQNode* newNode = (DQNode*)malloc(sizeof(DQNode));
	newNode->data = item;
	if (isDeQEmpty(DQ)) {   // ��ũ�� ���� ������ ���
		DQ->front = newNode;
		DQ->rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		DQ->front->llink = newNode;
		newNode->rlink = DQ->front;
		newNode->llink = NULL;
		DQ->front = newNode;
	}
}

// ��ũ�� rear �ڷ� ���Ҹ� �����ϴ� ����
void insertRear(DQueType* DQ, element item) {
	DQNode* newNode = (DQNode*)malloc(sizeof(DQNode));
	newNode->data = item;
	if (isDeQEmpty(DQ)) {   // ��ũ�� ���� ������ ���
		DQ->front = newNode;
		DQ->rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		DQ->rear->rlink = newNode;
		newNode->rlink = NULL;
		newNode->llink = DQ->rear;
		DQ->rear = newNode;
	}
}

// ��ũ�� front ��带 �����ϰ� ��ȯ�ϴ� ����
// DQ�� ���������, 0�� return
// �׷��� ������, DQ�� Front �����͸� return
element deleteFront(DQueType* DQ) {
	DQNode* old = DQ->front;
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n");  return 0;
	}
	else {
		item = old->data;
		if (DQ->front->rlink == NULL) {
			DQ->front = NULL;
			DQ->rear = NULL;
		}
		else {
			DQ->front = DQ->front->rlink;
			DQ->front->llink = NULL;
		}
		free(old);
		return item;
	}
}

// ��ũ�� rear ��带 �����ϰ� ��ȯ�ϴ� ����
element deleteRear(DQueType* DQ) {
	DQNode* old = DQ->rear;
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); 
		return 0;
	}
	else {
		item = old->data;
		if (DQ->rear->llink == NULL) {
			DQ->front = NULL;
			DQ->rear = NULL;
		}
		else {
			DQ->rear = DQ->rear->llink;
			DQ->rear->rlink = NULL;
		}
		free(old);
		return item;
	}
}

// ��ũ�� front ����� ������ �ʵ带 ��ȯ�ϴ� ����
element peekFront(DQueType* DQ) {
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return 0;
	}
	else {
		item = DQ->front->data;
		return item;
	}
}

// ��ũ�� rear ����� ������ �ʵ带 ��ȯ�ϴ� ����
element peekRear(DQueType* DQ) {
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return 0;
	}
	else {
		item = DQ->rear->data;
		return item;
	}
}

// ��ũ�� front ������ rear ������ ����ϴ� ����
void printDQ(DQueType* DQ) {
	DQNode* temp = DQ->front;
	printf("DeQue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->rlink;
	}
	printf(" ] ");
}