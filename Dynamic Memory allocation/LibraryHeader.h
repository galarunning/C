#ifndef INCLUDED_LIBRARYHEADER_H
#define INCLUDED_LIBRARYHEADER_H
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Definition of the data type book
struct book_t
{
    char title[200];
    char author[200];
    unsigned int totNumOfCopies;
    unsigned int nuOfCopiesInStorage;
    struct book_t* next;                          
};

typedef struct book_t node;

void initialiseLibrary(int numOfBooks);

node* addBookToLibrary();

node* addNodeToHead(node* head, node* newNode);

void printDatabase(node* head);

void findNumofCopies(node* head);

node* autoPopLib(node* head);
void deleteNodeFromPosition(node* head, int position);

node* deleteBookFromDb(node *head);

node* delteHead(node* head);

void loanOutBook(node* head);