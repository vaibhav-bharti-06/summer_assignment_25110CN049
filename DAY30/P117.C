#include <stdio.h>
int main() {
    int rollNo[50], age[50], choice, i, searchRoll, found;
    char name[50][30], course[50][20];
    float marks[50];
    int count = 0;
    char grade;

    printf("Student Record System\n");
    while(1) {
        printf("Menu\n");
        printf("1. Add Student\n");
        printf("2. Show All Students\n");
        printf("3. Search by Roll No\n");
        printf("4. Update Marks\n");
        printf("5. Show Toppers\n");
        printf("6. Show Failed Students\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Student
                if(count >= 50) {
                    printf("Record Full! Cannot add more students\n");
                }
                else {
                    rollNo[count] = 1001 + count;
                    printf("Enter Name: ");
                    scanf(" %[^\n]", name[count]);
                    printf("Enter Age: ");
                    scanf("%d", &age[count]);
                    printf("Enter Course: ");
                    scanf(" %[^\n]", course[count]);
                    printf("Enter Marks out of 100: ");
                    scanf("%f", &marks[count]);

                    if(age[count] < 0 || marks[count] < 0 || marks[count] > 100) {
                        printf("Invalid Age or Marks!\n");
                    }
                    else {
                        printf("Student Added! Roll No: %d\n", rollNo[count]);
                        count++;
                    }
                }
                break;

            case 2: // Show All Students
                if(count == 0) {
                    printf("No records yet!\n");
                }
                else {
                    printf("\nRoll Name Age Course Marks Grade\n");
                    for(i = 0; i < count; i++) {
                        // Grade calculate
                        if(marks[i] >= 90) grade = 'A';
                        else if(marks[i] >= 75) grade = 'B';
                        else if(marks[i] >= 60) grade = 'C';
                        else if(marks[i] >= 40) grade = 'D';
                        else grade = 'F';

                        printf("%d %s %d %s %.2f %c\n",
                               rollNo[i], name[i], age[i], 
                               course[i], marks[i], grade);
                    }
                }
                break;
            case 3: // Search by Roll No
                printf("Enter Roll No: ");
                scanf("%d", &searchRoll);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(rollNo[i] == searchRoll) {
                        found = 1;
                        if(marks[i] >= 90) grade = 'A';
                        else if(marks[i] >= 75) grade = 'B';
                        else if(marks[i] >= 60) grade = 'C';
                        else if(marks[i] >= 40) grade = 'D';
                        else grade = 'F';
                        printf("\n--- Student Found ---\n");
                        printf("Roll No: %d\n", rollNo[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Age: %d\n", age[i]);
                        printf("Course: %s\n", course[i]);
                        printf("Marks: %.2f\n", marks[i]);
                        printf("Grade: %c\n", grade);
                        break;
                    }
                }
                if(found == 0) {
                    printf("Roll No %d not found!\n", searchRoll);
                }
                break;
            case 4: // Update Marks
                printf("Enter Roll No: ");
                scanf("%d", &searchRoll);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(rollNo[i] == searchRoll) {
                        found = 1;
                        printf("Student: %s\n", name[i]);
                        printf("Current Marks: %.2f\n", marks[i]);
                        printf("Enter New Marks: ");
                        scanf("%f", &marks[i]);
                        if(marks[i] < 0 || marks[i] > 100) {
                            printf("Invalid Marks! 0-100 ke beech daalo\n");
                            marks[i] = 0; // reset
                        }
                        else {
                            printf("Marks Updated Successfully!\n");
                        }
                        break;
                    }
                }
                if(found == 0) {
                    printf("Roll No not found!\n");
                }
                break;
            case 5: // Show Toppers - 75+ marks
                found = 0;
                printf("Toppers - 75+ Marks\n");
                printf("Roll Name Marks Grade\n");
                for(i = 0; i < count; i++) {
                    if(marks[i] >= 75) {
                        if(marks[i] >= 90) grade = 'A';
                        else grade = 'B';
                        printf("%d %s %.2f %c\n", 
                               rollNo[i], name[i], marks[i], grade);
                        found = 1;
                    }
                }
                if(found == 0) {
                    printf("No toppers yet!\n");
                }
                break;
            case 6: // Show Failed Students - below 40
                found = 0;
                printf("\n--- Failed Students - Below 40 ---\n");
                printf("Roll Name Marks\n");
                printf("------------------------\n");
                for(i = 0; i < count; i++) {
                    if(marks[i] < 40) {
                        printf("%d %s %.2f\n", 
                               rollNo[i], name[i], marks[i]);
                        found = 1;
                    }
                }
                if(found == 0) {
                    printf("All students passed!\n");
                }
                break;
            case 7: // Exit
                printf("Exiting System. Thank You!\n");
                return 0;
            default:
                printf("Wrong choice! Enter 1-7\n");
        }
    }
    return 0;
}