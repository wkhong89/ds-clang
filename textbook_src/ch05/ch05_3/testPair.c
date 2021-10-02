#include <stdio.h>
#include <string.h>
#include "stackL.h"
#include "testPair.h"

// ������ ��ȣ�� �˻��ϴ� ����
int testPair(char* exp) {
	char symbol, open_pair;
	// char�� ������ �Ű������� ���� ���� exp�� ���̸� ����Ͽ� length ������ ����
	int i, length = strlen(exp);
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		switch (symbol) {
		// (1) ���� ��ȣ�� ���ÿ� ����
		case '(':
		case '[':
		case '{':
			push(symbol); break;
		// (2) ������ ��ȣ�� ������,
		case ')':
		case ']':
		case '}':
			if (isStackEmpty()) return 0;
			else {
				// (2)-1 ���ÿ��� ���������� ���� ��ȣ�� ����
				open_pair = pop();
				// (2)-2 ��ȣ ���� �´��� �˻�
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '[' && symbol != ']') ||
					(open_pair == '{' && symbol != '}'))
					// (2)-3 ��ȣ ���� Ʋ���� ���� ����
					return 0;
				// (2)-4 ��ȣ ���� ������ ���� symbol �˻縦 �����
				else break;
			}
		}
	}
	if (top == NULL) return 1;// ���� �˻縦 ��ģ �� ������ �����̸� 1�� ��ȯ
	else return 0;            // ������ �ƴϸ� 0�� ��ȯ(���� ��ȣ Ʋ��)
}