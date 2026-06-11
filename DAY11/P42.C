// Write a program to Write function to find maximum.
#include <stdio.h>
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{

    int n, max, num;
    printf("enter number:");
    scanf("%d", &n);
    printf("enter first number:");
    scanf("%d", &max);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        max = maximum(max, num);
    }
    printf("maximum=%d", max);
    return 0;
}