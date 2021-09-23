#pragma once
typedef char element;

typedef struct treeNode {	// 연결 자료구조로 구성하기 위해 트리의 노드 정의
	element data;
	struct treeNode* left;  // 왼쪽 서브 트리에 대한 링크 필드
	struct treeNode* right; // 오른쪽 서브 트리에 대한 링크 필드
} treeNode;

treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preorder(treeNode* root);
void inorder(treeNode* root);
void postorder(treeNode* root);