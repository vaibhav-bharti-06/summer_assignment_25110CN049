// Write a program to Find largest and smallest element.

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
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            int temp = max;
            max = arr[i];
            arr[i] = temp;
        }
    }
    printf("largest:%d\n", max);
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            int temp = smallest;
            smallest = arr[i];
            arr[i] = temp;
        }
    }
    printf("smallest:%d",smallest);
    return 0;
}