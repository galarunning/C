#include "LibraryHeader.h"

// File to put the definitions of the functions

node* addBookToLibrary()
{
    char title[200];
    char author[200];
    unsigned int totNumOfCopies;
    unsigned int nuOfCopiesInStorage;

    node* nn;
    nn = (node*)malloc(sizeof(node));

    printf("\nYou will be asked for the data on the book you want to add\n");

    printf("Please enter the Title of the book: ");
    fflush(stdin);
    scanf("%s", &title);

    printf("Please enter the Author of the book: ");
    fflush(stdin);
    scanf("%s", author);

    printf("Please enter the number of copies of the book: ");
    fflush(stdin);
    scanf("%d", &totNumOfCopies);

    printf("Please enter the number of copies in storage of the book: ");
    fflush(stdin);
    scanf("%d", &nuOfCopiesInStorage);

    strcpy(nn->author,author);
    nn->nuOfCopiesInStorage = nuOfCopiesInStorage;
    nn->totNumOfCopies = totNumOfCopies;
    strcpy(nn->title,title);

    nn->next = NULL;
    
    return nn;   
}

node* addNodeToHead(node* head, node* newNode)
{
    newNode->next = head;
    return newNode;
}

void printDatabase(node* head)
{
    node* tmp = head;
    int counter = 1;

    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++ LIBRARY DATABASE ++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    while(tmp!=NULL)
    {
        printf("RecordNumber: %d\n", counter);
        printf("Book Title: %s\n", tmp->title);
        printf("Author: %s\n",tmp->author);
        printf("Number of copies available: %d\n",tmp->nuOfCopiesInStorage);
        printf("Total number of copies: %d\n\n",tmp->totNumOfCopies);

        tmp = tmp->next;        // Moving to the next list
        counter++;
    }

}

void findNumofCopies(node* head)
{
    
    char titleUser[200];
    node* tmp = head;
    
    printf("\nPlease provide the title of the book: ");
    fflush(stdin);    
    scanf("%s",&titleUser);

    while(tmp != NULL)        //Iterate through the list :)
    {
        if(strcmp(tmp->title, titleUser) == 0)
        {
            printf("\n\nBook Title: %s\nAmount of available copies: %d",tmp->title, tmp->nuOfCopiesInStorage);
            return;
            break;
        }
        tmp = tmp->next;
    }
    printf("\n\nBook Title: \"%s\" not found!\n\n",titleUser);
}


node* autoPopLib(node* head)
{
    node* nn;

    //Create new node
    nn = (node*)malloc(sizeof(node));
    
    strcpy(nn->author,"aa");
    nn->nuOfCopiesInStorage = 20;
    nn->totNumOfCopies = 20;
    strcpy(nn->title,"title");

    nn->next = NULL;            //Not entirely necessary as it will be modified in the next step

    //Make the new node the head of the list
    head = addNodeToHead(head,nn);

    // 2
    nn = (node*)malloc(sizeof(node));

    strcpy(nn->author,"bb");
    nn->nuOfCopiesInStorage = 30;
    nn->totNumOfCopies = 30;
    strcpy(nn->title,"title1");

    nn->next = NULL;            //Not entirely necessary as it will be modified in the next step

    //Make the new node the head of the list
    head = addNodeToHead(head,nn);
    
    // 3
    nn = (node*)malloc(sizeof(node));

    strcpy(nn->author,"cc");
    nn->nuOfCopiesInStorage = 40;
    nn->totNumOfCopies = 40;
    strcpy(nn->title,"title2");

    nn->next = NULL;            //Not entirely necessary as it will be modified in the next step

    //Make the new node the head of the list
    head = addNodeToHead(head,nn);  

    // 4
    nn = (node*)malloc(sizeof(node));

    strcpy(nn->author,"dd");
    nn->nuOfCopiesInStorage = 50;
    nn->totNumOfCopies = 50;
    strcpy(nn->title,"title3");

    nn->next = NULL;            //Not entirely necessary as it will be modified in the next step

    //Make the new node the head of the list
    head = addNodeToHead(head,nn);

    // 5
    nn = (node*)malloc(sizeof(node));

    strcpy(nn->author,"ff");
    nn->nuOfCopiesInStorage = 60;
    nn->totNumOfCopies = 60;
    strcpy(nn->title,"title4");

    nn->next = NULL;            //Not entirely necessary as it will be modified in the next step

    //Make the new node the head of the list
    head = addNodeToHead(head,nn);    
}


void deleteNodeFromPosition(node* head, int position)   //nth position from the head and index starts at0
{
    node* tmp = head;
    node* nodeToDel;

    int i;

    if(position == 0)
    {
        printf("\n\nI cannot do that!\n\n");
    }
    else if(position == 1)
    {
        nodeToDel = tmp->next; //point to the node that needs to delete
        tmp->next = nodeToDel->next; // Breaks the connection
        free(nodeToDel);
        return;
    }
    else
    {
        for(i=0; i<position; i++)
        {
            tmp = tmp->next;
            if(tmp->next!=NULL)
            {
                nodeToDel = tmp->next;
                if(i == (position-1))
                {
                    tmp->next = nodeToDel->next;
                    free(nodeToDel);
                    return;
                }
            }
            else
            {
                printf("I cannot delete somehting that is beyond the end of the list\n");
                return;
            }
        }
    }

}

node* deleteBookFromDb(node *head)
{

    //Iterate through the list 

    //Find the book position we want to delete

    node* tmp = head;
    char bookTitle[200];
    int count = 0;

    printf("\nPlease provide the title of the book to delete: ");
    fflush(stdin);    
    scanf("%s",&bookTitle);

    while(tmp != NULL)
    {  
        if(strcmp(bookTitle,tmp->title) == 0)
        {
            break;
        }
        else
        {
            tmp = tmp->next;    //Iterate
            count++;
        }
    }

    if(count == 0)
    {
        head = delteHead(head);
        return head;
    }
    else
    {
        deleteNodeFromPosition(head,count);
        printf("\nBook Succesfully deleted!\n");
        return head;
    }
    printf("\nI could not find a book with the \"%s\" title.\n");
    return head;
}

node* delteHead(node* head)
{
    node* tmp = head;

    head = head->next;      // Point the head to the next list
    free(tmp);              // Delete the old head

    return head;
}

void loanOutBook(node* head)
{
    char bookTitle[200];
    node* tmp = head;
    int count;

    printf("\nPlease provide the title of the book to loan out: ");
    fflush(stdin);    
    scanf("%s",&bookTitle);

    while(tmp!=NULL)
    {
        if(strcmp(tmp->title, bookTitle) == 0)
        {
            printf("\n\nBook Title: %s \nCopies in available (before): %d",bookTitle,tmp->nuOfCopiesInStorage);
            tmp->nuOfCopiesInStorage = (tmp->nuOfCopiesInStorage) - 1;
            printf("\nCopies in available (after): %d",tmp->nuOfCopiesInStorage);
            return;
        }
        tmp = tmp->next;
    }
    printf("\nBook title: %s was not found!\n");
}
