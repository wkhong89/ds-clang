#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef int element;

int main(void) {
	element a[] = { 1, 2, 8, 9, 11, 19, 29 }, key;
	int i, size = sizeof(a) / sizeof(a[0]); //배열 원소의 개수
	char more;
	extern int cnt;

	printf("\n\t<< 검색 대상 자료 >>\n");
	for (i = 0; i < size; i++) printf("%5d", a[i]); puts("");
	do {
		cnt = 0;
		printf("\n\n검색할 키를 입력하세요 : ");  scanf("%d", &key);
		printf("\n%3d를 검색하라! ->> ", key);
		binarySearch(a, 0, size - 1, key); 

		printf("\n\n검색을 계속하려면 y를 누르세요>> "); scanf("  %c", &more);
	} while ( more == 'y');

	getchar();  return 0;
}