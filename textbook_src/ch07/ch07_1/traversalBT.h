#pragma once
typedef char element;

typedef struct treeNode {	// ���� �ڷᱸ���� �����ϱ� ���� Ʈ���� ��� ����
	element data;
	struct treeNode* left;  // ���� ���� Ʈ���� ���� ��ũ �ʵ�
	struct treeNode* right; // ������ ���� Ʈ���� ���� ��ũ �ʵ�
} treeNode;

treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preorder(treeNode* root);
void inorder(treeNode* root);
void postorder(treeNode* root);