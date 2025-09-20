
/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DESCRIPTION:c programm to display if a customer qualify for a loan
*/
#include<stdio.h>
int main()
{
	int year;
	float annualincome;
	printf("Enter your year: \n");
	scanf("%d", &year);
	
	printf("\n Enter your annualincome: ");
	scanf("%f", &annualincome);
	
	if (year >= 21 || annualincome >= 21000 ){
		printf("\ncongratulation you qualify for a loan.else ");
	}
	else{
		printf("\nUnfortunately,we are unable to offer you at this time");
	}
	
	return 0;
} 