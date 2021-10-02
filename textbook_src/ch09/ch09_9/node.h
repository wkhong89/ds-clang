#pragma once
typedef int element;		// ���� Ž�� Ʈ�� element�� �ڷ��� ����

typedef struct treeNode {
	element key;				// ������ �ʵ�
	struct treeNode* left;  	// ���� ���� Ʈ�� ��ũ �ʵ�
	struct treeNode* right;	// ������ ���� Ʈ�� ��ũ �ʵ�
} treeNode;

void displayInorder(treeNode* root);