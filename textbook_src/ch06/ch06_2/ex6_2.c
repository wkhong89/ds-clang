#include "cQueueS.h"

int main(void) {
	QueueType* cQ = createCQueue();  // ť ����
	element data;
	printf("\n ***** ���� ť ���� ***** \n");
	printf("\n ���� A>>");  enCQueue(cQ, 'A'); printCQ(cQ);
	printf("\n ���� B>>");  enCQueue(cQ, 'B'); printCQ(cQ);
	printf("\n ���� C>>");  enCQueue(cQ, 'C'); printCQ(cQ);
	data = peekCQ(cQ);    printf(" peek item : %c \n", data);
	printf("\n ����  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\t\t���� ������: %c", data);
	printf("\n ���� D>>");  enCQueue(cQ, 'D'); printCQ(cQ);
	printf("\n ���� E>>");  enCQueue(cQ, 'E'); printCQ(cQ);
	getchar(); return 0;
}