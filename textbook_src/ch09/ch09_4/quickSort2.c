#include <stdio.h>

int i = 0;  //�o���� �ܰ� ��¿� ����

// �־��� �κ����� �ȿ��� �Ǻ��� ��ġ�� Ȯ���Ͽ� ���� ��ġ�� ���ϴ� ����
int partition(int a[], int begin, int end, int size) {
	int  pivot, L, R, t, temp;
	L = begin;
	R = end;
	pivot = begin;	//���� �������� ù��° ���� begin�� �Ǻ����� ����
	printf("\n [%d�ܰ� : pivot = %d ] \n", ++i, a[pivot]);
	while (L < R) {
		while ((a[L] < a[pivot]) && (L < R)) L++;
		while ((a[R] >= a[pivot]) && (L < R)) R--;
		if (L < R) {					// L�� R ������ �ڸ� ��ȯ
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
			// L�� �Ǻ��� ���, ����� �Ǻ��� ��ġ(R)�� �ٽ� ����!
			if (L == pivot)	pivot = R;
		} // if(L<R)
	} // while(L<R)
  // (L=R)�� �� ���, 
  // �� �̻� ������ �� �����Ƿ� R ���ҿ� �Ǻ� ������ �ڸ��� ��ȯ�Ͽ� ������
	temp = a[pivot];
	a[pivot] = a[R];
	a[R] = temp;
	for (t = 0; t < size; t++) printf("%5d", a[t]);	// ������ ���� ���� ���
	printf("\n");
	return R;	// ���ĵǾ� Ȯ���� �Ǻ��� ��ġ ��ȯ
}

void quickSort(int a[], int begin, int end, int size) {
	int p;
	if (begin < end) {
		p = partition(a, begin, end, size);	// �Ǻ��� ��ġ�� ���� ���� ��ġ ����
		quickSort(a, begin, p - 1, size);		// �Ǻ��� ���� �κ����տ� ���� �� ������ ���ȣ��
		quickSort(a, p + 1, end, size);		// �Ǻ��� ������ �κ����տ� ���� �� ������ ���ȣ��
	}
}