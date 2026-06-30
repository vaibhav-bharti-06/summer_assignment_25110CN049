#include <stdio.h>
#include <string.h>
int rollNo[50], marks[50][5], totalMarks[50];
char name[50][30];
float percentage[50];
int studentCount = 0;
void addStudent();
void displayAll();
void searchStudent();
void calculateResult();
void showToppers();
void displayMenu();
int main() {
    int choice;
    printf("Student Marks Management System\n");

    while(1) {
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: calculateResult(); break;
            case 5: showToppers(); break;
            case 6: 
                printf("Program Exit! Thank You\n");
                return 0;
            default: 
                printf("Wrong choice! 1-6 enter karo\n");
        }
    }
    return 0;
}
void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("1. Add Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by Roll No\n");
    printf("4. Calculate Result\n");
    printf("5. Show Toppers - 75+ %%\n");
    printf("6. Exit\n");
}
void addStudent() {
    if(studentCount >= 50) {
        printf("Record Full! Max 50 students\n");
        return;
    }
    rollNo[studentCount] = 1001 + studentCount;   
    printf("Enter Name: ");
    scanf(" %[^\n]", name[studentCount]);  
    printf("Enter marks for 5 subjects:\n");
    for(int j = 0; j < 5; j++) {
        printf("Subject %d: ", j + 1);
        scanf("%d", &marks[studentCount][j]);      
        if(marks[studentCount][j] < 0 || marks[studentCount][j] > 100) {
            printf("Invalid marks! 0-100 ke beech\n");
            marks[studentCount][j] = 0;
        }
    }
    totalMarks[studentCount] = 0;
    for(int j = 0; j < 5; j++) {
        totalMarks[studentCount] += marks[studentCount][j];
    }
    percentage[studentCount] = totalMarks[studentCount] / 5.0; 
    printf("Student Added! Roll No: %d\n", rollNo[studentCount]);
    studentCount++;
}
void displayAll() {
    if(studentCount == 0) {
        printf("No records! Pehle student add karo\n");
        return;
    }
    printf("\nRoll Name Total %% Grade\n");
    for(int i = 0; i < studentCount; i++) {
        char grade;
        if(percentage[i] >= 90) grade = 'A';
        else if(percentage[i] >= 75) grade = 'B';
        else if(percentage[i] >= 60) grade = 'C';
        else if(percentage[i] >= 40) grade = 'D';
        else grade = 'F';
        
        printf("%d %s %d %.2f %c\n", 
               rollNo[i], name[i], totalMarks[i], percentage[i], grade);
    }
}
void searchStudent() {
    int searchRoll, found = 0;
    printf("Enter Roll No: ");
    scanf("%d", &searchRoll);
    for(int i = 0; i < studentCount; i++) {
        if(rollNo[i] == searchRoll) {
            found = 1;
            printf("Student Found\n");
            printf("Roll No: %d\n", rollNo[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: ");
            for(int j = 0; j < 5; j++) {
                printf("%d ", marks[i][j]);
            }
            printf("\nTotal: %d/500\n", totalMarks[i]);
            printf("Percentage: %.2f%%\n", percentage[i]);
            break;
        }
    } 
    if(found == 0) {
        printf("Roll No %d not found!\n", searchRoll);
    }
}
void calculateResult() {
    if(studentCount == 0) {
        printf("No students to calculate!\n");
        return;
    }
    int pass = 0, fail = 0;
    for(int i = 0; i < studentCount; i++) {
        if(percentage[i] >= 40) pass++;
        else fail++;
    }
    printf("Class Result\n");
    printf("Total Students: %d\n", studentCount);
    printf("Passed: %d\n", pass);
    printf("Failed: %d\n", fail);
    printf("Pass Percentage: %.2f%%\n", (pass * 100.0) / studentCount);
}
void showToppers() {
    int found = 0;
    printf("\n--- Toppers - 75+ %% ---\n");
    printf("Roll Name %%\n");

    for(int i = 0; i < studentCount; i++) {
        if(percentage[i] >= 75) {
            printf("%d %s %.2f\n", rollNo[i], name[i], percentage[i]);
            found = 1;
        }
    }
    if(found == 0) {
        printf("No toppers yet!\n");
    }
}