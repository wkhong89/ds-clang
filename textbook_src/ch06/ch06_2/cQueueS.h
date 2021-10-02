#pragma once
#define cQ_SIZE  4

typedef char element;		// 큐 원소(element)의 자료형을 char로 정의

typedef struct {
	element queue[cQ_SIZE];	// 1차원 배열 큐 선언
	int front, rear;
} QueueType;

QueueType* createCQueue();
int isCQueueEmpty(QueueType* cQ);
int isCQueueFull(QueueType* cQ);
void enCQueue(QueueType* cQ, element item);
element deCQueue(QueueType* cQ);
element peekCQ(QueueType* cQ);
void printCQ(QueueType* cQ);