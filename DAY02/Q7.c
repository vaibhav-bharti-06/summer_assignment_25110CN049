//Write a program to Find product of digits. 
#include <stdio.h>

int main() {
    int n,product=1;
    printf("enter number:");
    scanf("%d",&n);
    while (n>0)
    {
       
        int temp=n%10;
        product=product*temp;
        n=n/10;

    }
    printf("product of digit:%d",product);
    
    return 0;
}