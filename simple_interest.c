// calculation of simple interest

/*
NAME:       OMONDI MICHAEL OTIENO
DATE:       2/10/2025
REG NO:     PA106/G/28755/25
DESCRIPTION:Program for calculating simple interest

*/

#include <stdio.h>

int main(int argc, char** argv)
{//variable declaration
	int simple_interest;
	int principle_amount;
	float rate;
	int time;
    //prompting user to enter principle amount,rate , time
	printf("Enter principle amount:\t");
	scanf("%d", &principle_amount);
	
	printf("\n Enter rate:\t");
	scanf("\n %f", &rate);
	
	printf("\n Enter time:\t");
	scanf("\n %d", &time);
	
	//formula for getting simple interest
	simple_interest = (principle_amount * rate * time )/100;
	//display the simple interest
	printf("The simple interest amount is : %.2d\n", simple_interest);
	return 0;
}