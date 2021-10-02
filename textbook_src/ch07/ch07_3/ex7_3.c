#include <stdio.h>
#include "threadBT.h"

int main(void) {
	// (A*B-C/D) 수식 이진 트리 만들기 
	treeThNode* n7 = makeRootThNode('D', NULL, NULL, 0);
	treeThNode* n6 = makeRootThNode('C', NULL, NULL, 1);
	treeThNode* n5 = makeRootThNode('B', NULL, NULL, 1);
	treeThNode* n4 = makeRootThNode('A', NULL, NULL, 1);
	treeThNode* n3 = makeRootThNode('/', n6, n7, 0);
	treeThNode* n2 = makeRootThNode('*', n4, n5, 0);
	treeThNode* n1 = makeRootThNode('-', n2, n3, 0);

	n4->right = n2;
	n5->right = n1;
	n6->right = n3;

	printf("\n 스레드 이진 트리의 중위 순회 : ");
	threadInorder(n1);

	getchar();  return 0;
}