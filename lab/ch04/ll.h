typedef struct node_ {
    //char day[7];
    char *day;
    struct node_ *link;
} node;

// ptr가 가리키는 node 뒤에 data를 담은 새로운 node를 삽입하는 연산 
void insertNode(node *ptr, char *data);
void printList(node *ll);
// p가 가리키는 node를 삭제하고 그것의 data를 return
char *deleteNode(node *ll, node *p);