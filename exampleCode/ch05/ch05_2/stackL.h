#pragma once
typedef int element;		// 스택 원소(element)의 자료형을 int로 정의 

typedef struct  stackNode {	// 스택의 노드를 구조체로 정의
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;				// 스택의 top 노드를 지정하기 위해 포인터 top 선언

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();