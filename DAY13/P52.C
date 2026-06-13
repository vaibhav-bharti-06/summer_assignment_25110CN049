//  Write a program to Count even and odd elements.
#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    int even = 0, odd = 0;
    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total number of even element:%d", even);
    printf("total number of odd element:%d", odd);

    return 0;
}