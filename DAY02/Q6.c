//Write a program to Reverse a number. 
#include <stdio.h>

int main() {
    int n,rev=0;
    printf("enter number:");
    scanf("%d",&n);
    while (n>0)
    {
        int temp=n%10;
        rev=temp+rev*10;
        n=n/10;
    }
    printf("reverse of the given number:%d",rev);
    
    return 0;
}