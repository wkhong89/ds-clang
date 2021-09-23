#pragma once
#define MAX(a,b) ((a>b)?a:b)
#define MAX_DEGREE 50

typedef struct {             // ����ü polynomial ����
	int degree;              // ���׽��� ������ ������ ����
	float coef[MAX_DEGREE];  // ���׽��� �� ���� ����� ������ 1���� �迭
} polynomial;

polynomial addPoly(polynomial A, polynomial B);
void printPoly(polynomial P);