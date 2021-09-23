#pragma once
#define INDEX_SIZE 3						// 인덱스 테이블의 크기를 3으로 정의
typedef int element;

// 인덱스 테이블의 구조(index, key)를 정의
typedef struct {
	int index;
	element key;
} iTable;

iTable indexTable[INDEX_SIZE];				// 인덱스 테이블 indexTable 생성

iTable* makeIndexTable(element a[], int size);
void indexSearch(iTable indexTable[], element a[], int n, element key);