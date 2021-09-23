#include <stdio.h>
void mergeSort(int a[], int m, int n);
int size;
int main(void) {
	int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	size = sizeof(list) / sizeof(list[0]); 	// list 배열의 원소 개수
	printf("\n 정렬할 원소 >> ");
	for (i = 0; i < size; i++) printf("%4d ", list[i]);
	printf("\n\n<<<<<<<<<< 병합 정렬 수행 >>>>>>>>>>\n");
	mergeSort(list, 0, size - 1);   // 병합 정렬 함수 호출

	getchar();  return 0;
}