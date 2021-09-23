#include <stdio.h>
#include <stdlib.h>
#include "threadBT.h"

// data를 루트 노드로 하여 왼쪽 서브 트리와 오른쪽 서브 트리를 연결하는 연산
treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight) {
	treeThNode* root = (treeThNode*)malloc(sizeof(treeThNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	root->isThreadRight = isThreadRight;
	return root;
}

// 후속자 노드를 반환하는 연산
treeThNode* findThreadSuccessor(treeThNode* p) {
	treeThNode* q = p->right;
	if (q == NULL) return q;
	if (p->isThreadRight == 1) return q;
	while (q->left != NULL) q = q->left;
	return q;
}

// 스레드 이진 트리의 중위 순회
void threadInorder(treeThNode* root) {
	treeThNode* q;
	q = root;
	while (q->left) q = q->left;
	do {
		printf("%3c", q->data);
		q = findThreadSuccessor(q);
	} while (q);
}