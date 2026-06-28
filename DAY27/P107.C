#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    int i,j,choice,found=0,n=0;
    char search[100];
    struct employee{
        char id[100];
        char name[1000];
        char department[100];
        int salary;
        int allowance;
        int deduction;
        int peryearincrement;
        int netsalary;
    };
    struct employee e[max];
    while(1)
    {
    printf("EMPLOYEE SALARY MANAGEMENT SYSTEM:\n");
    printf("1 - Display employee detail.\n2 - Add an employee detail.\n3 - Search an employee detail by ID.\n4 - Update salary.\n5 - Delete an employee detail.\n6 - Exit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    while(getchar()!='\n');
    
    switch(choice)
    {
        case 1 : printf("Display employee detail:\n");
        if(n>=max||n==0){
            printf("No record found!");
            break;
        }
        for(i=0;i<n;i++){
            printf("Employee ID-%s\tName-%s\tDepartment-%s\tSalary-%d\tAllowance-%d\tDeduction-%d\tIncrement per year-%d\nNet salary-%d\n",e[i].id,e[i].name,e[i].department,e[i].salary,e[i].allowance,e[i].deduction,e[i].peryearincrement,e[i].netsalary);
        }
        break;  

        case 2 : printf("Add an employee detail:\n");
        if(n>=max){
            printf("Records are full.");
            break;
        }
        printf("Enter employee id:\n");
        fgets(e[n].id,100,stdin);
        e[n].id[strcspn(e[n].id,"\n")]='\0';
        
        printf("Enter employee name:\n");
        fgets(e[n].name,1000,stdin);
        e[n].name[strcspn(e[n].name,"\n")]='\0';

        printf("Enter department:\n");
        fgets(e[n].department,100,stdin);
        e[n].department[strcspn(e[n].department,"\n")]='\0';

        printf("Enter current salary:\n");
        scanf("%d",&e[n].salary);
        while(getchar()!='\n');

        printf("Enter allowance:\n");
        scanf("%d",&e[n].allowance);
        while(getchar()!='\n');

        printf("Enter deduction:\n");
        scanf("%d",&e[n].deduction);
        while(getchar()!='\n');

        printf("Enter per year increment:");
        scanf("%d",&e[n].peryearincrement);
        while(getchar()!='\n');

        e[n].netsalary = e[n].salary+e[n].allowance-e[n].deduction; 

        n++;
        printf("Added successfully.");
        break; 

        case 3 : printf("Search an employee detail by employee ID:\n");
        printf("Enter the employee id to be searched:\n");
        fgets(search,100,stdin);
        search[strcspn(search,"\n")]='\0';
        for(i=0;i<n;i++){
            if(strcmp(e[i].id,search)==0){
                printf("Employee ID-%s\tName-%s\tDepartment-%s\tSalary-%d\tAllowance-%d\tDeduction-%d\tIncrement per year-%d\nNet salary-%d\n",e[i].id,e[i].name,e[i].department,e[i].salary,e[i].allowance,e[i].deduction,e[i].peryearincrement,e[i].netsalary);
                break;
            }
        }
        if(i==n){
            printf("Record not found.\n");
        }
        break;

        case 4 : printf("Updating salary:\n");
        found =0;
        printf("Enter employee id for updating salary:\n");
        fgets(search,100,stdin);
        search[strcspn(search,"\n")]='\0';
        for(i=0;i<n;i++){
            if(strcmp(e[i].id,search)==0){
                e[i].allowance+=e[i].salary*e[i].peryearincrement/100;
                e[i].netsalary=e[i].salary+e[i].allowance-e[i].deduction;
                printf("salary updated for 1 year:");
                printf("allowance:%d\n",e[i].allowance);
                printf("net salary:%d\n",e[i].netsalary);
                found=1;
                break;
            }
        }
        if(found==0){
        printf("Record not found!\n");
        printf("Updation unsucessfull!\n");
        }
        break;
        case 5 : printf("Delete an employee detail:\n");
        found=0;
        printf("Enter the employee id whose details has to be deleted:\n");
        fgets(search,100,stdin);
        search[strcspn(search,"\n")]='\0';
        for(i=0;i<n;i++){
            if(strcmp(e[i].id,search)==0){
                for(j=i;j<n-1;j++){
                    e[j]=e[j+1];
                    found =1;
                }
            }
        }
        n--;
        printf("Deletion successfull.\n");
        break;
        if(found==0){
            printf("not found,deletion unsucessfull!\n");
        }
        break;

        case 6 : printf("Exit\n");
        return 0;
        break;
        
        default : printf("Invalid\n");
    }
}
}