#include <stdio.h>
#include "bst.h"

// Ʈ�� ���� ����
void treeSort(int a[], int n) {
	treeNode* root = NULL;			// ���� ���� Ž�� Ʈ�� ����
	root = insertBSTNode(root, a[0]);	// a[0]�� ���� ���� Ž�� Ʈ���� ��Ʈ�� ����

	for (int i = 1; i < n; i++)		// a[1]~a[n-1]�� ���ҵ���
		insertBSTNode(root, a[i]); // �����ϸ鼭 ���� Ž�� Ʈ�� ����
	displayInorder(root);			 // ���� Ž�� Ʈ���� ���� ��ȸ�� ��� ���
}