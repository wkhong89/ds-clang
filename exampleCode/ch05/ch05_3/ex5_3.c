#include <stdio.h>
#include "stackL.h"
#include "testPair.h"

int main(void) {
	char* express = "{(A+B)-3}*5+[{cos(x+y)+7}-1]*4";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\n������ ��ȣ�� �°� ���Ǿ����ϴ�!\n");
	else
		printf("\n\n������ ��ȣ�� Ʋ�Ƚ��ϴ�!\n");

	getchar();  return 0;
}