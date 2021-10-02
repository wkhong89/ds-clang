#pragma once
// 그래프 G11의 가중치 인접행렬
int weight[MAX_VERTICES][MAX_VERTICES] = {	
	{ 0, 10, 5, INF, INF },
	{ INF, 0, 2, 1, INF },
	{ INF, 3, 0, 9, 2 },
	{ INF, INF, INF, 0, 4 },
	{ 7, INF, INF, 6, 0 },
};