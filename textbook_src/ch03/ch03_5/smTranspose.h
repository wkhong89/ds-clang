#pragma once
typedef struct { // ��� ���Ҹ� �����ϱ� ���� ����ü term ����
	int row;
	int col;
	int value;
} term;

void smTranspose(term a[], term b[]);