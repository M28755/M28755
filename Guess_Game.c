/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:       07/10/2025
DESCRIPTION:A program that implement a number guessing game

*/

#include <stdio.h>

int main()
{
	int i;
	//printing numbers from 1 to 20
	   //start ; condition; step
	for (i = 1 ; i <= 20; i++)
	{
		printf("%d\t",i);
	}
	
	int Guess_Number;
	int Limited_attempt = 4;
	int Secret_Number = 11;
	    //start ; condition   ;    step
	for(i = 1; i <= Limited_attempt; i++)
	{   printf("\n\n From listed numbers above, guess the secret number");
	
		printf("\n\n Guess The Number:\t");//prompting player to enter the number
		scanf("%d", &Guess_Number);
		
		if (Guess_Number > Secret_Number)//number is greater than 11
		{
			printf("\n The number is TOO HIGH!");
			printf("\n Please Try again");
			
		}else if(Guess_Number < Secret_Number)//number is less than 11
		{
		    printf("\n The number is TOO LOOW!");
			printf("\n Please Try Again");
				
		}else if(Guess_Number == Secret_Number)//number equel to 11
		{
			printf("\n Congratulation You have won");
			break;
		
		}
		
	
	}
	
	return 0;
}