#include <stdio.h>
#define MAX 30
extern int size;
int sorted[MAX];				// 원소를 병합하면서 정렬한 상태로 저장할 배열 선언

void merge(int a[], int m, int middle, int n) {
	int i, j, k, t;
	i = m;							// 첫 번째 부분집합의 시작 위치 설정
	j = middle + 1;				// 두 번째 부분집합의 시작 위치 설정
	k = m;						// 배열 sorted에 정렬된 원소를 저장할 위치 설정

	while (i <= middle && j <= n) {
		if (a[i] <= a[j])
			sorted[k++] = a[i++];
		else
			sorted[k++] = a[j++];
	} // while
	
	if (i > middle) 
		for (t = j; t <= n; t++, k++) sorted[k] = a[t];
	else 
		for (t = i; t <= middle; t++, k++)	sorted[k] = a[t];
	
	for (t = m; t <= n; t++) 	a[t] = sorted[t];

	printf("\n 병합 정렬 >> ");
	for (t = 0; t < size; t++) printf("%4d ", a[t]);
}

void mergeSort(int a[], int m, int n) {
	int middle; 
	if (m < n) {
		middle = (m + n) / 2;
		mergeSort(a, m, middle);		// 앞 부분에 대한 분할 작업 수행
		mergeSort(a, middle + 1, n);	// 뒷 부분에 대한 분할 작업 수행
		merge(a, m, middle, n);			// 부분집합에 대하여 정렬과 병합 작업 수행 
	}
}