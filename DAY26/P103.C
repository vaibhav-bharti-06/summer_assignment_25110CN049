//  Write a program to Create ATM simulation.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int balance,deposit,withdraw,pin,number;
    srand(time(NULL));
    balance=rand()/10+1;
    printf("Insert your card:\n");
    printf("Enter your pin:");
    scanf("%d",&pin);
    if(pin==1423)
    {
    printf("Pick a number for availing the following feature:\n");
    printf("1 for viewing balance\n2 for depositing\n3 for withdrawing\n");
    scanf("%d",&number);
    switch(number)
    {
        case 1: 
        printf("Show balance:");
        printf("%d",balance);
        break;
        case 2:
        printf("Deposit:");
        scanf("%d",&deposit);
        printf("balance before deposit:%d\n",balance);
        balance+=deposit;
        printf("Balance after deposit: %d\n",balance);
        break;
        case 3:
        printf("Withdraw:");
        scanf("%d",&withdraw);
        printf("Balance before withdrawl: %d\n",balance);
        if(balance>=withdraw)
        {
            balance-=withdraw;
            printf("Balance after withdrawl: %d\n",balance);
        }
        else
        {
            printf("Balance Insufficient.");

        }
        break;
        default :
        printf("casual surfing.");
    }
    }
    else
    {
        printf("Wrong pin.");

    }
    return 0;
}