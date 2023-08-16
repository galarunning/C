/*
Create a program that can store information about books in a library
    For each book store thee following information:
        - Title (up to 199 characters)
        - Author Name (up to 199 characters)
        - Total Number of Copies (int)
        - copies currently in storage (int)
    The program should allow tfor the following operations to be allowed
        - Add a book
        - Print all data in database
        - Print number of copies available for a book:
            - input: Book title
        - Remove a book
            - input: book title
        loan out a book:
            - Input: book title
            - every time a book is loaned out print:
                * Confirmation of what book is loaned
                * How many copies of that book remain in storage (after the book is loaned)

MUST use different headers and function files.

MUST store all the data in a LINKED LIST #Iwannadie

*/

#include "LibraryFunctions.c"

int main()
{ 
    char command;
    
    node* tmp;
    node* head;
    head = NULL;

    while(1 == 1)       // Infinite loop of the program
    {
        //Initial printf statements of the program.
        printf("\n\n\n\n\n\n\n");
        printf("Please choose what Action you would like to make:\n");
        printf("Type \"A\" to: Add a book to the library\n");
        printf("Type \"B\" to: Print all data in database\n");
        printf("Type \"C\" to: Print number of copies available for a book\n");
        printf("Type \"D\" to: Remove a book from Library database\n");
        printf("Type \"E\" to: Loan out a book\n");
        printf("Type \"F\" to: Automatically populate the library\n");
        printf("Type \"Q\" to: Quit\n");
        printf("\n\nEnter your command: ");

        fflush(stdin);
        command = getchar();
        
        switch(command)
        {
            case 'A':

                printf("\nAdding a book to the database.\n\n");
                tmp = addBookToLibrary();
                head = addNodeToHead(head, tmp);                            // Another function to add this new book to the head
                printf("\n\nBook added :)\n\n");
                
                break;
        
            case 'B':
                
                printf("\n\nPrinting all data in database:\n");
                printDatabase(head);
                break;
        
            case 'C':

                printf("\n\nPrinting number of copies available for a book\n");
                findNumofCopies(head);
                
                break;
        
            case'D':

                printf("Removing a book from Library database\n");
                head = deleteBookFromDb(head);
                break;

            case 'E':

                printf("Loan out a book\n");
                loanOutBook(head);
                break;

            case 'F':

                printf("\n\nAutomatically populating the library with 5 books");
                head = autoPopLib(head);
                break;

            case 'Q':

                printf("\n\nExiting the program...\n");
                printf("Goodbye :)");
                return 0;
                break;

            default:

                printf("\n\nYou have not entered a valid command.\nPlease try again.");
                
                break;
        }
    }
    return 0;
}
