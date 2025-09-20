// calculating volume and surface area of a cylinder 
/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DESCRIPTION:C Program Prompt User to Enter variables
*/
#include <stdio.h>
int main()
{   //variable declaration
	double radius;
	double height;
	//prompt        
	printf("\n Enter radius: ");
	scanf("%lf", &radius);
	
	printf("\n Enter height: ");
	scanf("%lf",&height);
	// variable declaration
	double volume;
	int pi=3.142;
	double surfacearea;
	printf("volume %.2lf\n", volume = pi * radius * radius * height );
	printf("surfacearea %.2lf\n", surfacearea = 2 * pi * radius * radius + 2 * pi * radius * height );
	
	return 0;
}
