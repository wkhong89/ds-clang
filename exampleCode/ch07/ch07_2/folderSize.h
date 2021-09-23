#pragma once
int FolderSize; 
typedef struct treeNode {	// 트리의 노드 구조 정의
	int size;				        // 데이터 필드
	struct treeNode* left;   	// 왼쪽 서브 트리에 대한 링크 필드
	struct treeNode* right;	// 오른쪽 서브 트리에 대한 링크 필드
} treeNode;

treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode);
int postorder_FolderSize(treeNode* root);