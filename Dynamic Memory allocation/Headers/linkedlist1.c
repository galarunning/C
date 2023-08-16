#include <stdio.h>
#include <stdlib.h>

struct node_t 
{
    int data;
    struct node_t* head;        //Pointer to beginning of next linked list
};

typedef struct node_t node;

void printLL(node* head);

int main()
{   
    // creating the nodes
    node a;
    node b;
    node c;
    node* head;

    //Populating the data field
    a.data = 211;
    b.data = 31;
    c.data = 789;

    // Linking the lists together :)
    head = &a;
    a.head = &b;
    b.head = &c;
    c.head = NULL;

    printLL(head);

    return 0;
}

void printLL(node* head)        // Very important function to do things with linked list
{
    node* tmp = head;           // Not too sure why you need to use a different pointer
    
    while(tmp!=NULL)
    {
        printf("The node lives at address: 0x%x and has the data: %d and the next address is: 0x%x\n", tmp, tmp->data, tmp->head);
        tmp = tmp->head;
    }
}