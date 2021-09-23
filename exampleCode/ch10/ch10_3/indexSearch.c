#include <stdio.h>
#include "indexSearch.h"

// 배열 a에 대한 인덱스 테이블 만들기
iTable* makeIndexTable(element a[], int size) {
	int i, n;
	n = size / INDEX_SIZE;					// 인덱스 테이블에 들어가는 배열 원소의 간격 계산
	if (size % INDEX_SIZE > 0)  n++;
	for (i = 0; i < INDEX_SIZE; i++) {		// 인덱스 테이블의  채우기
		indexTable[i].index = i * n;
		indexTable[i].key = a[i * n];
	}
	return indexTable;
}

// 색인 순차 검색 
void indexSearch(iTable indexTable[], element a[], int n, element key) {
	int i, begin, end;
	if (key < a[0] || key > a[n - 1])
		printf("\n찾는 키가 없습니다. 검색 실패! \n");

	// 인덱스 테이블을 검색하여 검색 범위 결정
	for (i = 0; i < INDEX_SIZE; i++){
		if ((indexTable[i].key <= key) && (indexTable[i + 1].key > key)) {
			begin = indexTable[i].index;
			end = indexTable[i + 1].index;
			break;
		}
		if (i == INDEX_SIZE) {
			begin = indexTable[i - 1].index;
			end = n;
		}
	}
	sequentialSearch3(a, begin, end, key);	// 검색 범위에 대한 순차검색 수행
}