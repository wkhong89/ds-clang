#pragma once
#define MAX_WORD_LENGTH 20	// ���� ������ �� �ܾ� ���̸� 20���� ����
#define MAX_MEAN_LENGTH 200	// ���� ������ �� �ܾ� ���� ���̸� 200���� ����

// ���� ���� �׸��� ���� ����
typedef struct {
	char word[MAX_WORD_LENGTH];
	char mean[MAX_MEAN_LENGTH];
}element;

// ���� ���� ���� Ʈ���� ��� ���� ����
typedef struct treeNode {
	element key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

treeNode* insertKey(treeNode* p, element key);
void insertWord(treeNode** root, element key);
void deleteWord(treeNode* root, element key);
treeNode* searchDic(treeNode* root, element key);
// ���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
void displayDic(treeNode* root);
void menu();