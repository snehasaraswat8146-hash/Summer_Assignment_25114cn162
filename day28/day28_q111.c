//Write a program to Create ticket booking
//system.
#include <stdio.h>
#include <string.h>
 
#define TOTAL_SEATS 20
 
int seatStatus[TOTAL_SEATS];      // 0 = empty, 1 = booked
char passengerName[TOTAL_SEATS][30];
int seatPrice = 500;              // fixed price per seat, keeping it simple
 
// function to check seat number is valid or not
int isValidSeat(int seatNo)
{
    if (seatNo >= 1 && seatNo <= TOTAL_SEATS)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int choice;
    // initially sab seats khali hai
    for (int i = 0; i < TOTAL_SEATS; i++)
    {
        seatStatus[i] = 0;
    }
    while (1)
    {
        printf("\n=========== TICKET BOOKING SYSTEM ===========\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Show All Seats\n");
        printf("4. Check Seat Status\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // booking a ticket
        if (choice == 1)
        {
            int seatNo;
            printf("\nEnter Seat Number (1 to %d): ", TOTAL_SEATS);
            scanf("%d", &seatNo);
 
            if (isValidSeat(seatNo) == 0)
            {
                printf("Invalid seat number!\n");
            }
            else if (seatStatus[seatNo - 1] == 1)
            {
                printf("Sorry, seat already booked!\n");
            }
            else
            {
                printf("Enter Passenger Name: ");
                scanf("%s", passengerName[seatNo - 1]);
 
                seatStatus[seatNo - 1] = 1;
 
                printf("Ticket Booked Successfully!\n");
                printf("Seat No: %d, Name: %s, Price: %d\n", seatNo, passengerName[seatNo - 1], seatPrice);
            }
        }
 
        // cancelling a ticket
        else if (choice == 2)
        {
            int seatNo;
            printf("\nEnter Seat Number to cancel: ");
            scanf("%d", &seatNo);
 
            if (isValidSeat(seatNo) == 0)
            {
                printf("Invalid seat number!\n");
            }
            else if (seatStatus[seatNo - 1] == 0)
            {
                printf("This seat is not booked yet!\n");
            }
            else
            {
                seatStatus[seatNo - 1] = 0;
                strcpy(passengerName[seatNo - 1], "");  // naam clear kar diya
                printf("Ticket Cancelled Successfully!\n");
            }
        }
 
        // show all seats
        else if (choice == 3)
        {
            printf("\n--- Seat Status ---\n");
            int booked = 0;
 
            for (int i = 0; i < TOTAL_SEATS; i++)
            {
                printf("Seat %d : ", i + 1);
                if (seatStatus[i] == 1)
                {
                    printf("Booked (%s)\n", passengerName[i]);
                    booked++;
                }
                else
                {
                    printf("Empty\n");
                }
            }
 
            printf("\nTotal Seats: %d\n", TOTAL_SEATS);
            printf("Booked: %d\n", booked);
            printf("Available: %d\n", TOTAL_SEATS - booked);
        }

        // check specific seat
        else if (choice == 4)
        {
            int seatNo;
            printf("\nEnter Seat Number: ");
            scanf("%d", &seatNo);
 
            if (isValidSeat(seatNo) == 0)
            {
                printf("Invalid seat number!\n");
            }
            else if (seatStatus[seatNo - 1] == 1)
            {
                printf("Seat %d is Booked by %s\n", seatNo, passengerName[seatNo - 1]);
            }
            else
            {
                printf("Seat %d is Empty, you can book it.\n", seatNo);
            }
        }
        else if (choice == 5)
        {
            printf("\nThank you for using our booking system. Bye!\n");
            break;
        }
        else
        {
            printf("\nWrong choice, please try again\n");
        }
    }
    return 0;
}
