#include "LinkedPoly.h"

void multPoly(ListHead *A, ListHead *B, ListHead *C)
{

    return;
}

void freeNode(ListHead *poly)
{
    ListNode *p = poly->head;
    ListNode *post;

    while (p != NULL) {
        post = p->link;
        free(p);
        p = post;
    }

    poly->head = NULL;

    return;
}

void dupPoly(ListHead *srcPoly, ListHead *destPoly)
{
    ListNode *p = srcPoly->head;
    ListNode *q = destPoly->head;
    ListNode *new;

    while (p != NULL) {
        new = (ListNode *)malloc(sizeof(ListNode));
        new->coef = p->coef;
        new->expo = p->expo;
        new->link = NULL;

        if (q == NULL) {
            q = new;
            destPoly->head = q;
        } else {
            q->link = new;
            q = new;
        }

        p = p->link;
    }

    return;
}