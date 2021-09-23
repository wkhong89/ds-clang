#include <stdio.h>
#include "folderSize.h"

int main(void) {
	//이진 트리 생성하기
	treeNode* F11 = makeRootNode(120, NULL, NULL);
	treeNode* F10 = makeRootNode(55, NULL, NULL);
	treeNode* F9 = makeRootNode(100, NULL, NULL);
	treeNode* F8 = makeRootNode(200, NULL, NULL);
	treeNode* F7 = makeRootNode(68, F10, F11);
	treeNode* F6 = makeRootNode(40, NULL, NULL);
	treeNode* F5 = makeRootNode(15, NULL, NULL);
	treeNode* F4 = makeRootNode(2, F8, F9);
	treeNode* F3 = makeRootNode(10, F6, F7);
	treeNode* F2 = makeRootNode(0, F4, F5);
	treeNode* F1 = makeRootNode(0, F2, F3);

	FolderSize = 0;
	printf("\n\n C:\\의 용량 : %d M \n", postorder_FolderSize(F2));
	FolderSize = 0;
	printf("\n D:\\의 용량 : %d M \n", postorder_FolderSize(F3));
	FolderSize = 0;
	printf("\n 내 컴퓨터의 전체 용량 : %d M \n", postorder_FolderSize(F1));

	getchar(); return 0;
}