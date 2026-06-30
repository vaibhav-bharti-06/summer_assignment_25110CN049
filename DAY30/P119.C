#include <stdio.h>
#include <string.h>
struct Employee {
    int empId;
    char name[30];
    char dept[20];
    float salary;
    int age;
};

int main() {
    struct Employee emp[50]; // 50 employees store kar sakte hain
    int count = 0, choice, i, searchId, found;
    float totalSalary;

    printf("=== Employee Management System ===\n");

    while(1) {
        printf("Menu\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search by Employee ID\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Show Highest Salary\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Employee
                if(count >= 50) {
                    printf("Record Full! Max 50 employees\n");
                }
                else {
                    emp[count].empId = 1001 + count;

                    printf("Enter Name: ");
                    scanf(" %[^\n]", emp[count].name);

                    printf("Enter Department: ");
                    scanf(" %[^\n]", emp[count].dept);

                    printf("Enter Age: ");
                    scanf("%d", &emp[count].age);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[count].salary);

                    if(emp[count].age < 18 || emp[count].salary < 0) {
                        printf("Invalid Age or Salary!\n");
                    }
                    else {
                        printf("Employee Added! Emp ID: %d\n", emp[count].empId);
                        count++;
                    }
                }
                break;
            case 2: // Display All
                if(count == 0) {
                    printf("No records! Pehle employee add karo\n");
                }
                else {
                    printf("\nID Name Dept Age Salary\n");
                    for(i = 0; i < count; i++) {
                        printf("%d %s %s %d %.2f\n",
                               emp[i].empId,
                               emp[i].name,
                               emp[i].dept,
                               emp[i].age,
                               emp[i].salary);
                    }
                }
                break;
            case 3: // Search by ID
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(emp[i].empId == searchId) {
                        found = 1;
                        printf("Employee Found\n");
                        printf("Emp ID: %d\n", emp[i].empId);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].dept);
                        printf("Age: %d\n", emp[i].age);
                        printf("Salary: %.2f\n", emp[i].salary);
                        break;
                    }
                }
                if(found == 0) {
                    printf("Employee ID %d not found!\n", searchId);
                }
                break;
            case 4: // Update Salary
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(emp[i].empId == searchId) {
                        found = 1;
                        printf("Employee: %s\n", emp[i].name);
                        printf("Current Salary: %.2f\n", emp[i].salary);
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);
                        if(emp[i].salary < 0) {
                            printf("Salary negative nahi ho sakti!\n");
                            emp[i].salary = 0;
                        }
                        else {
                            printf("Salary Updated Successfully!\n");
                        }
                        break;
                    }
                }
                if(found == 0) {
                    printf("Employee not found!\n");
                }
                break;
            case 5: // Delete Employee
                printf("Enter Employee ID to delete: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(emp[i].empId == searchId) {
                        found = 1;
                        printf("Deleting: %s\n", emp[i].name);
                        for(int j = i; j < count - 1; j++) {
                            emp[j] = emp[j + 1];
                        }
                        count--;
                        printf("Employee Deleted Successfully!\n");
                        break;
                    }
                }
                if(found == 0) {
                    printf("Employee not found!\n");
                }
                break;
            case 6: // Exit
                printf("Exiting System. Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice! Enter 1-6\n");
        }
    }
    return 0;
}