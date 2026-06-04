// Write a program to Check Armstrong number.

/* An Armstrong number (also known as a narcissistic number) is a positive integer that is equal to the
 sum of its own digits, each raised to the power of the total number of digits*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0, sum = 0;
    printf("enter number:");
    scanf("%d", &n);
    int original = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    original=n;
    while (n > 0)
    {
        int temp = n % 10;
        sum = sum + pow(temp, count);
        n = n / 10;
    }
    if (sum == original)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}