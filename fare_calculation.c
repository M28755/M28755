/*
NAME:     OMONDI MICHAEL OTIENO
REG NO:   PA106/G/28755/25
DATE:      20/10/2025
DESCRIPTION: C progarm to calculate toatl fare based on distance covered

*/
#include <stdio.h>

int calculateFare(int distance); // fiunctin prototype

int main()
{ // variable declaration
    int distance;
    int total_fare;

    // prompt user to enter disatnce traveled
    printf("Enter the distance you have traveled in kilometers: \t");
    scanf("%d", &distance);

    total_fare = calculateFare(distance); // calling the function

    // display the total fare
    printf("\n\n The Total Fare is :KSH %d", total_fare);

    return 0;
}

int calculateFare(int distance) // function defination
{
    int total_fare;

    total_fare = distance * 50; // ksh 50 per kilometer

    return total_fare;
}