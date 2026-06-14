// Write a program to Find duplicates in array.

#include <stdio.h>

int main() {
    int n, i, j, k;
    int arr[100];
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");

    for(i = 0; i < n; i++) {

        int alreadyPrinted = 0;

        /* Check if current element appeared before */
        for(k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        /* Check for duplicate later in array */
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found) {
        printf("No duplicate elements found.");
    }

    return 0;
}