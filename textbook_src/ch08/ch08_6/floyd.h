#pragma once
#define INF  10000           // ���Ѵ� ��
#define MAX_VERTICES 5	// �׷����� ���� ����

int A[MAX_VERTICES][MAX_VERTICES];			// k-�ִ� ��� �迭

void printStep(int step);
void Floyd_shortestPath(int n);