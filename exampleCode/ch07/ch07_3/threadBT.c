#include <stdio.h>
#include <stdlib.h>
#include "threadBT.h"

// data�� ��Ʈ ���� �Ͽ� ���� ���� Ʈ���� ������ ���� Ʈ���� �����ϴ� ����
treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight) {
	treeThNode* root = (treeThNode*)malloc(sizeof(treeThNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	root->isThreadRight = isThreadRight;
	return root;
}

// �ļ��� ��带 ��ȯ�ϴ� ����
treeThNode* findThreadSuccessor(treeThNode* p) {
	treeThNode* q = p->right;
	if (q == NULL) return q;
	if (p->isThreadRight == 1) return q;
	while (q->left != NULL) q = q->left;
	return q;
}

// ������ ���� Ʈ���� ���� ��ȸ
void threadInorder(treeThNode* root) {
	treeThNode* q;
	q = root;
	while (q->left) q = q->left;
	do {
		printf("%3c", q->data);
		q = findThreadSuccessor(q);
	} while (q);
}