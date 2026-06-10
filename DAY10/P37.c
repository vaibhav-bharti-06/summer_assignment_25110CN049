// Write a program to Print star pyramid.
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}