//C program to check if a student is eligible to do final exam
/*
NAME:       OMONDI MICHAEL OTIENO 
REG NO:     PA106/G/28755/25
DATE:       29/9/2025
DESCRIPTION:A program to check if a student is eligibe to sit for final exam

*/

/*
Attendance >=75%
average marks >= 40
otherwise not eligible
*/

#include <stdio.h>

int main(int argc, char** argv)
{    // variable declaration
	int Class_Attendance;
	float Average_marks;
	
	// prompting user to enter the information
	printf("\n Enter the student Attendance percentage:\t");
	scanf("%d", &Class_Attendance);
	
	printf("\n Enter the student Average marks:\t");
	scanf("%f", &Average_marks);
	
	//display user information
	printf("\n The Student class Attendance percentage is: \t%d", Class_Attendance);
	printf("\n The student's Average marks is: \t%.2f", Average_marks);
	
    //checks if the student has meet the mandatory
	if(Class_Attendance >= 75 && Average_marks >= 40){
		printf("\n The Student is eligible  for final exam.");
	}else{
		printf("\n The Student is not eligible  for final exam.");
	}
	
	return 0;
}