#include<stdio.h>
#include<string.h>
int main()
{
int i,a,b;
char str[100][50],temp[50];
printf("Enter number of words:");
scanf("%d",&i);
while(getchar()!='\n');
printf("Enter %d names:\n",i);
for(a=0;a<i;a++){
    fgets(str[a],50,stdin);
    str[a][strcspn(str[a],"\n")]='\0';
}
//sorting string by length
for(a=0;a<i-1;a++){
    for(b=0;b<i-1-a;b++){
        if(strlen(str[b])>strlen(str[b+1])){
            strcpy(temp,str[b]);
            strcpy(str[b],str[b+1]);
            strcpy(str[b+1],temp);
        }
    }
}
//sorted string by length.
for(a=0;a<i;a++){
    printf("%s\t",str[a]);
}
return 0;
}