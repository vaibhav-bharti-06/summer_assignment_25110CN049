// Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****
#include <stdio.h>

int main()
{
    int row, coloumn;
    printf("enter no.of rows:");
    scanf("%d", &row);
    printf("enter no.of coloumn:");
    scanf("%d", &coloumn);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coloumn; j++)
        {
            if (i == 1 || i == row || j == 1 || j == coloumn)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}