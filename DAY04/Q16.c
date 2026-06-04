// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("enter first number:");
    scanf("%d", &n1);
    printf("enter second number:");
    scanf("%d", &n2);
    printf("armstrong number from %d to %d:", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        int num = i;
        int count = 0;
        int sum = 0;
        while (num > 0)
        {

            num = num / 10;
            count++;
        }
        num = i;
        while (num > 0)
        {

            int digit = num % 10;
            sum = sum + pow(digit, count);
            num = num / 10;
        }

        if (sum == i)
        {

            printf("%d ", i);
        }
    }

    return 0;
}