#pragma once
// ���� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct ListNode {
	struct ListNode* llink;   // ����(����) ��忡 ���� ��ũ
	char data[4];
	struct ListNode* rlink;   // ������(����) ��忡 ���� ��ũ
} listNode;

// ����Ʈ ������ ��Ÿ���� head ��带 ����ü�� ����
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode* pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);