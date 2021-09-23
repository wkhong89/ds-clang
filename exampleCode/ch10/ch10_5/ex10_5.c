#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "dictionaryBTS.h"

int main(void) {
	int choice;
	element e;
	treeNode* dic = NULL, * temp = NULL;

	// [5 :����] �޴��� ������ ������ �޴��� ���� ���� ���� ���� �ݺ�
	do {
		menu(); printf("�޴��� �����ϼ��� : ");
		scanf("%d", &choice); rewind(stdin);
		switch (choice) {
		case 1:
			printf("\t[���� ���]");
			displayDic(dic); printf("\n\t[���� ��]\n");
			break;
		case 2:
			printf("\n[�ܾ� �Է�] �ܾ �Է��Ͻÿ� : "); gets(e.word);
			printf("\n[�ܾ��Է�] �ܾ��� ���� �Է��Ͻÿ� : "); gets(e.mean);
			insertWord(&dic, e);
			break;
		case 3:
			printf("\n[�ܾ� ����] ������ �ܾ� : "); gets(e.word);
			deleteWord(dic, e);
			break;
		case 4:
			printf("\n[�ܾ� �˻�] �˻��� �ܾ� : ");
			gets(e.word);
			temp = searchDic(dic, e);
			if (temp != NULL)
				printf("\n�ܾ� �� : %s", temp->key.mean);
			else printf("\n������ ���� �ܾ��Դϴ�.");
			break;
		case 5: break;
		default: printf("\n���� �޴��Դϴ�. �ٽ� �������ּ���!\n");
		}
	} while (choice != 5);

	getchar(); return 0;
}