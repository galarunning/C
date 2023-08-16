#include <stdio.h>
#include <stdlib.h>

/*
    Linked list are useful when using dynamically allocated memory
    Hence is not very used in embedded systems

    It is the GO TO standard when whanting to dynamically change
    the amount of memory used during runtime.
*/

struct node_t
{
    int data;
    struct node_t* next
};

typedef struct node_t node;

int main()
{
    node a;
    node b;
    node c;
    node* head;     //Points to the first linked list!

    a.data = 11;
    b.data = 22;
    c.data = 33;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;      //Point to null to indicate is the last linked list


    // This is an example of a static linked list
    return 0;
}