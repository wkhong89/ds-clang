#include <stdio.h>
#include "dijkstra.h"
#include "graphG.h"

// �ּ� �Ÿ��� ���� ���� ������ ã�� ����
int nextVertex(int n) {
	int i, min, minPos;
	min = INF;
	minPos = -1;
	for (i = 0; i < n; i++)
		if ((distance[i] < min) && !S[i]) {
			min = distance[i];
			minPos = i;
		}
	return minPos;
}

// �ִ� ��� ���ϴ� ������ ����ϴ� ����
int printStep(int step) {
	int i;
	printf("\n %3d �ܰ� : S={", step);
	for (i = 0; i < MAX_VERTICES; i++)
		if (S[i] == TRUE)
			printf("%3c", i + 65);

	if (step < 1) printf(" } \t\t\t");
	else if (step < 4) printf(" } \t\t");
	else printf(" } \t");
	printf(" distance :[ ");
	for (i = 0; i < MAX_VERTICES; i++)
		if (distance[i] == INF)
			printf("%4c", '*');
		else printf("%4d", distance[i]);
	printf("%4c", ']');
	return ++step;
}
// [�˰��� 8-3] ����
void Dijkstra_shortestPath(int start, int n) {
	int i, u, w, step = 0;

	for (i = 0; i < n; i++) {	// �ʱ�ȭ
		distance[i] = weight[start][i];
		S[i] = FALSE;
	}

	S[start] = TRUE;			// ���� ������ ���� S�� �߰�
	distance[start] = 0;		// ���� ������ �ִܰ�θ� 0���� ����

	step = printStep(0);		// 0�ܰ� ���¸� ���

	for (i = 0; i < n - 1; i++) {
		u = nextVertex(n);		// �ִ� ��θ� ����� ���� ���� u ã��
		S[u] = TRUE;			// ���� u�� ���� S�� �߰�
		for (w = 0; w < n; w++)
			if (!S[w])			// ���� S�� ���Ե��� ���� ���� �߿���
				if (distance[u] + weight[u][w] < distance[w])
					distance[w] = distance[u] + weight[u][w];	// ��� ���� ����

		step = printStep(step);	// ���� �ܰ� ���
	}
}