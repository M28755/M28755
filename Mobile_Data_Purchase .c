// Mobile Data purchase
/*
NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:       30/9/2025
DESCRIPTION;program for mobile data purchase
*/
/*
Option     Bundle    Cost (KES) 
1.          100MB    KES50 
2.          500MB    KES200 
3.            1GB    KES350 
4.            2GB    KES600

*/
#include <stdio.h>

int main(int argc, char** argv)
{  //program display the menu
	printf("\n\t  OPTION   BUNDLE    COST (kes)");
	printf("\n\t     1.     100MB    @kes 50 ");
	printf("\n\t     2.     500MB    @kes 200 ");
	printf("\n\t     3.       1GB    @kes 350 ");
	printf("\n\t     4.       2GB    @kes 600 ");
	
	//variable declaration
	int Option;
	//prompting user to enter there choice
	printf("\n Enter your Option(1,2,3,4):\t");
	scanf("%d", &Option);
	
	switch(Option){
		
		case 1:
		printf("\n You selected Option 1.\n 100MB @kes 50 ");
		break;
	
	    case 2:
	    printf("\n You selected Option 2. \n 500MB @kes 200 ");
	    break;
	
	    case 3:
	    printf("\n You selected Option 3. \n 1GB  @kes 350 ");
	    break;
	
	    case 4:
	    printf("\n You selected Option 4. \n 2GB @kes 600 ");
	    break;
	
	    case 5:
	    printf("\n Invalid choice.\n PLEASE TRY AGAIN");
	
	}
	
	
	
	return 0;
}