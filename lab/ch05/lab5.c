#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	char* express = "(((3 + 8) * 2) - (4/2))";

	printf("���� ǥ���: %s\n", express);
	express = infix2prefix(express);
	express = "38+2*42/-";
	printf("���� ǥ��� : %s\n", express);

	result = evalPostfix(express);
	printf("\n\n���� ��� => %d\n", result);

	getchar();  return 0;
}