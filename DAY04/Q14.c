//WAP to find nth term in fibonacci series
#include <stdio.h>

int main()
{
    int sum = 0, n;
    int a = 0;
    int b = 1;
    int c;
    printf("enter term you want to find in fibonacci series:");
    scanf("%d", &n);
    printf("%dth term in fibonacci series is:", n);
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
    }
    printf("%d", c);
    }
    return 0;
}