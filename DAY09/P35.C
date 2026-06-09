// Write a program to Print repeated character pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE

#include<stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char k='A'+i;
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}