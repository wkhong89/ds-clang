#include <stdio.h>
#include "dijkstra.h"
#include "graphG.h"

// 최소 거리를 갖는 다음 정점을 찾는 연산
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

// 최단 경로 구하는 과정을 출력하는 연산
int printStep(int step) {
	int i;
	printf("\n %3d 단계 : S={", step);
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
// [알고리즘 8-3] 구현
void Dijkstra_shortestPath(int start, int n) {
	int i, u, w, step = 0;

	for (i = 0; i < n; i++) {	// 초기화
		distance[i] = weight[start][i];
		S[i] = FALSE;
	}

	S[start] = TRUE;			// 시작 정점을 집합 S에 추가
	distance[start] = 0;		// 시작 정점의 최단경로를 0으로 설정

	step = printStep(0);		// 0단계 상태를 출력

	for (i = 0; i < n - 1; i++) {
		u = nextVertex(n);		// 최단 경로를 만드는 다음 정점 u 찾기
		S[u] = TRUE;			// 정점 u를 집합 S에 추가
		for (w = 0; w < n; w++)
			if (!S[w])			// 집합 S에 포함되지 않은 정점 중에서
				if (distance[u] + weight[u][w] < distance[w])
					distance[w] = distance[u] + weight[u][w];	// 경로 길이 수정

		step = printStep(step);	// 현재 단계 출력
	}
}