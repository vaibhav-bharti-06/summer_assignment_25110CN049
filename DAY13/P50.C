// Write a program to Find sum and average of array.
#include <stdio.h>
int main()
{
    int n, sum = 0,avg;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum=%d", sum);
avg=sum/n;
printf("average=%d",avg);
    return 0;
}
