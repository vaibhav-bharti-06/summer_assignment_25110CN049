// Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE 

#include <stdio.h>

int main()
{
    int i;
    char j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 'A'; j <= 'A' + i - 1; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}