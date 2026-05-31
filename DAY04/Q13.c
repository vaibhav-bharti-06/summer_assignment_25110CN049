// Write a program to Generate Fibonacci series.
// Fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
#include <stdio.h>

int main()
{
    int sum = 0, n,c;
    int a = 0;
    int b = 1;
    printf("enter number upto you want fibonacci series:");
    scanf("%d", &n);
    printf("Fibonacci series upto %dth term:", n);
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("1");
    }
    else{
    for (int i = 3; i <= n; i++)
    {

        c = a + b;
        a = b;
        b = c;
        printf("%d", c);
    }
    }

    return 0;
}