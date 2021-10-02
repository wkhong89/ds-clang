#include <stdio.h>
#include "node.h"
// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%5d", root->key);  //출력 형식 변경
		displayInorder(root->right);
	}
}