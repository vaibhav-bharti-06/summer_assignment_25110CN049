#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    int i,n=0,choice,found;
    char searchadmission[100];
    struct student {
        char admissionnumber[100];
        char name[1000];
        int class;
        char section[100];
    };
    struct student s[max];
    while(1){
    printf("STUDENT RECORD MANAGEMENT SYSYTEM:");
    printf("Enter choice:\n1 Displaying students detail\n2 Adding a student detail\n3 Searching a student by admission number\n4 Deleting a students detail\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    while(getchar()!='\n');


    switch(choice)
    {
        case 2: //add
        if(n>=max){
            printf("Records full!\n");
            break;
        }
        printf("Enter admission number:");
        fgets(s[n].admissionnumber,100,stdin);
        s[n].admissionnumber[strcspn(s[n].admissionnumber,"\n")]='\0';
        
        printf("Enter name:");
        fgets(s[n].name,1000,stdin);
        s[n].name[strcspn(s[n].name,"\n")]='\0';

        printf("Enter class:");
        scanf("%d",&s[n].class);
        while(getchar()!='\n');
        
        printf("Enter section:");
        fgets(s[n].section,100,stdin);
        s[n].section[strcsp(s[n].section,"\n")]='\0';

        n++;
        printf("Added Sucessfully!");
        break;
        case 1 : //display all student detail
        if(n==0){
            printf("No records found!");
            break;
        }
        printf("\nAdmission number\tName\tClass\tSection\n");
        for(int i=0;i<n;i++){
            printf("%s\t%s\t%d\t%s\n",s[i].admissionnumber,s[i].name,s[i].class,s[i].section);
        }
        break;
        case 3 ://search by admission number
        printf("Enter students admission number:");
        fgets(searchadmission,100,stdin);
        searchadmission[strcspn(searchadmission,"\n")]='\0';
        
        for(i=0;i<n;i++){
            if(strcmp(s[i].admissionnumber,searchadmission)==0){
                printf("Found: %s %s %d %s",s[i].admissionnumber,s[i].name,s[i].class,s[i].section);
                break;
            }
        }
            if(i==n){
                printf("no record found on this admission no. ");
            }
            break;
            case 4 ://deleting record.
            found=0;
            printf("Enter admission no:");
            fgets(searchadmission,100,stdin);
            searchadmission[strcspn(searchadmission,"\n")]='\0';
            for(i=0;i<n;i++){
                if(strcmp(s[i].admissionnumber,searchadmission)==0){
                    for(int j=i;j<n-1;j++){
                        s[j]=s[j+1];
                    }
                    n--;
                    printf("Deleted\n");
                    found =1;
                    break;
                }
            }
            if(found==0){
                printf("Not found.\n");
            }
            break;
             case 5 :
             printf("Exit\n");
             return 0; 

             default:
             printf("Invalid\n");
        }
    }
}