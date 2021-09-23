#pragma once
#define MAX_VERTEX 30					// 헤드 포인터 배열의 최대 크기

// 인접 리스트의 노드 구조를 구조체로 정의
typedef struct graphNode {
	int vertex;							// 정점을 나타내는 데이터 필드
	struct graphNode* link;			// 다음 인접 정점을 연결하는 링크 필드
} graphNode;

// 그래프를 인접 리스트로 표현하기 위한 구조체 정의
typedef struct graphType {
	int n;								// 그래프의 정점 개수
	graphNode* adjList_H[MAX_VERTEX];	// 그래프 정점에 대한 헤드 포인터 배열
} graphType;

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjList(graphType* g);