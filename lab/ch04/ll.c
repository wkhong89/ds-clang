//linked list
// ������->ȭ����->������...
#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

int main(void)
{
    node *head = NULL;
    node *new_node;

    new_node = malloc(sizeof(node));
    new_node->day = "������";
    new_node->link = NULL;
    head = new_node;

    new_node = malloc(sizeof(node));
    new_node->day = "������";
    new_node->link = NULL;
    head->link = new_node;

    new_node = malloc(sizeof(node));
    new_node->day = "�ݿ���";
    new_node->link = NULL;
    head->link->link = new_node;

    printList(head);

    insertNode(head->link, "�����");
    printList(head);

    deleteNode(head, head->link);
    printList(head);

    return 0;
}

void printList(node *ll)
{
    for (node *ptr = ll; ptr != NULL; ptr = ptr->link)
        printf("%s-->", ptr->day);
    printf("NULL\n");

}

void insertNode(node *ptr, char *data)
{
    node *new_node = (node *)malloc(sizeof(node));
    
    new_node->day = data;
    new_node->link = ptr->link;
    ptr->link = new_node;

    return;
}

char *deleteNode(node *ll, node *p)
{
    node *pre;
    char *data;

    // p�� �� ��带 ã�Ƽ� pre�� ����Ű���� ����
    for (pre = ll; pre->link != p; pre = pre->link);
    pre->link = p->link;
    data = p->day;

    free(p);

    return data;

}