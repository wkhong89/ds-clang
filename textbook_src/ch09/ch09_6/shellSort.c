#include <stdio.h>
void intervalSort(int a[], int begin, int end, int interval) {
	int i, j, item;
	for (i = begin + interval; i <= end; i = i + interval) {
		item = a[i];
		for (j = i - interval; j >= begin && item < a[j]; j = j - interval)
			a[j + interval] = a[j];
		a[j + interval] = item;
	}
}

void shellSort(int a[], int size) {
	int i, interval;
	interval = size / 2;
	while (interval >= 1) {
		for (i = 0; i < interval; i++)  intervalSort(a, i, size - 1, interval);
		printf("\n interval=%d >> ", interval);
		for (i = 0; i < size; i++) printf("%d ", a[i]);
		printf("\n");
		interval = interval / 2;
	}
}