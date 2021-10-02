#pragma once
typedef int element;	// 이진 탐색 트리 element의 자료형 수정

typedef struct treeNode {
	element key;				// 데이터 필드
	struct treeNode* left;  	// 왼쪽 서브 트리 링크 필드
	struct treeNode* right;	// 오른쪽 서브 트리 링크 필드
} treeNode;

void displayInorder(treeNode* root);