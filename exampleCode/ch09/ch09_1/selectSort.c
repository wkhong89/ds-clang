#include <stdio.h>
void SelectionSort(int a[], int size) {
	int i, j, t, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min]) min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d´Ü°è : ", i + 1);
		for (t = 0; t < size; t++)  printf("%3d ", a[t]);
	}
}