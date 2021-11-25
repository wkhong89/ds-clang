#pragma once
#include <stdio.h>
#include <stdlib.h>

// ���׽� ����Ʈ�� ��� ������ ����ü�� ����
float coef;
typedef struct ListNode {
	float coef;
	int expo;
	struct ListNode* link;
} ListNode;

// ���׽� ����Ʈ�� head ��带 ����ü�� ����
typedef struct ListHead {
	ListNode* head;
} ListHead;

ListHead* createLinkedList(void);
void appendTerm(ListHead* L, float coef, int expo);
void addPoly(ListHead* A, ListHead* B, ListHead* C);
void printPoly(ListHead* L);

// ���׽� ������ ���� �Լ�
void multPoly(ListHead *A, ListHead *B, ListHead *C);
void freeNode(ListHead *poly);
void dupPoly(ListHead *src, ListHead *dest);