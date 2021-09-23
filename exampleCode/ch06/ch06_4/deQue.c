#include <stdio.h>
#include <stdlib.h>
#include "deQue.h"

// 공백 데크를 생성하는 연산
DQueType* createDQue() {
	DQueType* DQ;
	DQ = (DQueType*)malloc(sizeof(DQueType));
	DQ->front = NULL;
	DQ->rear = NULL;
	return DQ;
}

// 데크가 공백 상태인지 검사하는 연산
int isDeQEmpty(DQueType* DQ) {
	if (DQ->front == NULL)  return 1;
	else return 0;
}

// 데크의 front 앞으로 원소를 삽입하는 연산
void insertFront(DQueType* DQ, element item) {
	DQNode* newNode = (DQNode*)malloc(sizeof(DQNode));
	newNode->data = item;
	if (isDeQEmpty(DQ)) {   // 데크가 공백 상태인 경우
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

// 데크의 rear 뒤로 원소를 삽입하는 연산
void insertRear(DQueType* DQ, element item) {
	DQNode* newNode = (DQNode*)malloc(sizeof(DQNode));
	newNode->data = item;
	if (isDeQEmpty(DQ)) {   // 데크가 공백 상태인 경우
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

// 데크의 front 노드를 삭제하고 반환하는 연산
element deleteFront(DQueType* DQ) {
	DQNode* old = DQ->front;
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n");  return;
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

// 데크의 rear 노드를 삭제하고 반환하는 연산
element deleteRear(DQueType* DQ) {
	DQNode* old = DQ->rear;
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return;
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

// 데크의 front 노드의 데이터 필드를 반환하는 연산
element peekFront(DQueType* DQ) {
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return;
	}
	else {
		item = DQ->front->data;
		return item;
	}
}

// 데크의 rear 노드의 데이터 필드를 반환하는 연산
element peekRear(DQueType* DQ) {
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return;
	}
	else {
		item = DQ->rear->data;
		return item;
	}
}

// 데크의 front 노드부터 rear 노드까지 출력하는 연산
void printDQ(DQueType* DQ) {
	DQNode* temp = DQ->front;
	printf("DeQue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->rlink;
	}
	printf(" ] ");
}