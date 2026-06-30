#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice, len, i, count;
    char ch;

    printf("=== String Operations System ===\n");

    while(1) {
        printf("Menu\n");
        printf("1. Input String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Count Vowels\n");
        printf("8. Convert to Uppercase\n");
        printf("9. Convert to Lowercase\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Input String
                printf("Enter String: ");
                scanf(" %[^\n]", str1);
                printf("String Stored: %s\n", str1);
                break;

            case 2: // Find Length
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    len = strlen(str1);
                    printf("Length of '%s' = %d\n", str1, len);
                }
                break;

            case 3: // Copy String
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    strcpy(str2, str1);
                    printf("Copied! str2 = %s\n", str2);
                }
                break;

            case 4: // Concatenate
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("After Concatenation: %s\n", result);
                break;

            case 5: // Compare
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                if(strcmp(str1, str2) == 0) {
                    printf("Both strings are EQUAL\n");
                }
                else {
                    printf("Strings are NOT EQUAL\n");
                }
                break;

            case 6: // Reverse
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    len = strlen(str1);
                    printf("Reverse: ");
                    for(i = len - 1; i >= 0; i--) {
                        printf("%c", str1[i]);
                    }
                    printf("\n");
                }
                break;

            case 7: // Count Vowels
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    count = 0;
                    for(i = 0; str1[i]!= '\0'; i++) {
                        ch = str1[i];
                        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                            count++;
                        }
                    }
                    printf("Total Vowels in '%s' = %d\n", str1, count);
                }
                break;

            case 8: // Uppercase
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    strcpy(result, str1);
                    for(i = 0; result[i]!= '\0'; i++) {
                        if(result[i] >= 'a' && result[i] <= 'z') {
                            result[i] = result[i] - 32;
                        }
                    }
                    printf("Uppercase: %s\n", result);
                }
                break;

            case 9: // Lowercase
                if(strlen(str1) == 0) {
                    printf("Pehle string input karo!\n");
                }
                else {
                    strcpy(result, str1);
                    for(i = 0; result[i]!= '\0'; i++) {
                        if(result[i] >= 'A' && result[i] <= 'Z') {
                            result[i] = result[i] + 32;
                        }
                    }
                    printf("Lowercase: %s\n", result);
                }
                break;

            case 10: // Exit
                printf("Program Exit! Bye\n");
                return 0;

            default:
                printf("Wrong choice! Enter 1-10\n");
        }
    }

    return 0;
}