// Write a program to Create quiz application. 
#include<stdio.h>
#include<string.h>
int main()
{ 
    int i,j,right=0;
    char ques[100][100],ans[100][10][50],answer[100][50],actual[100][50];
    printf("Enter the number of questions:");
    scanf("%d",&i);
    while(getchar()!='\n');
    printf("Enter the number of options per question:");
    scanf("%d",&j);
    while(getchar()!='\n');
    printf("Enter %d questions for the quiz:\n",i);
    for(int a=0;a<i;a++)
    {
    fgets(ques[a],100,stdin);
    ques[a][strcspn(ques[a],"\n")]='\0';
    }
    printf("Enter the %d options for each %d ques:\n",j,i);
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            fgets(ans[a][b],50,stdin);
            ans[a][b][strcspn(ans[a][b],"\n")]='\0';
        }
    }
    printf("Enter your answer for %d questions:\n",i);
    for(int a=0;a<i;a++){
        fgets(answer[a],50,stdin);
        answer[a][strcspn(answer[a],"\n")]='\0';
    }
    printf("The actual answers for %d questions\n",i);
    for(int a=0;a<i;a++){
        fgets(actual[a],50,stdin);
        actual[a][strcspn(actual[a],"\n")]='\0';
    }
    for(int a=0;a<i;a++){
        if(strcmp(answer[a],actual[a])==0){
            right++;
        }
    }
    printf("result : %d/%d",right,i);
    return 0;
} 