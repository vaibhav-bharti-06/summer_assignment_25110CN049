// Write a program to Frequency of an element.

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
    int count = 0, search, found = 0;
    printf("enter element want to find:");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    printf("frequency of entred element is:%d", count);
    return 0;
}