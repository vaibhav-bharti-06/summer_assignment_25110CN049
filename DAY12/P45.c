// Write a program to Write function for palindrome.
#include <stdio.h>
int palindrome(int x)
{
    int rev = 0;
    while (x > 0)
    {
        int temp = x % 10;
        rev = rev * 10 + temp;
        x = x / 10;
    }
    return rev;
}

int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    if (palindrome(n) == n)
    {
        printf("palindrome number");
    }
    else
    {
        printf("Not palimndrome number ");
    }

    return 0;
}