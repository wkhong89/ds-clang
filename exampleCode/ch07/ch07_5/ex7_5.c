#include <stdio.h>
#include "avl.h"

int main(void) {
	treeNode* root_AVL = NULL;
	treeNode* root_BST = NULL;
	//////////////////////////////////////////////////////////////////
	root_AVL = insertAVLNode(&root_AVL, 50); // AVL 트리 만들기
	insertAVLNode(&root_AVL, 60);
	insertAVLNode(&root_AVL, 70);
	insertAVLNode(&root_AVL, 90);
	insertAVLNode(&root_AVL, 80);
	insertAVLNode(&root_AVL, 75);
	insertAVLNode(&root_AVL, 73);
	insertAVLNode(&root_AVL, 72);
	insertAVLNode(&root_AVL, 78);
	printf("\n ******* AVL 트리 출력 ****************** \n\n");
	displayInorder(root_AVL); //중위순회 경로 출력
	printf("\n\n AVL 트리에서 70 탐색 : ");
	searchBST(root_AVL, 70);
	printf("\n\n AVL 트리에서 72 탐색 : ");
	searchBST(root_AVL, 72);
	printf("\n\n AVL 트리에서 76 탐색 : ");
	searchBST(root_AVL, 76);

	/////////////////////////////////////////////////////////////////////////////
	root_BST = insertBSTNode(root_BST, 50); //BST 만들기
	insertBSTNode(root_BST, 60);
	insertBSTNode(root_BST, 70);
	insertBSTNode(root_BST, 90);
	insertBSTNode(root_BST, 80);
	insertBSTNode(root_BST, 75);
	insertBSTNode(root_BST, 73);
	insertBSTNode(root_BST, 72);
	insertBSTNode(root_BST, 78);
	printf("\n\n\n ******* BST 출력 ************************ \n\n");
	displayInorder(root_BST);  //중위순회 경로 출력
	printf("\n\n BST에서 70 탐색 : ");
	searchBST(root_BST, 70);
	printf("\n\n BST에서 72 탐색 : ");
	searchBST(root_BST, 72);
	printf("\n\n BST에서 76 탐색 : ");
	searchBST(root_BST, 76);
	getchar(); return 0;
}