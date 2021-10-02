#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

// ���� ���� ���� ����Ʈ�� �����ϴ� ����
linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));	// ��� ��� �Ҵ�
	DL->head = NULL;					// ���� ����Ʈ�̹Ƿ� NULL�� ����
	return DL;
}

// ���� ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList_h* DL) {
	listNode* p;
	printf(" DL = (");
	p = DL->head;

	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

// pre �ڿ� ��带 �����ϴ� ����
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)	// ���� �ڸ��� ���� ��尡 �ִ� ���
			newNode->rlink->llink = newNode;
	}
}

// ���� ���� ����Ʈ���� old ��带 �����ϴ� ����
void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL) return;	// ���� ����Ʈ�� ���, ���� ���� �ߴ�		
	else if (old == NULL) return;	// ������ ��尡 ���� ���, ���� ���� �ߴ�	
	else {
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
		free(old);					// ���� ����� �޸� ����	 		
	}
}

// ����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return temp;
}