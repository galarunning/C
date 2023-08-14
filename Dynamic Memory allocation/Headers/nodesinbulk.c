#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
    int data;
    struct node_t* next;
} node;

// Function Prototypes

void printLL(node* head);

node* createNodeLL(int data);

node* addNodeToHead(node* head,node* newNode);

node* findNodeContaining(node* head, int data);

void insertNodeInPosition(node* head, int position, int data);

int main()
{
    node* tmp;
    node* head;
    int i;
    head = NULL;

    for(i = 0; i<20; i++)           //Creating 20 nodes!
    {
        tmp = createNodeLL(11*i);
        head = addNodeToHead(head,tmp);
    }

    printLL(head);
    printf("\n\n");
    tmp =  findNodeContaining(head, 77);

    printf("\n\n\nNode at address: 0x%x contains value 77\n\n", tmp);
    printf("\n\n");

    // Inserting a new node
    insertNodeInPosition(head, 3, 574);

    insertNodeInPosition(head, 8, 888888);

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

// Function to return node index containing a certain number
node* findNodeContaining(node* head, int data)
{
    node* tmp = head;

    while(tmp->next != NULL)
    {
        if(tmp != NULL)
        {
            if(tmp->data == data)
            {
                return tmp;
            }
            tmp = tmp->next;            // Move tmp to the next node
        }
        
    }
    return NULL;                    // In case I cannot find it!
}

void insertNodeInPosition(node* head, int position, int data)
{
    node* tmp = head;           //point tmp to the head
    node* newNode;
    int i; // For iteration
    

    if(position == 0)
    {
        printf("We cannot insert in Position 0\n");
    }
    else
    {
        for(i=1;i<position;i++)             // Because we are not doing position 0
        {
            if(tmp->next!=NULL)
            {
                tmp = tmp->next;        //Traverse the list int position times
            }
            else
            {
                return;
            }
        }
    }
    newNode = (node*)malloc(sizeof(node));
    
    newNode->data = data;

    //point new node to the next node (next from current)
    newNode->next = tmp->next;
    // point temp to newly inserted node! :)
    tmp->next = newNode;
}