// Write a program to Convert decimal to binary.
#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("enter number:");
    scanf("%d", &n);
    printf("binary representation of %d is: ", n);
    while (n > 0)
    {
        int remainder = n % 2;
        sum = sum + remainder * i;
        i = i * 10;
        n = n / 2;
    }
    printf("%d", sum);
    return 0;
}