// Write a program to Write function for Fibonacci.
#include <stdio.h>
void fibonacci(int x)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);
    fibonacci(n);
}