// Write a program to Write function for perfect number.
#include <stdio.h>
void perfect(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    perfect(n);
}