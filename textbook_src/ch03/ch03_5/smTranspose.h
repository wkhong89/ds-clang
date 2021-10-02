#pragma once
typedef struct { // 행렬 원소를 저장하기 위한 구조체 term 정의
	int row;
	int col;
	int value;
} term;

void smTranspose(term a[], term b[]);