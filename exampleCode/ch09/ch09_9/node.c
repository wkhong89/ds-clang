#include <stdio.h>
#include "node.h"
// ���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%5d", root->key);  //��� ���� ����
		displayInorder(root->right);
	}
}