#pragma once
#define MAX_VERTEX 30					// ��� ������ �迭�� �ִ� ũ��

// ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct graphNode {
	int vertex;							// ������ ��Ÿ���� ������ �ʵ�
	struct graphNode* link;			// ���� ���� ������ �����ϴ� ��ũ �ʵ�
} graphNode;

// �׷����� ���� ����Ʈ�� ǥ���ϱ� ���� ����ü ����
typedef struct graphType {
	int n;								// �׷����� ���� ����
	graphNode* adjList_H[MAX_VERTEX];	// �׷��� ������ ���� ��� ������ �迭
} graphType;

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjList(graphType* g);