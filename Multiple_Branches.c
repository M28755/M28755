/*
AME:        OMONDI MICHAEL OTIENO
REG NO:       PA106/G/28755/25
DATE:         28/10/2025
DESCRIPTION:c program for  multiple branches
*/

/*

The hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
1. Use a 3D array chain[3][5][10] to represent all branches.
2. Assign random occupancy (1 or 0) to each room.
3. Calculate and display the total number of occupied rooms across all branches.

STRUCTURE
   >3 Branches
   > 5 floors per branch
   > 10  rooms ineach floor


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
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
                    printf("\tA"); // print A1 if room is occupied
                    Total_Occupied++;
                }
                else
                {
                    vacant++;
                    printf("\tB"); // printf B0 if the room is vacant
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

    return 0;
}