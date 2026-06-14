// Write a program to Linear search.
#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    printf("enter number you want to search:");
    scanf("%d", &search);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (search == arr[i])
        {
            printf("enter element found at index %d", i);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("enter element not found");
    }

    return 0;
}