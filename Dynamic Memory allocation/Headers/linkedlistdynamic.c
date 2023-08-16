#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
    int data;
    struct node_t* head;
} node;

void printLL(node* head);

int main()
{
    node* a;
    node* b;
    node* c;
    node * head;

    //Dinamycally allocate linked lists
    a = (node*)malloc(sizeof(node));
    b = (node*)malloc(sizeof(node));
    c = (node*)malloc(sizeof(node));

    // Populate the lists
    a->data = 11;
    b->data = 22;
    c->data = 55;

    //Linking the lsits
    head = a;
    a->head = b;
    b->head = c;
    c->head = NULL;

    //Using printLL function to print linked lists
    printLL(head);

    free(a);
    free(b);
    free(c);

    return 0;
}

void printLL(node* head)
{
    node* tmp;
    tmp = head;

    while(tmp!=NULL)
    {
        printf("Node lives at address: 0x%x and has data: %d and points to: 0x%x",tmp,tmp->data,tmp->head);
        tmp = tmp->head;
    }
}