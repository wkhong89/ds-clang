#include <stdio.h>
#include "LinkedQueue.h"
#define RADIX 10	// 정렬할 자료들의 키값이 10진수이므로 RADIX를 10으로 정의
#define DIGIT 2		// 정렬할 자료들의 키값이 두 자리이므로 DIGIT를 2로 정의

// 배열 a에 있는 n개 원소에 대해서 기수 정렬을 수행하는 연산
void radixSort(int a[], int n) {
	int i, bucket, d, factor = 1;

	// 정렬할 자료의 기수, 즉 RADIX에 따라 10개의 버킷을 큐로 생성
	LQueueType* Q[RADIX];  // 버킷 큐의 헤드 포인터를 포인터 배열로 선언
	for (bucket = 0; bucket < RADIX; bucket++)
		Q[bucket] = createLinkedQueue();

	// 키값의 자릿수만큼, 즉 두 번 기수 정렬을 반복 수행
	for (d = 0; d < DIGIT; d++) {
		for (i = 0; i < n; i++)
			enLQueue(Q[(a[i] / factor) % RADIX], a[i]);
		for (bucket = 0, i = 0; bucket < RADIX; bucket++)
			while (!isLQEmpty(Q[bucket]))  a[i++] = deLQueue(Q[bucket]);
		printf("\n\n %d 단계 : ", d + 1);
		for (i = 0; i < n; i++)  printf(" %3d", a[i]);

		factor = factor * RADIX;
	}
}