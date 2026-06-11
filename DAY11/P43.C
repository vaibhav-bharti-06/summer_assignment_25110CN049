// Write a program to Write function to check prime
#include <stdio.h>
#include <stdbool.h>
bool isprime(int x)
{
    if (x <= 1)
    {

        return false;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    if (isprime(n))
    {
        printf("prime number");
    }
    else
    {
        printf("not prime");
    }
}