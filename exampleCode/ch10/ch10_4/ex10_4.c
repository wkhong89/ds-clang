#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef int element;

int main(void) {
	element a[] = { 1, 2, 8, 9, 11, 19, 29 }, key;
	int i, size = sizeof(a) / sizeof(a[0]); //�迭 ������ ����
	char more;
	extern int cnt;

	printf("\n\t<< �˻� ��� �ڷ� >>\n");
	for (i = 0; i < size; i++) printf("%5d", a[i]); puts("");
	do {
		cnt = 0;
		printf("\n\n�˻��� Ű�� �Է��ϼ��� : ");  scanf("%d", &key);
		printf("\n%3d�� �˻��϶�! ->> ", key);
		binarySearch(a, 0, size - 1, key); 

		printf("\n\n�˻��� ����Ϸ��� y�� ��������>> "); scanf("  %c", &more);
	} while ( more == 'y');

	getchar();  return 0;
}