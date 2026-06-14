// Write a program to Second largest element.
#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest;
    int sec_largest;
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        sec_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        sec_largest = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] < largest)
        {
            sec_largest = arr[i];
        }
    }
    printf("largest=%d\n",largest);
    printf("second largest=%d",sec_largest);
   
    return 0;
}