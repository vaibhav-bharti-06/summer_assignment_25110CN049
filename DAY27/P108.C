#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    int i,j,choice,n=0,rollnum,totalmarks=70,found;
    struct student{
        int rollnumber;
        char name[100];
        double sub1,sub2,sub3,sub4,sub5;
        double percentage,sum;
        char grade;
    };
    struct student s[max];
    printf("Marksheet generation system:\n");
    while(1)
    {
        printf("1 - Marksheet display\n2 - Add a student's marksheet\n3 - Search a student's marksheet\n4 - Delete a student's marksheet\n5 - Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        while(getchar()!='\n');
        
        switch(choice)
        {
            case 1 : printf("Marksheet display:\n");
            if(n>=max||n==0){
                printf("no records found\n");
                break;
            }
            for(i=0;i<n;i++){
            printf("Roll number - %d\tName - %s\tPercentage - %0.2f\tGrade - %c\n",s[i].rollnumber,s[i].name,s[i].percentage,s[i].grade);
            printf("Maths1-%0.2f\tSS-%0.2f\tChem-%0.2f\tPhysics-%0.2f\tPps-%0.2f\n",s[i].sub1,s[i].sub2,s[i].sub3,s[i].sub4,s[i].sub5);
            }
            break;

            case 2 : printf("Add a students marksheet:\n");
            printf("Enter roll number:\n");
            scanf("%d",&s[n].rollnumber);
            while(getchar()!='\n');

            printf("Enter name:\n");
            fgets(s[n].name,100,stdin);
            s[n].name[strcspn(s[n].name,"\n")]='\0';

            printf("Enter marks of maths1,softskill,chemistry,physics,pps:\n");
            scanf("%lf %lf %lf %lf %lf",&s[n].sub1,&s[n].sub2,&s[n].sub3,&s[n].sub4,&s[n].sub5);
            while(getchar()!='\n');

            s[n].sum=s[n].sub1+s[n].sub2+s[n].sub3+s[n].sub4+s[n].sub5;
            s[n].percentage=(s[n].sum/(totalmarks*5))*100;
            if(s[n].percentage>90&&s[n].percentage<=100){
                s[n].grade = 'A';
            }
            else if(s[n].percentage>80&&s[n].percentage<=90){
                s[n].grade = 'B';
            }
            else if(s[n].percentage>70&&s[n].percentage<=80){
                s[n].grade = 'C';
            }
            else if(s[n].percentage>60&&s[n].percentage<=70){
                s[n].grade = 'D';
            }
            else if(s[n].percentage<=33.3){
                // F= fail
                s[n].grade = 'F';
            }
            else{
                //L= low grade
                s[n].grade = 'L';
            }
            n++;
            printf("Added sucessfully!\n");
            break;

            case 3 : printf("Search a student's marksheet:\n");
            found=0;
            printf("Enter rollnumber to search\n");
            scanf("%d",&rollnum);
            while(getchar()!='\n');
            for(i=0;i<n;i++){
                if(rollnum==s[i].rollnumber){
                    printf("Student found!\n");
                    printf("Roll number - %d\tName - %s\tPercentage - %0.2f\tGrade - %c\n",s[i].rollnumber,s[i].name,s[i].percentage,s[i].grade);
                    printf("Maths1-%0.2f\nSS-%0.2f\nChem-%0.2f\nPhysics-%0.2f\nPps-%0.2f\n",s[i].sub1,s[i].sub2,s[i].sub3,s[i].sub4,s[i].sub5);
                    found =1;
                    break;
                }
            }
            if(found==0){
                printf("No record found!\n");
            }
            break;

            case 4 : printf("Delete a student's marksheet detail:\n");
            found=0;
            printf("Enter rollnumber to search\n");
            scanf("%d",&rollnum);
            if(rollnum==s[n].rollnumber){
            while(getchar()!='\n');
            for(i=0;i<n;i++){
                for(j=i;j<n-1;j++){
                    s[j]=s[j+1];
                    found =1;
                }
            }
        }
        n--;
        printf("Deletion sucessfull!\n");
        break;
        if(found==0){
            printf("No record found!\n");
        }
        break;

        case 5 : printf("Exit\n");
        return 0;
        break;

        default : printf("Invalid\n");
    }
}
return 0;
}