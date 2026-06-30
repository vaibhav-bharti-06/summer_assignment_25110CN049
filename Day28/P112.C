#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n=0, choice, i;

    while(1) {
        printf("\n--- Contact Management System ---");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                break;

            case 2:
                printf("\nContacts:\n");
                for(i=0;i<n;i++) {
                    printf("%s - %s\n", c[i].name, c[i].phone);
                }
                break;

            case 3:
                return 0;
        }
    }
}