#pragma once
typedef char element;	// ��ũ ����(element)�� �ڷ����� char�� ����

typedef struct DQNode {	// ���� ���� ����Ʈ ��ũ�� ��� ������ ����ü�� ����
	element data;
	struct DQNode* llink;
	struct DQNode* rlink;
} DQNode;

typedef struct {       // ��ũ���� ����ϴ� ������ front�� rear�� ����ü�� ����
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