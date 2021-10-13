#include <stdio.h>
//#include "addPoly.h"
#include "poly.h"

int main(void) {
	polynomial A = { 3,{ 4,3,5,0 } };    // ���׽� A�� �ʱ�ȭ
	polynomial B = { 4,{ 3,1,0,2,1 } };  // ���׽� B�� �ʱ�ȭ
	polynomial C;

	C = multPoly(A, B);   // ���׽� A, B�� ���� ������ ����

	printf("\n A(x) =");  printPoly(A);   // ���׽� A ���
	printf("\n B(x) =");  printPoly(B);   // ���׽� B ���
	printf("\n C(x) =");  printPoly(C);   // ���׽� C ���

	getchar();  
	return 0;
}