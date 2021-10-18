#pragma once
#include <stdio.h>
#include <stdlib.h>

// 다항식 리스트의 노드 구조를 구조체로 정의
float coef;
typedef struct ListNode {
	float coef;
	int expo;
	struct ListNode* link;
} ListNode;

// 다항식 리스트의 head 노드를 구조체로 정의
typedef struct ListHead {
	ListNode* head;
} ListHead;

ListHead* createLinkedList(void);
void appendTerm(ListHead* L, float coef, int expo);
void addPoly(ListHead* A, ListHead* B, ListHead* C);
void printPoly(ListHead* L);

// 다항식 곱셈을 위한 함수
void multPoly(ListHead *A, ListHead *B, ListHead *C);
void freeNode(ListHead *poly);
void dupPoly(ListHead *src, ListHead *dest);