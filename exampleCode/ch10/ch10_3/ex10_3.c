#include <stdio.h>
#include "sequentialSearch.h"
#include "indexSearch.h"

int main(void) {
	element a[] = { 1, 2, 8, 9, 11, 19, 29 };
	int i, size = sizeof(a) / sizeof(a[0]); //배열 원소의 개수
	iTable* indexTable;

	printf("\n\t<< 검색 대상 자료 >>\n");
	for (i = 0; i < size; i++) printf("%5d", a[i]); puts("");

	printf("\n\n\t<< 순차 검색 >>\n");
	sequentialSearch2(a, size, 9); // 배열 a의 n개 원소 중에서 탐색키가 9인 원소 검색
	sequentialSearch2(a, size, 6); // 배열 a의 n개 원소 중에서 탐색키가 6인 원소 검색

	printf("\n\n\t<< 색인 순차 검색 >>\n");
	indexTable= makeIndexTable(a, size);
	indexSearch(indexTable, a, size, 9); // 배열 a의 n개 원소 중에서 탐색키가 9인 원소 검색
	indexSearch(indexTable, a, size, 6); // 배열 a의 n개 원소 중에서 탐색키가 6인 원소 검색

	getchar();  return 0;
}