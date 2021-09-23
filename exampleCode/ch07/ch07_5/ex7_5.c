#include <stdio.h>
#include "avl.h"

int main(void) {
	treeNode* root_AVL = NULL;
	treeNode* root_BST = NULL;
	//////////////////////////////////////////////////////////////////
	root_AVL = insertAVLNode(&root_AVL, 50); // AVL Ʈ�� �����
	insertAVLNode(&root_AVL, 60);
	insertAVLNode(&root_AVL, 70);
	insertAVLNode(&root_AVL, 90);
	insertAVLNode(&root_AVL, 80);
	insertAVLNode(&root_AVL, 75);
	insertAVLNode(&root_AVL, 73);
	insertAVLNode(&root_AVL, 72);
	insertAVLNode(&root_AVL, 78);
	printf("\n ******* AVL Ʈ�� ��� ****************** \n\n");
	displayInorder(root_AVL); //������ȸ ��� ���
	printf("\n\n AVL Ʈ������ 70 Ž�� : ");
	searchBST(root_AVL, 70);
	printf("\n\n AVL Ʈ������ 72 Ž�� : ");
	searchBST(root_AVL, 72);
	printf("\n\n AVL Ʈ������ 76 Ž�� : ");
	searchBST(root_AVL, 76);

	/////////////////////////////////////////////////////////////////////////////
	root_BST = insertBSTNode(root_BST, 50); //BST �����
	insertBSTNode(root_BST, 60);
	insertBSTNode(root_BST, 70);
	insertBSTNode(root_BST, 90);
	insertBSTNode(root_BST, 80);
	insertBSTNode(root_BST, 75);
	insertBSTNode(root_BST, 73);
	insertBSTNode(root_BST, 72);
	insertBSTNode(root_BST, 78);
	printf("\n\n\n ******* BST ��� ************************ \n\n");
	displayInorder(root_BST);  //������ȸ ��� ���
	printf("\n\n BST���� 70 Ž�� : ");
	searchBST(root_BST, 70);
	printf("\n\n BST���� 72 Ž�� : ");
	searchBST(root_BST, 72);
	printf("\n\n BST���� 76 Ž�� : ");
	searchBST(root_BST, 76);
	getchar(); return 0;
}