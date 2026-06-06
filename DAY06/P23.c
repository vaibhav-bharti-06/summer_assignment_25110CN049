// Write a program to Count set bits in a number.
/* A bit whose value is:1 is called set bit
A bit whose value is:0 is called unset bit */

#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("enter number:");
    scanf("%d", &n);
    int original = n;
    while (n > 0)
    {
        int remainder = n % 2;
        sum = sum + remainder * i;
        i = i * 10;
        n = n / 2;
    }
    int sum2 = 0;
    while (sum > 0)
    {
        int temp = sum % 10;
        sum2 = sum2 + temp;
        sum = sum / 10;
    }
    printf("set bit in %d is:%d", original, sum2);
    return 0;
}