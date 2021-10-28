#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	char* express = "(((3 + 8) * 2) - (4/2))";

	printf("중위 표기식: %s\n", express);
	express = infix2prefix(express);
	express = "38+2*42/-";
	printf("후위 표기식 : %s\n", express);

	result = evalPostfix(express);
	printf("\n\n연산 결과 => %d\n", result);

	getchar();  return 0;
}