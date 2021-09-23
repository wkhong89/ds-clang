#pragma once
#define MAX_VERTEX 30

// 그래프를 인접 행렬로 표현하기 위한 구조체 정의
typedef struct graphType {
	int n;									                 // 그래프의 정점 개수
	int adjMatrix[MAX_VERTEX][MAX_VERTEX];  // 그래프에 대한 30x30의 2차원 배열
} graphType;

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjMatrix(graphType* g);