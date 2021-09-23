#pragma once
typedef struct treeThNode {	// 스레드 이진 트리의 노드 정의
	char data;
	struct treeThNode* left;  // 왼쪽 서브 트리에 대한 링크 필드
	struct treeThNode* right; // 오른쪽 서브 트리에 대한 링크 필드
	int isThreadRight;      // 후속자에 대한 스레드 태그 필드
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);