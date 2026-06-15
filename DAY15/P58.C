// Write a program to Rotate array left.
#include <stdio.h>

int main()
{
    int n, k;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your Array:");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter number of left rotation takes place:");
    scanf("%d", &k);
    k = k % n;
    for (int i = 1; i <= k; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}