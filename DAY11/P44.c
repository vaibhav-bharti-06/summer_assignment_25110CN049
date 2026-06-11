// Write a program to Write function to find factorial.
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    printf("factorial=%d", factorial(n));
    return 0;
}