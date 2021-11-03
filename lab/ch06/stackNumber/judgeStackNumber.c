#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stackL.h"
#include "LinkedQueue.h"

typedef enum {false, true} bool;
bool isStackNum(int size, element num_series[]);
void generate_rand_series(int size, element num_series[]);
bool unique(element n, element arr[], int size);

int main(void)
{
    int size;
    element *num_series;

    printf("Input size of number series(3 <= N <= 20): ");
    scanf("%d", &size);

    num_series = (element *)malloc(sizeof(element)*size);
    generate_rand_series(size, num_series);

    for (int i = 0; i < size; i++)
        printf("%d ", num_series[i]);
    printf("\n");

    if (isStackNum(size, num_series))
        printf("POSSIBLE\n");
    else
        printf("IMPOSSIBLE\n");

    return 0;
}

void generate_rand_series(int size, element num_series[])
{
    element num;

    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++) {
        do {
            num = rand() % size + 1;

        } while (!unique(num, num_series, i));
        num_series[i] = num;
    }
    
    return;
}

bool unique(element n, element arr[], int size) 
{
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == n)
            break;
    }

    if (i == size)
        return true;
    else
        return false;

}

bool isStackNum(int size, element num_series[])
{
    // 이곳을 채우시오
    return true; // or return false;

}