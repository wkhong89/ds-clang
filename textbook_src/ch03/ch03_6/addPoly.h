#pragma once
#define MAX(a,b) ((a>b)?a:b)
#define MAX_DEGREE 50

typedef struct {             // 구조체 polynomial 정의
	int degree;              // 다항식의 차수를 저장할 변수
	float coef[MAX_DEGREE];  // 다항식의 각 항의 계수를 저장할 1차원 배열
} polynomial;

polynomial addPoly(polynomial A, polynomial B);
void printPoly(polynomial P);