#pragma once
#define INF  10000           // 무한대 값
#define MAX_VERTICES 5	// 그래프의 정점 개수

int A[MAX_VERTICES][MAX_VERTICES];			// k-최단 경로 배열

void printStep(int step);
void Floyd_shortestPath(int n);