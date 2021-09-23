#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "dictionaryBTS.h"

int main(void) {
	int choice;
	element e;
	treeNode* dic = NULL, * temp = NULL;

	// [5 :종료] 메뉴를 선택할 때까지 메뉴에 대한 영어 사전 동작 반복
	do {
		menu(); printf("메뉴를 선택하세요 : ");
		scanf("%d", &choice); rewind(stdin);
		switch (choice) {
		case 1:
			printf("\t[사전 출력]");
			displayDic(dic); printf("\n\t[사전 끝]\n");
			break;
		case 2:
			printf("\n[단어 입력] 단어를 입력하시오 : "); gets(e.word);
			printf("\n[단어입력] 단어의 뜻을 입력하시오 : "); gets(e.mean);
			insertWord(&dic, e);
			break;
		case 3:
			printf("\n[단어 삭제] 삭제할 단어 : "); gets(e.word);
			deleteWord(dic, e);
			break;
		case 4:
			printf("\n[단어 검색] 검색할 단어 : ");
			gets(e.word);
			temp = searchDic(dic, e);
			if (temp != NULL)
				printf("\n단어 뜻 : %s", temp->key.mean);
			else printf("\n사전에 없는 단어입니다.");
			break;
		case 5: break;
		default: printf("\n없는 메뉴입니다. 다시 선택해주세요!\n");
		}
	} while (choice != 5);

	getchar(); return 0;
}