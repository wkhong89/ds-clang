typedef struct node_ {
    //char day[7];
    char *day;
    struct node_ *link;
} node;

// ptr�� ����Ű�� node �ڿ� data�� ���� ���ο� node�� �����ϴ� ���� 
void insertNode(node *ptr, char *data);
void printList(node *ll);
// p�� ����Ű�� node�� �����ϰ� �װ��� data�� return
char *deleteNode(node *ll, node *p);