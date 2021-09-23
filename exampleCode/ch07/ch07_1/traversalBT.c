#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

// data�� ��Ʈ ���� �Ͽ� ���� ���� Ʈ���� ������ ���� Ʈ���� �����ϴ� ����
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

// ���� Ʈ���� ���� ���� ��ȸ ����
void preorder(treeNode* root) {
	if (root) {
		printf("%c", root->data);  //�۾�D
		preorder(root->left);       //�۾�L
		preorder(root->right);	 //�۾�R
	}
}

// ���� Ʈ���� ���� ���� ��ȸ ����
void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);        //�۾�L
		printf("%c", root->data); //�۾�D
		inorder(root->right);      //�۾�R
	}
}

// ���� Ʈ���� ���� ���� ��ȸ ����
void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);    //�۾�L
		postorder(root->right);  //�۾�R
		printf("%c", root->data); //�۾�D
	}
}