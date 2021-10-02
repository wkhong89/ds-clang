#include <stdio.h>

void print(char **p);

int main(void)
{
    // 2. 이중 포인터의 사용예
    char *ptr[3] = {"Korea", "is", "Strong"};

    print(ptr);

    return 0;
}

void print(char **p) 
{
    printf("%s\n", p[0]);
    printf("%s\n", p[1]);
    printf("%s\n", p[2]);
}