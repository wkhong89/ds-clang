#include <stdio.h>
#include "LinkedQueue.h"
#define RADIX 10	// ������ �ڷ���� Ű���� 10�����̹Ƿ� RADIX�� 10���� ����
#define DIGIT 2		// ������ �ڷ���� Ű���� �� �ڸ��̹Ƿ� DIGIT�� 2�� ����

// �迭 a�� �ִ� n�� ���ҿ� ���ؼ� ��� ������ �����ϴ� ����
void radixSort(int a[], int n) {
	int i, bucket, d, factor = 1;

	// ������ �ڷ��� ���, �� RADIX�� ���� 10���� ��Ŷ�� ť�� ����
	LQueueType* Q[RADIX];  // ��Ŷ ť�� ��� �����͸� ������ �迭�� ����
	for (bucket = 0; bucket < RADIX; bucket++)
		Q[bucket] = createLinkedQueue();

	// Ű���� �ڸ�����ŭ, �� �� �� ��� ������ �ݺ� ����
	for (d = 0; d < DIGIT; d++) {
		for (i = 0; i < n; i++)
			enLQueue(Q[(a[i] / factor) % RADIX], a[i]);
		for (bucket = 0, i = 0; bucket < RADIX; bucket++)
			while (!isLQEmpty(Q[bucket]))  a[i++] = deLQueue(Q[bucket]);
		printf("\n\n %d �ܰ� : ", d + 1);
		for (i = 0; i < n; i++)  printf(" %3d", a[i]);

		factor = factor * RADIX;
	}
}