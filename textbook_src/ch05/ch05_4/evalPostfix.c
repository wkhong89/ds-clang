#include <string.h>
#include "stackL.h"
#include "evalPostfix.h"

// 후위 표기법 수식을 계산하는 연산
element evalPostfix(char* exp) {
	int opr1, opr2, value, i = 0;
	// char형 포인터 매개변수로 받은 수식 exp의 길이를 계산하여 length 변수에 저장
	int length = strlen(exp);
	char symbol;

	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
			value = symbol - '0';
			push(value);
		}
		else {
			opr2 = pop();
			opr1 = pop();
			// 변수 opr1과 opr2에 대해 symbol에 저장된 연산자를 연산
			switch (symbol) {
			case '+': push(opr1 + opr2); break;
			case '-': push(opr1 - opr2); break;
			case '*': push(opr1 * opr2); break;
			case '/': push(opr1 / opr2); break;
			}
		}
	}
	// 수식 exp에 대한 처리를 마친 후 스택에 남아 있는 결과값을 pop하여 반환
	return pop();
}