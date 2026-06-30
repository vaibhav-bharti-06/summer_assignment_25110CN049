#include <stdio.h>

int main() {
    int seats = 10, choice, n;

    while(1) {
        printf("\n--- Ticket Booking System ---");
        printf("\n1. Book Ticket");
        printf("\n2. Available Seats");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("How many tickets? ");
                scanf("%d",&n);

                if(n <= seats) {
                    seats -= n;
                    printf("Booking Successful");
                }
                else
                    printf("Seats Not Available");
                break;

            case 2:
                printf("Available Seats = %d", seats);
                break;

            case 3:
                return 0;
        }
    }
}