#pragma once
#define MAX_WORD_LENGTH 20	// 영어 사전에 들어갈 단어 길이를 20으로 정의
#define MAX_MEAN_LENGTH 200	// 영어 사전에 들어갈 단어 뜻의 길이를 200으로 정의

// 영어 사전 항목의 구조 정의
typedef struct {
	char word[MAX_WORD_LENGTH];
	char mean[MAX_MEAN_LENGTH];
}element;

// 영어 사전 이진 트리의 노드 구조 정의
typedef struct treeNode {
	element key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

treeNode* insertKey(treeNode* p, element key);
void insertWord(treeNode** root, element key);
void deleteWord(treeNode* root, element key);
treeNode* searchDic(treeNode* root, element key);
// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayDic(treeNode* root);
void menu();