#pragma once
typedef char element;	// 데크 원소(element)의 자료형을 char로 정의

typedef struct DQNode {	// 이중 연결 리스트 데크의 노드 구조를 구조체로 정의
	element data;
	struct DQNode* llink;
	struct DQNode* rlink;
} DQNode;

typedef struct {       // 데크에서 사용하는 포인터 front와 rear를 구조체로 정의
	DQNode* front, * rear;
} DQueType;

DQueType* createDQue();
int isDeQEmpty(DQueType* DQ);
void insertFront(DQueType* DQ, element item);
void insertRear(DQueType* DQ, element item);
element deleteFront(DQueType* DQ);
element deleteRear(DQueType* DQ);
element peekFront(DQueType* DQ);
element peekRear(DQueType* DQ);
void printDQ(DQueType* DQ);