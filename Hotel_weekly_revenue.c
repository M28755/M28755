/*
NAME:        OMONDI MICHAEL OTIENO
REG NO:       PA106/G/28755/25
DATE:         27/10/2025
DESCRIPTION:  C progam to develop a simple system to monitor revenu
*/
#include <stdio.h>

int main()
{

    float revenue[7];
    const char *days[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
    float Total_revenue = 0;
    float average_revenue;
    // Enter the revenue for each day
    printf("\n\n ENTER THE REVENUE OF THE 7 DAYS\n");
    int i;
    for (i = 0; i < 7; i++)
    { // Input the revenue for each day.
        printf("%d. %s = \t KSH ", i + 1, days[i]);
        scanf("%f", &revenue[i]);
        // The total weekly revenue.
        Total_revenue += revenue[i];
    }
    // The average daily revenue.
    average_revenue = Total_revenue / 7;

    // display the total revenue
    printf("\n\n TOTAL WEEKLY REVENUE\n");
    printf("Total Weekly Revenue is KSH %.2f", Total_revenue);
    // display the average revenue
    printf("\n\n  AVERAGE DAILY REVENUE");
    printf("\n The Average Revenue is KSH %.2f", average_revenue);
    return 0;
}