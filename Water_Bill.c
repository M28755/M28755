// Water bill calculation
/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:       29/9/2025
DISCRIPTION:Program to calculate water bill.
*/
/*
0–30 units = 20 KES per unit 
31–60 units = 25 KES per unit 
Above 60 units = 30 KES per unit 
*/

#include <stdio.h>

int main(int argc, char** argv)
{// variable
	
	int units;
	int Bill;
	//prompt user to enter the units
	printf("Enter the number of units water consumed: \t");
	scanf("%d", &units);
	
	
	if (units > 0 && units <= 30)
	{
		Bill = units * 20;//ksh 20 per unit
		
	}else if(units >= 31 && units <= 60)
	{
		Bill = units * 25;//ksh 25 per unit
		
	}else if (units >= 60)
	{
		Bill = units * 30;//ksh 30 per unit
	}
	
	printf("\n Your Bill is Ksh %.2d\n", Bill);
	
	return 0;
}