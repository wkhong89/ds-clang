#include <stdio.h>
#include "LinkedPoly.h"

// ���� ���׽� ����Ʈ�� �����ϴ� ����
ListHead* createLinkedList(void) {
	ListHead* L;
	L = (ListHead*)malloc(sizeof(ListHead));
	L->head = NULL;
	return L;
}

// ���׽� ����Ʈ�� ������ ��带 �߰��ϴ� ����
void appendTerm(ListHead* L, float coef, int expo) {
	ListNode* newNode;
	ListNode* p;
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->coef = coef;
	newNode->expo = expo;
	newNode->link = NULL;

	if (L->head == NULL) {		// ���׽� ����Ʈ�� ������ ���
		L->head = newNode;
		return;
	}
	else {						// ���׽� ����Ʈ�� ������ �ƴ� ���
		p = L->head;
		while (p->link != NULL) {
			p = p->link;			// ����Ʈ�� ������ ��带 ã�� 
		}
		p->link = newNode;		// �� ��� ���� 
	}
}

// �� ���׽��� ������ ���ϴ� ���� 
void addPoly(ListHead* A, ListHead* B, ListHead* C) {
	ListNode* pA = A->head;
	ListNode* pB = B->head;
	float sum;

	// �� ���׽Ŀ� ��尡 �ִ� ���� �ݺ� ����
	while (pA && pB) {
		// ���׽� A�� ������ ���׽� B�� ������ ���� ���
		if (pA->expo == pB->expo) {
			sum = pA->coef + pB->coef;
			appendTerm(C, sum, pA->expo);
			pA = pA->link; pB = pB->link;
		}
		// ���׽� A�� ������ ���׽� B�� �������� ū ���
		else if (pA->expo > pB->expo) {
			appendTerm(C, pA->coef, pA->expo);
			pA = pA->link;
		}
		// ���׽� A�� ������ ���׽� B�� �������� ���� ���
		else {
			appendTerm(C, pB->coef, pB->expo);
			pB = pB->link;
		}
	}
	// ���׽� A�� ���� �ִ� ��� ����
	for (; pA != NULL; pA = pA->link)
		appendTerm(C, pA->coef, pA->expo);

	// ���׽� B�� ���� �ִ� ��� ����
	for (; pB != NULL; pB = pB->link)
		appendTerm(C, pB->coef, pB->expo);
}

// ���׽� ����Ʈ�� ����ϴ� ����
void printPoly(ListHead* L) {
	ListNode* p = L->head;
	for (; p; p = p->link) {
		printf("%3.0fx^%d", p->coef, p->expo);
		if (p->link != NULL) printf(" +");
	}
}