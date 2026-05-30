//Write a program to Check whether a number is palindrome. 
//A palindrome number is a number which read same from forward & backward

#include <stdio.h>

int main() {
    int n,rev=0;
    printf("enter number:");
    scanf("%d",&n);
    int original=n;
    while (n>0)
    {
        int temp=n%10;
        rev=temp+rev*10;
        n=n/10;
    }
    if(rev==original){
        printf("entered number is palindrome");
    }
    else{
        printf("entered number is not palindrome");
    }
    return 0;
}