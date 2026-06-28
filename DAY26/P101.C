// Write a program to Create number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int secret,guess,count=0;
    int max,min;
    printf("Enter the maximum and minimum number:\n");
    scanf("%d %d",&max,&min);
    
    srand(time(NULL));
    secret=rand()%(max-min+1)+min;
    printf("guess the number between %d to %d:",min,max);
    do
    {
        printf("Enter your guess:");
        scanf("%d",&guess);
        count++;
        if(guess<secret){
        printf("too low\n");
        }
        else if(guess>secret){
        printf("too high\n");
        }
        else{
        printf("Correct!,You guessed it\nTries= %d",count);
        }
    }
    while(guess!=secret);
    return 0;
}