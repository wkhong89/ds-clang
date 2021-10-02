#pragma once
typedef char element;		// ���� ����(element)�� �ڷ����� char�� ���� 

typedef struct  stackNode {	// ������ ��带 ����ü�� ����
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;				// ������ top ��带 �����ϱ� ���� ������ top ����

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();