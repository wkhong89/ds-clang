#include <stdio.h>
#include "node2.h"
// ���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%d_", root->key); //element���� �°� ������� ����
		displayInorder(root->right);
	}
}