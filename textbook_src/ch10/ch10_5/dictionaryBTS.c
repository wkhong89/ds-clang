#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionaryBTS.h"
// << 이진 탐색 트리 연산 수행 : [예제 7-4] 참고 >>
// 포인터 p가 가리키는 노드와 비교하여 항목 key를 삽입하는 연산([예제 7-4] 참고)
treeNode* insertKey(treeNode* p, element key) {
	treeNode* newNode;
	int compare;

	// 삽입할 자리에 새 노드를 구성하여 연결
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = key;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}

	// 이진 트리에서 삽입할 자리 탐색
	else {
		compare = strcmp(key.word, p->key.word);
		if (compare < 0)      p->left = insertKey(p->left, key);
		else if (compare > 0)  p->right = insertKey(p->right, key);
		else  printf("\n 이미 같은 단어가 있습니다! \n");
		return p;  // 삽입한 자리 반환
	}
}

void insertWord(treeNode** root, element key) {
	*root = insertKey(*root, key);
}

// root 노드부터 탐색하여 key와 같은 노드를 찾아 삭제하는 연산
void deleteWord(treeNode* root, element key) {
	treeNode* parent, * p, * succ, * succ_parent;
	treeNode* child;

	parent = NULL;
	p = root;
	while ((p != NULL) && (strcmp(p->key.word, key.word) != 0)) {
		parent = p;
		if (strcmp(key.word, p->key.word) < 0)  p = p->left;
		else  p = p->right;
	}
	// 삭제할 노드가 없는 경우
	if (p == NULL) {
		printf("\n 삭제할 단어가 사전에 없습니다!!");
		return;
	}
	// 삭제할 노드가 단말 노드인 경우
	if ((p->left == NULL) && (p->right == NULL)) {
		if (parent != NULL) {
			if (parent->left == p) parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}
	// 삭제할 노드가 자식 노드를 한 개 가진 경우
	else if ((p->left == NULL) || (p->right == NULL)) {
		if (p->left != NULL) child = p->left;
		else  child = p->right;

		if (parent != NULL) {
			if (parent->left == p) parent->left = child;
			else  parent->right = child;
		}
		else root = child;
	}
	// 삭제할 노드가 자식 노드를 두 개 가진 경우
	else {
		succ_parent = p;
		succ = p->right;
		while (succ->left != NULL) {
			succ_parent = succ;
			succ = succ->left;
		}
		if (succ_parent->left == succ)
			succ_parent->left = succ->right;
		else   succ_parent->right = succ->right;

		p->key = succ->key;
		p = succ;
	}
	free(p);
}

// 이진 탐색 트리에서 키값이 key인 노드 위치를 탐색하는 연산
treeNode* searchDic(treeNode* root, element key) {
	treeNode* p;
	int compare;
	p = root;

	while (p != NULL) {
		compare = strcmp(key.word, p->key.word);
		if (compare < 0)      p = p->left;
		else if (compare > 0)  p = p->right;
		else {
			printf("\n찾은 단어 : %s", p->key.word);
			return p;
		}
	}
	return p;
}

// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayDic(treeNode* root) {
	if (root) {
		displayDic(root->left);
		printf("\n%s : %s", root->key.word, root->key.mean);
		displayDic(root->right);
	}
}

// 영어 사전 메뉴
void menu() {
	printf("\n*---------------------------*");
	printf("\n\t1 : 출력");
	printf("\n\t2 : 입력");
	printf("\n\t3 : 삭제");
	printf("\n\t4 : 검색");
	printf("\n\t5 : 종료");
	printf("\n*---------------------------*\n  ");
}