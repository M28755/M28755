/*
NAME:        OMONDI MICHAEL OTIENO
REG NO:       PA106/G/28755/25
DATE:         27/10/2025
DESCRIPTION:  C progam to develop a simple system to monitor revenu
*/
/*

*/

#include <stdio.h>

#include <stdlib.h>
void Weekly_Revenue();
void Room_Occupancy();
void Multiple_Branches();
int main()
{

    Weekly_Revenue();
    Room_Occupancy();
    Multiple_Branches();

    return 0;
}
void Weekly_Revenue()
{
    printf("\n\n >>>>>>>>>>>>>>>>> HOTEL WEEKLY REVENUE <<<<<<<<<<<<<<<<");
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
}
void Room_Occupancy()
{
    printf("\n\n <<<<<<<<<<<<<<<<    ROOM OCCUPANCE    >>>>>>>>>>>>>>>>>>>>>>>>");

    int Occupancy[5][10];
    int vacant, occupied, floor, room;

    for (floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        printf("\n Floor %d:", floor + 1);

        for (room = 0; room < 10; room++)
        {                                        /// random occupancy
            Occupancy[floor][room] = rand() % 2; // rand() for random number
                                                 //%2 to reduce it int binary numbers 0 and 1
            if (Occupancy[floor][room] == 1)
            {
                occupied++;
                printf("\tA"); // print A1 if room is occupied
            }
            else
            {
                vacant++;
                printf("\tB"); // printf B0 if the room is vacant
            }
            printf("%d", Occupancy[floor][room]);
        }
        // print number of occupied and vacant room in each floor
        printf(" \n occupied = %d \n vacant = %d", occupied, vacant);
    }
}
void Multiple_Branches()
{
    printf("\n\n<<<<<<<<<<<<<<<<<<<<<<< HOTEL THREE BRANCHES >>>>>>>>>>>>>>>>>>>>>>>>");
    //[branch][floor][room]
    int chain[3][5][10];
    int branch, floor, room, vacant, occupied;
    int Total_Occupied = 0;
    int Total_vacant = 0;
    int Total_rooms = 0;
    // branch
    for (branch = 0; branch < 3; branch++)
    {

        // diplay  branches
        printf("\n\n branch %d:", branch + 1);
        // floors
        for (floor = 0; floor < 5; floor++)
        {
            occupied = 0;
            vacant = 0;

            // display the floor
            printf("\n Floor %d:", floor + 1);
            /// rooms
            for (room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room])
                {
                    occupied++;
                    printf("\tA"); // print  if room is occupied
                    Total_Occupied++;
                }
                else
                {
                    vacant++;
                    printf("\tB"); // printf B if the room is vacant
                    Total_vacant++;
                }
                printf("%d", chain[branch][floor][room]);
            }
            printf(" \n occupied = %d \n vacant = %d", occupied, vacant); // print number of occupied and vacant room in each floor
        }
    }
    // display the total occupied across the hotel

    printf(" \n\n Total Occupied Rooms across all branches is %d rooms", Total_Occupied);
    printf("\n\n  Total vacant rooms across all branches is  %d rooms", Total_vacant);

    // Total rooms in the three branch

    Total_rooms = Total_Occupied + Total_vacant;
    // display total rooms//
    printf("\n\nTotal Rooms In Three Branches Is %d rooms", Total_rooms);
}