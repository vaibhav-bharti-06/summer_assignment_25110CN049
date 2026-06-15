// Write a program to Reverse array.
#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n - 1;
    while (right > left)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}