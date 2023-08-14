#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
    int data;
    struct node_t* next;
} node;

void printLL(node* head);

node* createNodeLL(int data);

node* addNodeToHead(node* head,node* newNode);

int main()
{
    node* tmp;
    node* head;

    head = NULL;

    tmp = createNodeLL(11);
    head = addNodeToHead(head,tmp);

    //Creating the second node
    tmp = createNodeLL(456);
    head = addNodeToHead(head,tmp);

    //doing the same as above but with a function!
    tmp = createNodeLL(789);
    head = addNodeToHead(head,tmp);

    //doing the same as above but with a function!
    tmp = createNodeLL(123456);
    head = addNodeToHead(head,tmp);

    // Printing at the end
    printLL(head);
    free(tmp);
    free(head);

    return 0;
}

void printLL(node* head)
{
    node* tmp = head;
    while(tmp != NULL)
    {    
        printf("The address of node is: 0x%x and has the data: %d and points to: 0x%x\n",tmp,tmp->data, tmp->next);
        tmp = tmp->next;
    }
}

node* createNodeLL(int data)
{
    node* nn;
    //Creating a new node
    nn = (node*)malloc(sizeof(node));
    nn->data = data;

    //since this is going to be the last node I will put the pointer to NULL
    nn->next = NULL;

    return nn;

}

node* addNodeToHead(node* head,node* newNode)
{
    newNode->next = head;
    return newNode;
}