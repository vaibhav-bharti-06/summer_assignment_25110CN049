// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf(" ");

        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}