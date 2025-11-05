/*

NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:        5/11/2025
DISCRIPTION: A C Program for library to record the title of books borrowed by students
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *MSTJ;
    char book_title[90];
    char code[10];
    // creation of file
    // the file is opened in a append mode so that the existing on e to be preseved
    MSTJ = fopen("c:\\Users\\Omotech\\Documents\\Projects\\borrowed_books.txt", "a");
    // incase of error
    if (MSTJ == NULL)
    {
        printf("Error in opening the file");

        return 1;
    }
    // prompt librarian to enter the book title
    printf("Enter The Title Of The book borrowed By The Student:\n");

    fgets(book_title, 90, stdin);
    // code of the book
    printf("Enter The Code Of The Book Borrowed:\n ");
    fgets(code, 10, stdin);

    fseek(MSTJ, 0, SEEK_END);
    int file_size = ftell(MSTJ);

    if (file_size == 0)
    {
        // print to the file
        fprintf(MSTJ, " >>>>>>>> TITLE OF THE BOOKS BORROWED BY STUDENTS <<<<<<");
    }

    fprintf(MSTJ, "\n\nBOOK TITLE:%s", book_title);
    fprintf(MSTJ, "\nCODE : %s", code);
    fclose(MSTJ);

    // show the confirmation messange for succeseful book record
    printf("\n The book is successfully recorded to the book borrowed list.");
    return 0;
}