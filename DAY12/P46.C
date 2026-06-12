// Write a program to Write function for Armstrong

#include <stdio.h>
#include <math.h>
int armstrong(int x)
{
    int sum = 0, count = 0;
    int original = x;
    while (original > 0)
    {
        count++;
        original = original / 10;
    }
    original = x;
    while (original > 0)
    {
        int remainder = original % 10;
        sum = sum + pow(remainder, count);
        original = original / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if (armstrong(n) == n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("armstrong number");
    }
    return 0;
}