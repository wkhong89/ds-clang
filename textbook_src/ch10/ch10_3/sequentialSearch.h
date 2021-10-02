#pragma once
typedef int element;

void sequentialSearch1(element a[], int n, element key); //비정렬데이터에서 순차검색
void sequentialSearch2(element a[], int n, element key); //정렬데이터에서 순차검색
void sequentialSearch3(element a[], int begin, int end, element key); //정렬데이터의 지정 범위 안에서 순차검색