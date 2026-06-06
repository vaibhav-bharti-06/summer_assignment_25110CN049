// Write a program to Find x^n without pow().
#include <stdio.h>

int main()
{
    int n, pow, ans=1;
    printf("enter number:");
    scanf("%d", &n);
    printf("enter power:");
    scanf("%d", &pow);
    for (int i = 1; i <= pow; i++)
    {
        ans = ans * n;
    }
    printf("answer=%d", ans);
    return 0;
}