#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str1[1000],str2[1000];
    printf("Enter string1 value:");
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter string2 value:");
    fgets(str2,1000,stdin);
    str2[strcspn(str2,"\n")]='\0';
    i=strlen(str1);
    j=strlen(str2);
    printf("Common characters in both the string:");
    for(int a=0;a<i;a++){
         char element= str1[a];
         for(int b=0;b<j;b++){
            if(element==str2[b]){
                printf("%c",element);
            }
         }
    }
    return 0;
}