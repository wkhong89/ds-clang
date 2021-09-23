#include <stdio.h>
void shellSort(int a[], int size);

int main(void) {
	int list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]); 	// list 배열의 원소 개수
	printf("\n정렬할 원소 : ");
	for (int i = 0; i < size; i++)  printf("%3d ", list[i]);
	printf("\n\n<<<<<<<<<< 셸 정렬 수행 >>>>>>>>>>\n");
	shellSort(list, size);  // 쉘 정렬 함수 호출

	getchar();  return 0;
}