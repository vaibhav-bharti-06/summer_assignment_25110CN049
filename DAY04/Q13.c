// Write a program to Generate Fibonacci series.
// Fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
#include <stdio.h>

int main()
{
    int n, c;
    int a = 0;
    int b = 1;
    printf("enter number upto you want fibonacci series:");
    scanf("%d", &n);
    printf("Fibonacci series upto %dth term:", n);

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}