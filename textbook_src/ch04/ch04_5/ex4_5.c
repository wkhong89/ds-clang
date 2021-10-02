#include "LinkedPoly.h"

int main(void) {
	ListHead* A, * B, * C;

	// 공백 다항식 리스트 A, B, C 생성
	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();

	appendTerm(A, 4, 3);	// 다항식 리스트 A에 4x3 노드 추가
	appendTerm(A, 3, 2);	// 다항식 리스트 A에 3x2 노드 추가
	appendTerm(A, 5, 1);	// 다항식 리스트 A에 5x1 노드 추가
	printf("\n A(x) =");
	printPoly(A);			// 다항식 리스트 A 출력

	appendTerm(B, 3, 4);	// 다항식 리스트 B에 3x4 노드 추가
	appendTerm(B, 1, 3);	// 다항식 리스트 B에 1x3 노드 추가
	appendTerm(B, 2, 1);	// 다항식 리스트 B에 2x1 노드 추가
	appendTerm(B, 1, 0);	// 다항식 리스트 B에 1x0 노드 추가
	printf("\n B(x) =");
	printPoly(B);			// 다항식 리스트 B 출력

	addPoly(A, B, C);		// 다항식의 덧셈 연산 수행
	printf("\n C(x) =");
	printPoly(C);			// 다항식 리스트 C 출력

	getchar();  return 0;
}