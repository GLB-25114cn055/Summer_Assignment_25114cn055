#include <stdio.h>
struct Ticket
{
    int ticketNo;
    char name[30];
    int seats;
    float fare;
};
int main()
{
    struct Ticket t;
    int choice, booked = 0;

    while (1)
    {
        printf("\n    # Ticket Booking System      #   \n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (booked == 1)
            {
                printf("Ticket already booked.\n");
            }
            else
            {
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.fare = t.seats * 500;   // Fare per seat = 500

                booked = 1;
                printf("Ticket booked successfully.\n");
            }
            break;

        case 2:
            if(booked == 0)
            {
                printf("No ticket booked.\n");
            }
            else
            {
                printf("\n----- Ticket Details -----\n");
                printf("Ticket No      : %d\n", t.ticketNo);
                printf("Passenger Name : %s\n", t.name);
                printf("Seats          : %d\n", t.seats);
                printf("Total Fare     : %.2f\n", t.fare);
            }
            break;

        case 3:
            if(booked == 0)
            {
                printf("No ticket to cancel.\n");
            }
            else
            {
                booked = 0;
                printf("Ticket cancelled successfully.\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}