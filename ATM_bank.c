// program for bank ATM 
/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:        8/10/2025
DESCRIPTION:
*/

#include <stdio.h>

int main()
{
	
	//variable declaration
	int withdrawal_amount;
	int balance;

	 

	 
      balance = 20000; //start
       printf("Your current bank account is ksh %d", balance);  
      
         while(balance > 0)// condition
         	
    	{
	          printf("\n Enter amount you wish to withdraw:ksh \n");
	         scanf("%d" , &withdrawal_amount);
		 	//display the withdrawal amount
		 	printf("\n You have withdraw :ksh %d", withdrawal_amount);
		 	
		 	balance -= withdrawal_amount;// step
		 	//display the balances
		 	printf("\n You bank balance is: ksh %d ", balance);
		 	
			 
		 }
		 printf("\n Insufficient Total amount");

	return 0;
}