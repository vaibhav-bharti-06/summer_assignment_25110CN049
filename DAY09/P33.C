// Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *
#include <stdio.h>

int main()
{
    int row;
    printf("enter no.of rows:");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)
        {
            printf("*");
        }
       printf("\n");
    }
    return 0;
}