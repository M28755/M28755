/*

NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:        6/11/2025
DISCRIPTION: A C Program to read student's name and marks from binary file

*/
#include <stdio.h>

// i. structure defination

typedef struct
{
    char name[40];
    char Reg_no[20];
    float marks;
} student;
int main()
{

    FILE *MSTJ;

    student s;
    // ii. open the file and read all student record from th binary file
    MSTJ = fopen("c:\\Users\\Omotech\\Documents\\Projects\\results.dat", "rb");
    // open the error
    if (MSTJ == NULL)
    {
        printf("Error File does not exist.");
        return 1;
    }
    // read
    while (fread(&s, sizeof(student), 1, MSTJ) == 1)
    {
        printf("\n NAME: %s", s.name);
        printf("\n MARKS: %.2f", s.marks);
    }

    // close the file
    fclose(MSTJ);

    return 0;
}