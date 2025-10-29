

/*
NAME:        OMONDI MICHAEL OTIENO
REG NO:       PA106/G/28755/25
DATE:         28/10/2025
DESCRIPTION:c program for – Room Occupancy
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ //[floor][room]
    int Occupancy[5][10];
    int vacant, occupied, floor, room;

    for (floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        printf("\n Floor %d:", floor + 1);

        for (room = 0; room < 10; room++)
        { /// random occupancy
            Occupancy[floor][room] = rand() % 2;

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
        }
        printf("%d", Occupancy[floor][room]);
    } //
    // print number of occupied and vacant room in each floor
    printf(" \n occupied = %d \n vacant = %d", occupied, vacant);

    return 0;
}
