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

void deleteNodeInPosition(node* head, int position);

node* deleteHead(node*head);

node* deleteNodeWithData(node* head, int data);

node* reverseLL(node* head);

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
    //tmp =  findNodeContaining(head, 77);

    //printf("\n\n\nNode at address: 0x%x contains value 77\n\n", tmp);
    printf("\n\n");

    // Inserting a new node
    // insertNodeInPosition(head, 3, 574);

    // insertNodeInPosition(head, 8, 888888);
    deleteNodeInPosition(head,5);

    printf("\n\n");
    printLL(head);

    printf("\n\nRemoving the head\n\n");
    head = deleteHead(head);

    printf("\n\n");
    printLL(head);

    deleteNodeWithData(head, 22);

    printf("\n\n");
    printLL(head);
    printf("Reversing the linked list");
    head = reverseLL(head);

    printf("\n\n");
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
            tmp = tmp->next;             // Move tmp to the next node
        }
        
    }
    return NULL;                         // In case I cannot find it!
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


// Function to delete one node :)
void deleteNodeInPosition(node* head, int position)
{
    node* tmp = head;
    node* nodeToDelete;

    int i;

    if(position == 0)
    {
        printf("I cannot delete at position 0.");
    }
    else if(position == 1)
    {
        nodeToDelete = tmp->next;           //Pointing to node that nedds to be deleted
        tmp->next = nodeToDelete->next;      //Breaking the connection
        free(nodeToDelete);                 // Free the memory
        return;
    }
    else
    {
        for(i=1;i<position;i++)
        {
            tmp = tmp->next;                //Iterating through the list

            if(tmp->next != NULL)
            {
                nodeToDelete = tmp->next;
                if(i == (position-1))
                {
                    tmp->next = nodeToDelete->next;         //Breaking the connection
                    free(nodeToDelete);                     // Free the heap memory from the unlinked node

                    return;
                }
            }
            else
            {
                printf("\nCannot delete something beyond the end of the list\n\n");
            }
            
        }
    }
}

//Function to delete the head of the linked list! --> returns the new head
node* deleteHead(node*head)
{
    node* tmp = head;
    node* nodeToDelete;

    head = head->next;          //Point the head to the second node
    free(tmp);

    return head;
}

//Function to delete a node with specific data and it could delete the head!
node* deleteNodeWithData(node* head, int data)
{
    node* tmp = head;
    int indexCount = 0;

    while(tmp!=NULL)
    {
        if(tmp->data == data)
        {
            break;
        }
        tmp = tmp->next;
        indexCount++;               //We will end up with the index of the data we want to delete :)
    }

    if(indexCount == 0)
    {
        head = deleteHead;                          // Using the previously created function
        return head;
    }
    else
    {
        deleteNodeInPosition(head,indexCount);      // Using the previously created function
        return head;
    }
}

node* reverseLL(node* head)         // It is computationally expensive
{
    node* previous;
    node* current;
    node* next;

    current = head;
    previous = NULL;
    while(current != NULL)
    {
        //Change connections
        next = current->next;           // Moved next
        current->next = previous;       // Connect current node to the previous node

        // Move pointers to the next element
        previous = current;
        current = next;
    }
    head = previous;

    return head;
}

