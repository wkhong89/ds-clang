#include <stdio.h>
typedef int element;

void sequentialSearch1(element a[], int n, element key) {
	int i = 0;
	printf("\n%3d�� �˻��϶�! ->> ", key);
	while (i < n && a[i] != key) i++;
	if (i < n) printf("%3d��°�� �˻� ����! \n\n", i + 1);
	else   printf("%3d��°�� �˻� ����! \n\n", i + 1);
}

void sequentialSearch2(element a[], int n, element key) {
	int i = 0;
	printf("\n%3d�� �˻��϶�! ->> ", key);
	while (i < n && a[i] < key)  i++;
	if (a[i] == key)  printf("%3d��°�� �˻� ����!\n", i + 1);
	else  printf("%3d��°�� �˻� ����! \n", i + 1);
}