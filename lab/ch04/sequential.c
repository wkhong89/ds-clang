#include <stdio.h>
#define ARRAY_SIZE 5
void insert(char **list, int index, char *name);
char *delete(char **list, int index);

int main(void)
{
    char *persons[ARRAY_SIZE] = {"철수", "영희", "민수"};
    char *name;

    insert(persons, 2, "서니");
    printf("list: ");
    for (int i = 0; persons[i] != 0; i++)
        printf("%s ", persons[i]);
    printf("\n");
    
    name = delete(persons, 1);
    printf("삭제된 이름은 %s\n", name);
    printf("list: ");
    for (int i = 0; persons[i] != 0; i++)
        printf("%s ", persons[i]);
    printf("\n");

    return 0;
}

void insert(char **list, int index, char *name)
{
    int i;

    // index를 비우기 위해 index 부터 끝까지 뒤로 옮기기
    // 1. list의 끝을 알아내기
    for (i = index; list[i] != NULL; i++);

    // 2. index ~ list의 끝을 한칸씩 오른쪽으로 옮기기
    for (; i >= index; i--)
        list[i+1] = list[i];

    // 3. index에 name을 넣기
    list[index] = name;

    return;
}

char *delete(char **list, int index)
{
    char *name;
    int i, end_of_list;

    name = list[index];

    // index + 1 ~ end_of_list까지 data를 한칸씩 왼쪽으로 이동 
    // 1. data를 왼쪽으로 이동 until end_of_list
    for (i = index + 1; list[i] != 0; i++)
        list[i - 1] = list[i];
    // 2. array의 나머지를 0으로 set
    for (; i <= ARRAY_SIZE; i++)
        list[i-1] = 0;

    return name;
}