#include <stdio.h>
#include "queueS.h"

int main(void) {
	QueueType* Q1 = createQueue();  // ť ����
	element data;
	printf("\n ***** ���� ť ���� ***** \n");
	printf("\n ���� A>>");  enQueue(Q1, 'A'); printQ(Q1);
	printf("\n ���� B>>");  enQueue(Q1, 'B'); printQ(Q1);
	printf("\n ���� C>>");  enQueue(Q1, 'C'); printQ(Q1);
	data = peekQ(Q1);    printf(" peek item : %c \n", data);
	printf("\n ����  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t\t���� ������: %c", data);

	printf("\n ���� D>>");  enQueue(Q1, 'D'); printQ(Q1);
	printf("\n ���� E>>");  enQueue(Q1, 'E'); printQ(Q1);
	
	getchar();  return 0;
}