#include <stdio.h>
#include "dijkstra.h"

int main(void) {
	int i, j;
	extern int weight[MAX_VERTICES][MAX_VERTICES];

	printf("\n ********** ����ġ ���� ��� **********\n\n");
	for (i = 0; i < MAX_VERTICES; i++) {
		for (j = 0; j < MAX_VERTICES; j++) {
			if (weight[i][j] == INF)
				printf("%4c", '*');
			else printf("%4d", weight[i][j]);
		}
		printf("\n\n");
	}

	printf("\n ********* ���ͽ�Ʈ�� �ִ� ��� ���ϱ� **********\n");
	Dijkstra_shortestPath(0, MAX_VERTICES);

	getchar();  return 0;
}