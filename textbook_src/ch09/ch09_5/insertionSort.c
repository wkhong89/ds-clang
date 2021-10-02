#include <stdio.h>

void insertionSort(int a[], int size) {
	int i, j, t, temp;

	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > temp)) {
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		printf("\n %d´Ü°è : ", i);
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}