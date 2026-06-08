// Write a program to Recursive reverse number.

#include <stdio.h>

int rev = 0;

void reverseNumber(int n)
{
    if (n == 0)
        return;

    rev = rev * 10 + (n % 10);

    reverseNumber(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverseNumber(n);

    printf("Reversed number = %d", rev);

    return 0;
}