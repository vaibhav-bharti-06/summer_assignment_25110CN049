#include <STDIO.H>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    int a, b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    int result = sum(a, b);
    printf("sum=%d", result);
    return 0;
}