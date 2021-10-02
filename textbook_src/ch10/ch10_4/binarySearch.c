#include <stdio.h>
typedef int element;
int cnt=0;	// ���� �˻��� ���� Ƚ��

void binarySearch(element a[], int begin, int end, element key) {
	int middle;
	cnt++;						// ���� �˻� ���� Ƚ�� 1 ����
	if (begin == end) {			// �˻� ������ �� ���� ���
		if (key == a[begin]) printf("%3d��°�� �˻� ����!\n", cnt);
		else printf("%3d��°�� �˻� ����! \n", cnt);
		return;
	}

	middle = (begin + end) / 2;  // �˻� ������ ���� ���ҵǴ� ���� ��ġ ����
	if (key == a[middle])  printf("%3d��°�� �˻� ����!\n", cnt);
	else if (key < a[middle] && (middle - 1 >= begin))
		binarySearch(a, begin, middle - 1, key);
	else if (key > a[middle] && (middle + 1 <= end))
		binarySearch(a, middle + 1, end, key);
	else printf("%3d��°�� �˻� ����! \n", cnt);
}