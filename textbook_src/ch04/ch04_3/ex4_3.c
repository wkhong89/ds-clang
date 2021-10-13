#include <stdio.h>
#include "CircularLinkedList.h"

int main(void) {
	linkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h();		// ���� ���� ���� ����Ʈ ����
	printf("(1) ���� ���� ����Ʈ �����ϱ�! \n");
	printList(CL);

	printf("\n(2) ���� ���� ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(CL, "��");
	printList(CL);

	printf("\n(3) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��"); insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("\n(4) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��"); insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("\n(5) ���� ���� ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��");  deleteNode(CL, p);
	printList(CL);  	getchar();
	return 0;
}