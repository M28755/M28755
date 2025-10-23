/*
NAME:      OMONDI MICHAEL OTIENO
REG NO:    PA106/G/20755/25
DATE:       22/10/2025
DESCRIPTION: C progam to calculate electricity bill based on units consumed
    */
#include <stdio.h>
int calculateElectricbill(int units); // function prototype

int main()
{
    // variable declaration
    int units, bill_amount;
    // prompt user to enter number of units consumed
    printf("Enter the number of units consumed:\t");
    scanf("%d", &units);

    bill_amount = calculateElectricbill(units);
    printf("The bill amount is :KES %d\n", bill_amount); // calling the function

    return 0;
}
int calculateElectricbill(int units) // function definition
{
    int bill;
    if (units <= 100)
    {
        bill = units * 10; // first 100 units
    }
    if (units > 100 && units < 200)
    {
        bill = units * 15; // next 100 units
    }
    if (units >= 200)
    {
        bill = units * 20; // above 200 units
    }

    return bill;
}
