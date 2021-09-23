#include <stdio.h>
#include "addPoly.h"

int main(void) {
	polynomial A = { 3,{ 4,3,5,0 } };    // 다항식 A의 초기화
	polynomial B = { 4,{ 3,1,0,2,1 } };  // 다항식 B의 초기화
	polynomial C;

	C = addPoly(A, B);   // 다항식 A, B에 대한 덧셈을 수행하기 위해 addPoly 함수 호출 

	printf("\n A(x) =");  printPoly(A);   // 다항식 A 출력
	printf("\n B(x) =");  printPoly(B);   // 다항식 B 출력
	printf("\n C(x) =");  printPoly(C);   // 다항식 C 출력

	getchar();  return 0;
}