// WAP TO PRINT PRIME NUMBER IN A RANGE
#include <stdio.h>

int main()
{
    int m, n;
    printf("enter first number:");
    scanf("%d", &m);
    printf("enter second number:");
    scanf("%d", &n);

    printf("prime number from %d to %d:\n", m, n);
    for (int i = m; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
