#include "LinkedQueue.h"
#include "adjList.h"
#include "BFS.h"

// �׷��� g���� ���� v�� ���� �ʺ� �켱 Ž�� ���� : [�˰��� 8-2] ����
void BFS_adjList(graphType* g, int v) {
	graphNode* w;
	LQueueType* Q;				// ť
	Q = createLinkedQueue();	// ť ����
	g->visited[v] = TRUE;		// ���� ���� v�� ���� �迭 ���� TRUE�� ����
	printf(" %c", v + 65);
	enLQueue(Q, v);			// ���� ���� v�� ť�� enQueue

	// ť�� ������ �ƴ� ���� �ʺ� �켱 Ž�� ����
	while (!isLQEmpty(Q)) {
		v = deLQueue(Q);
		// ���� ���� w�� �湮���� ���� ��� 
		for (w = g->adjList_H[v]; w; w = w->link)	// ���� ������ �ִ� ���� ����
			if (!g->visited[w->vertex]) {	// ���� w�� �湮���� ���� ������ ���
				g->visited[w->vertex] = TRUE;
				printf(" %c", w->vertex + 65); // ���� 0~6�� A~G�� �ٲپ� ���
				enLQueue(Q, w->vertex);
			}
	} // ť�� �����̸� �ʺ� �켱 Ž�� ����	
}