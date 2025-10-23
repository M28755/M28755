/*
NAME:        OMONDI MICHAEL OTIENO
REG NO:      PA106/G/28755/25
DATE:        22/10/2025
DESCRIPTION: C program to convert temperature from fahrenheit to celsius

*/

#include <stdio.h>

int main()
{
    /// variable declaration
    float fahrenheit, celsius;

    // prompt user to enter temperature in fahrenheit
    printf("Enter temperature in fahrenheit:\tf ");
    scanf("%f", &fahrenheit);

    // calling the function
    celsius = convert_to_celsius(fahrenheit);

    // display the temperature in celsius
    printf("Temperature in celsius is : %.2f c\n ", celsius);

    return 0;
}
float convert_to_celsius(float fahrenheit) // function definition
{
    float celsius;

    celsius = (fahrenheit - 32) * 5 / 9; // formula to convert fahrenheit to celsius

    return celsius;
}