#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(void) {
	linkedList_h* L;
	listNode* p;
	L = createLinkedList_h();		// ���� ����Ʈ ����

	printf("(1) ����Ʈ�� [��],[��],[��] ��� �����ϱ�! \n");
	insertLastNode(L, "��"); insertLastNode(L, "��"); insertLastNode(L, "��");
	printList(L); 

	printf("\n(2) ����Ʈ���� [��] ��� Ž���ϱ�! \n");
	p = searchNode(L, "��");
	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
	
	printf("\n(3) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�! \n");
	insertMiddleNode(L, p, "��");
	printList(L); 

	printf("\n(4) ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(L, "��");		// ������ ��� ��ġ p�� ã��
	deleteNode(L, p);			// ������ p ��� ����
	printList(L); 

	printf("\n(5) ����Ʈ ������ �������� �ٲٱ�! \n");
	reverse(L);
	printList(L);

	freeLinkedList_h(L);		// ����Ʈ�� �޸� ����
	getchar(); 

	return 0;
}