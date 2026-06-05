// Write a program to Check perfect number.
/* perfect number = A perfect number is a positive integer that equals the sum of its
  proper positive divisors (excluding the number itself).*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int original = n;
    printf("factors of %d:", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    original = n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (original % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("\n");
    printf("sum of factors excluding number itself = %d\n", sum);

    if (sum == original)
    {
        printf("perfect number");
    }

    else
    {
        printf("not perfect number");
    }
}