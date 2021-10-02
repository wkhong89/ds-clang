#pragma once
#define STACK_SIZE 100

typedef int element;        // ���� ����(element)�� �ڷ����� int�� ���� 
element stack[STACK_SIZE];  // 1���� �迭 ���� ����

int isStackEmpty();
int isStackFull();
void push(element item);
element pop();
element peek();
void printStack();