#include <stdio.h>

int i = 0;  //쿽정렬 단계 출력용 변수

// 주어진 부분집합 안에서 피봇의 위치를 확정하여 분할 위치를 정하는 연산
int partition(int a[], int begin, int end, int size) {
	int  pivot, L, R, t, temp;
	L = begin;
	R = end;
	pivot = begin;	//정렬 범위에서 첫번째 원소 begin을 피봇으로 선택
	printf("\n [%d단계 : pivot = %d ] \n", ++i, a[pivot]);
	while (L < R) {
		while ((a[L] < a[pivot]) && (L < R)) L++;
		while ((a[R] >= a[pivot]) && (L < R)) R--;
		if (L < R) {					// L과 R 원소의 자리 교환
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
			// L이 피봇인 경우, 변경된 피봇의 위치(R)를 다시 저장!
			if (L == pivot)	pivot = R;
		} // if(L<R)
	} // while(L<R)
  // (L=R)이 된 경우, 
  // 더 이상 진행할 수 없으므로 R 원소와 피봇 원소의 자리를 교환하여 마무리
	temp = a[pivot];
	a[pivot] = a[R];
	a[R] = temp;
	for (t = 0; t < size; t++) printf("%5d", a[t]);	// 현재의 정렬 상태 출력
	printf("\n");
	return R;	// 정렬되어 확정된 피봇의 위치 반환
}

void quickSort(int a[], int begin, int end, int size) {
	int p;
	if (begin < end) {
		p = partition(a, begin, end, size);	// 피봇의 위치에 의해 분할 위치 결정
		quickSort(a, begin, p - 1, size);		// 피봇의 왼쪽 부분집합에 대해 퀵 정렬을 재귀호출
		quickSort(a, p + 1, end, size);		// 피봇의 오른쪽 부분집합에 대해 퀵 정렬을 재귀호출
	}
}