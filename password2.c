/*

NAME:   OMONDI MICHAEL OTIENO
REG NO : PA16/G/28755/25
DATE:   23/10/2025
DESCRIPTION: A c program that prompt the user to enter a password until the correct password is correctly entered.


*/
#include <stdio.h>
#include <string.h>

int main()
{ // variable declaration
    char password[20];
    const char correct_password[] = "1234"; // correct password
    do
    {

        printf("Enter password:\t"); // prompt user  to enter password
        scanf("%s", password);       // read user input

    } while (strcmp(password, correct_password) != 0); // looping condition to check password  and
                                                       // loop until correct password is entered
                                                       // strcmp compares password entered by user and the correct password
                                                       // if they are equal it return 0.
    printf("Access Granted\n"); // display the accesss granted messsage

    return 0;
}