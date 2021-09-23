#include <stdio.h>
#include "bst.h"

// 트리 정렬 연산
void treeSort(int a[], int n) {
	treeNode* root = NULL;			// 공백 이진 탐색 트리 생성
	root = insertBSTNode(root, a[0]);	// a[0]을 공백 이진 탐색 트리의 루트로 삽입

	for (int i = 1; i < n; i++)		// a[1]~a[n-1]의 원소들을
		insertBSTNode(root, a[i]); // 삽입하면서 이진 탐색 트리 구성
	displayInorder(root);			 // 이진 탐색 트리를 중위 순회한 경로 출력
}