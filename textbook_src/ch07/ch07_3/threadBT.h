#pragma once
typedef struct treeThNode {	// ������ ���� Ʈ���� ��� ����
	char data;
	struct treeThNode* left;  // ���� ���� Ʈ���� ���� ��ũ �ʵ�
	struct treeThNode* right; // ������ ���� Ʈ���� ���� ��ũ �ʵ�
	int isThreadRight;      // �ļ��ڿ� ���� ������ �±� �ʵ�
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);