#pragma once
#define TRUE  1
#define FALSE 0
#define INF  10000           // ���Ѵ� ��
#define MAX_VERTICES 5	// �׷����� ���� ����

int distance[MAX_VERTICES];	// ���� �������κ����� �ִ� ��� ���� ����
int S[MAX_VERTICES];				// ������ ���� S

int nextVertex(int n);
int printStep(int step);
void Dijkstra_shortestPath(int start, int n);