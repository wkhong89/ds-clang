#include "listS.h"
int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;  //move�� �ڸ��̵� Ƚ�� ī����
	//������ ũ�⸦ ���Ͽ� ���� ��ġ k ã��
	for (i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) //���� ���Ұ� ���� ū ������ ���
		k = n;

	// ������ ���Һ��� k+1���ұ��� �ڷ� �ڸ��̵�
	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;	//�ڸ� �̵��Ͽ� ���� �ڸ� k�� ���� ���� ���� 
	return move;
}
int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0;  //move�� �ڸ��̵� Ƚ�� ī����
	//������ ũ�⸦ ���Ͽ� ���� ��ġ k ã��
	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == n) move = n;

	// k+1 ���� ������ ���ұ��� ������ �ڸ��̵�
	for (i = k; i < n - 1; i++) {
		L[i] = L[i + 1];
		move++;
	}

	return move;
}