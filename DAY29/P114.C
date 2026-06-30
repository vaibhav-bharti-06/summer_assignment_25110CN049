#include <stdio.h>

int main() {
    int accNo[50], choice, i, searchAcc, found;
    char name[50][30];
    float balance[50];
    int count = 0;
    float amount;

    printf("Simple Bank System\n");

    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Create Account\n");
        printf("2. Show All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Create Account
                if(count >= 50) {
                    printf("Bank Full! Cannot create more accounts\n");
                }
                else {
                    accNo[count] = 1001 + count;
                    printf("Enter Name: ");
                    scanf(" %[^\n]", name[count]);
                    printf("Enter Opening Balance: ");
                    scanf("%f", &balance[count]);
                    
                    if(balance[count] < 0) {
                        printf("Balance negative nahi ho sakta!\n");
                    }
                    else {
                        printf("Account Created! Account No: %d\n", accNo[count]);
                        count++;
                    }
                }
                break;

            case 2: // Show All Accounts
                if(count == 0) {
                    printf("No accounts yet!\n");
                }
                else {
                    printf("\nAcc No Name Balance\n");
                    printf("-------------------------\n");
                    for(i = 0; i < count; i++) {
                        printf("%d %s %.2f\n", accNo[i], name[i], balance[i]);
                    }
                }
                break;

            case 3: // Deposit Money
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(accNo[i] == searchAcc) {
                        found = 1;
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);
                        
                        if(amount <= 0) {
                            printf("Invalid Amount!\n");
                        }
                        else {
                            balance[i] = balance[i] + amount;
                            printf("Deposited! New Balance: %.2f\n", balance[i]);
                        }
                        break;
                    }
                }
                
                if(found == 0) {
                    printf("Account not found!\n");
                }
                break;

            case 4: // Withdraw Money
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(accNo[i] == searchAcc) {
                        found = 1;
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);
                        
                        if(amount <= 0) {
                            printf("Invalid Amount!\n");
                        }
                        else if(amount > balance[i]) {
                            printf("Insufficient Balance! Current: %.2f\n", balance[i]);
                        }
                        else {
                            balance[i] = balance[i] - amount;
                            printf("Withdrawn! New Balance: %.2f\n", balance[i]);
                        }
                        break;
                    }
                }
                
                if(found == 0) {
                    printf("Account not found!\n");
                }
                break;

            case 5: // Check Balance
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(accNo[i] == searchAcc) {
                        found = 1;
                        printf("\n--- Account Details ---\n");
                        printf("Account No: %d\n", accNo[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Balance: %.2f\n", balance[i]);
                        break;
                    }
                }
                
                if(found == 0) {
                    printf("Account not found!\n");
                }
                break;

            case 6: // Exit
                printf("Thank You! Visit Again\n");
                return 0;

            default:
                printf("Wrong choice! Enter 1-6\n");
        }
    }

    return 0;
}