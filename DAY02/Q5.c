//Write a program to Find sum of digits of a number.
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0){
        int temp =n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("sum of the digit of given number:%d",sum);
    return 0;
}