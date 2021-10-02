#pragma once
#define MAX(a,b) ((a>b)?a:b)
#define MAX_DEGREE 50

typedef struct {             // 구조체 polynomial 정의
	int degree;              // 다항식의 차수를 저장할 변수
	float coef[MAX_DEGREE];  // 다항식의 각 항의 계수를 저장할 1차원 배열
} polynomial;

typedef enum {false, true} boolean; //false = 0, true = 1

void printPoly(polynomial P);

polynomial zeroP(void);
boolean isZeroP(polynomial p);
float coef(polynomial p, int e);   
float maxExp(polynomial p);
polynomial addTerm(polynomial p, float a, int e);
polynomial delTerm(polynomial p, int e);
polynomial multTerm(polynomial p, float a, int e);
polynomial addPoly(polynomial p1, polynomial p2);
polynomial addPoly2(polynomial p1, polynomial p2);
polynomial multPoly(polynomial p1, polynomial p2);