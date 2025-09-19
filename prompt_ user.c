//c program for prompt the user to enter and display user's information
/*
NAME:OMONDI MICHAEL OTIONO
REG NO:PA106/G/28755/25
DESCRIPTION:program for user to enter and display information
*/

#include <stdio.h>

int main()//main function
{  // variable declaration
	char name[]={};
	int phonenumber;
	int IDnumber;
	double bankbalance;
	float height;
//prompt user to enter information	
	printf("Enter your name:  ");
	scanf("%s", &name);
	
	printf("\n Enter your phonenumber: ");
	scanf("%d", &phonenumber);
	
	printf("\n Enter your IDnumber: ");
	scanf("%d",&IDnumber);
	
	printf("\n Enter your bankbalance: "); 
	scanf("%lf",&bankbalance);
	
	printf("\n Enter your height (in meters): ");
	scanf("%f",&height);
	
//dispaly user information
    printf("Yuor name is %s\n",name);
	printf("Your phonenumber is %d\n",phonenumber);
	printf("Your IDnumber is %d\n",IDnumber);
	printf("Yuor bankbalance is Ksh %.4lf\n",bankbalance);
	printf("Your height is %.1f meters\n",height);
	return 0;
}	