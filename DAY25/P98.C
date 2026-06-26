#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[100][50],temp[50];
    printf("Enter the number of names:");
    scanf("%d",&i);
    while(getchar()!='\n');
    printf("Enter %d names:\n",i);
    for(j=0;j<i;j++){
        fgets(str[j],50,stdin);
        str[j][strcspn(str[j],"\n")]='\0';
    }
    for(j=0;j<i-1;j++){
        for( int z=0;z<i-1-j;z++){
            if(strcmp(str[z],str[z+1])>0){
                strcpy(temp,str[z]);
                strcpy(str[z],str[z+1]);
                strcpy(str[z+1],temp);
            }
        }
    }
    //printing output
    printf("sorted names:\n");
    for(j=0;j<i;j++){
        printf("%s\t ",str[j]);
    }
    return 0;
}