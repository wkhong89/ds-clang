#include <stdio.h>

int main(void) {
	int i, n = 0, *ptr;
	int sale[2][4] = { { 63, 84, 140, 130 },
	{ 157, 209, 251, 312 } }; // 2���� �迭�� �ʱ�ȭ

	ptr = &sale[0][0];
	for (i = 0; i < 8; i++) {
		printf("\n address : %u sale %d = %d", ptr, i, *ptr);
		ptr++;
	}
	getchar();  return 0;
}