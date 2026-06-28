#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    int i,j,n=0,choice,found;
    char search[100];
    struct empolyee{
        char ID[100];
        char name[1000];
        char department[1000];
        int exprience;
        int salary;
    };
    struct empolyee e[max];
    while(1)
    {
    printf("Employee management system:\n");
    printf("1-Display employee details\n2-Add a employee detail\n3-Search employee detail by ID\n4-Delete employee detail\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    while(getchar()!='\n');
    
    switch(choice)
    {
        case 1 : printf("Display employee detail:\n");
        if(n==0||n>max){
            printf("No records found."); 
            break;
        }
        printf("Employee ID\tName\tDepartment\tExprience\tSalary\n");
        for(i=0;i<n;i++){
        printf("%s\t%s\t%s\t%d\t%d\n",e[i].ID,e[i].name,e[i].department,e[i].exprience,e[i].salary);
        }
        break;

        case 2 : printf("Adding a employee detail:\n");
        if(n>=max){
            printf("Records are full.\n");
            break;
        }
        printf("Enter the employee ID:\n");
        fgets(e[n].ID,100,stdin);
        e[n].ID[strcspn(e[n].ID,"\n")]='\0';
        
        printf("Enter employee name:\n");
        fgets(e[n].name,1000,stdin);
        e[n].name[strcspn(e[n].name,"\n")]='\0';

        printf("Enter department:\n");
        fgets(e[n].department,1000,stdin);
        e[n].department[strcspn(e[n].department,"\n")]='\0';

        printf("Emter working exprience:\n");
        scanf("%d",&e[n].exprience);
        while(getchar()!='\n');

        printf("Enter employee current salary:\n");
        scanf("%d",&e[n].salary);
        while(getchar()!='\n');

        n++;
        printf("Added successfully.\n");
        break;

        case 3 : printf("Search employee detail by employee ID:");
        printf("Enter the employee ID to be searched:\n");
        fgets(search,100,stdin);
        search[strcspn(search,"\n")]='\0';
        for(i=0;i<n;i++){
            if(strcmp(e[i].ID,search)==0){
                printf("Employee found.\n");
                printf("Employee ID-%s\tName-%s\tDepartment-%s\tWorking Exprience-%d\tCurrent salary-%d\t",e[i].ID,e[i].name,e[i].department,e[i].exprience,e[i].salary);
                break;
            }
        }
        if(i==n){
            printf("No records found!");
        }
        break;

        case 4 : printf("Delete an employee detail:");
        found=0;
        printf("Enter employee ID whose detail has to be deleted:");
        fgets(search,100,stdin);
        search[strcspn(search,"\n")]='\0';
        for(i=0;i<n;i++){
            if(strcmp(e[i].ID,search)==0){
                for(j=i;j<n-1;j++){
                    e[j]=e[j+1];
                    found=1;
                }
            }
        }
        n--;
        printf("Deleted successfuly.\n");
        break;
        if(found==0){
            printf("Record not found,deletion unsuccessfull!\n");
            break;
        }

        case 5 : printf("exit\n");
        return 0;
        break;

        default : printf("Invalid\n");

    }

  }
  return 0;

}