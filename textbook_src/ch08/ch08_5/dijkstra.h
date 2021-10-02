#pragma once
#define TRUE  1
#define FALSE 0
#define INF  10000           // 무한대 값
#define MAX_VERTICES 5	// 그래프의 정점 개수

int distance[MAX_VERTICES];	// 시작 정점으로부터의 최단 경로 길이 저장
int S[MAX_VERTICES];				// 정점의 집합 S

int nextVertex(int n);
int printStep(int step);
void Dijkstra_shortestPath(int start, int n);