#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

void menu(void);

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;

	// [�׸� 7-38]�� ���� �ʱ� ���� Ž�� Ʈ���� �����ϰ� 
	// ��� G�� ��Ʈ ��� ������ root�� ����
	root = insertBSTNode(root, 'G');
	insertBSTNode(root, 'I');
	insertBSTNode(root, 'H');
	insertBSTNode(root, 'D');
	insertBSTNode(root, 'B');
	insertBSTNode(root, 'M');
	insertBSTNode(root, 'N');
	insertBSTNode(root, 'A');
	insertBSTNode(root, 'J');
	insertBSTNode(root, 'E');
	insertBSTNode(root, 'Q');

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - '0') {
		case 1:	printf("\t[���� Ʈ�� ���]  ");
			displayInorder(root);  printf("\n");
			break;

		case 2:	printf("������ ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			insertBSTNode(root, key);
			break;

		case 3:	printf("������ ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			deleteBSTNode(root, key);
			break;

		case 4: printf("ã�� ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %c�� ã�ҽ��ϴ�! \n", foundedNode->key);
			else  printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
			break;

		case 5: 	return 0;

		default: printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���! \n");
			break;
		}
	}
}

void menu(void) {
	printf("\n*---------------------------*");
	printf("\n\t1 : Ʈ�� ���");
	printf("\n\t2 : ���� ����");
	printf("\n\t3 : ���� ����");
	printf("\n\t4 : ���� �˻�");
	printf("\n\t5 : ����");
	printf("\n*---------------------------*");
	printf("\n�޴��Է� >> ");
}