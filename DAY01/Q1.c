// Write a program to Calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter number:");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of first %d number is:%d", n, sum);
    return 0;
}