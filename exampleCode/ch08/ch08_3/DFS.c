#include <stdio.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"

// �׷��� g���� ���� v�� ���� ���� �켱 Ž�� ���� : [�˰��� 8-1] ����
void DFS_adjList(graphType* g, int v) {
	graphNode* w;
	top = NULL;					// ������ top ����
	push(v);					// ���� �켱 Ž���� �����ϴ� ���� v�� ���ÿ� push
	g->visited[v] = TRUE;		// ���� v�� �湮�����Ƿ� �ش� �迭 ���� TRUE�� ���� 
	printf(" %c", v + 65);

	// ������ ������ �ƴ� ���� ���� �켱 Ž�� �ݺ�
	while (!isStackEmpty()) {
		w = g->adjList_H[v];
		// ���� ������ �ִ� ���� ����
		while (w) {
			// ���� ���� w�� �湮���� ���� ��� 
			if (!g->visited[w->vertex]) {
				push(w->vertex);					// ���� ���� W�� ���ÿ� push
				g->visited[w->vertex] = TRUE;	// ���� w�� ���� �迭 ���� TRUE�� ����
				printf(" %c", w->vertex + 65);	// ���� 0~6�� A~G�� �ٲپ ���
				v = w->vertex;
				w = g->adjList_H[v];
			}
			// ���� ���� w�� �̹� �湮�� ���
			else w = w->link;
		}
		v = pop();// ���� �������� ��ȸ�� ������ ���� ������ �� ���� ��쿡 ���� pop!
	} // ������ �����̸� ���� �켱 Ž�� ����
}