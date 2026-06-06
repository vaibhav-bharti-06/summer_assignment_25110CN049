// Write a program to Convert binary to decimal.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    printf("enter binary number:");
    scanf("%d", &n);
    printf("decimal conversion of %d is:", n);
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        sum = sum + pow(remainder * 2, i);
        i++;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}