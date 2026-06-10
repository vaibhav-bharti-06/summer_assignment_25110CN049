// Write a program to Print character pyramid
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

#include <stdio.h>
int main()
{
    int n;
   printf("enter no. of rows:");
   scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c",('A' + j));
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%c",('A' + j));
        }
        printf("\n");
    }
}