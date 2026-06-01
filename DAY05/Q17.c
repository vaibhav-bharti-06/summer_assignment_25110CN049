// Write a program to Check strong number.
/*A Strong Number (also called a Krishnamurthy number or Factorion) is a number where the sum of the
factorials of its individual digits equals the original number itself*/

#include <stdio.h>

int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int original = n;

    int sum = 0;
    while (n > 0)
    {
        int factorial = 1;
        int digit;
        digit = n % 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }
        sum = sum+factorial;

        n = n / 10;
    }
    printf("sum of factorial of digits is:%d\n", sum);
    if (sum == original)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }

    return 0;
}