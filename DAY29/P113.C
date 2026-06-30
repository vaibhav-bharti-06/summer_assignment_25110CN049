#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("=== Simple Calculator ===\n");

    while(1) {
        printf("Menu\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit ke liye alag se check
        if(choice == 5) {
            printf("Calculator Band! Bye\n");
            break;
        }

        // Agar 1-4 hai tabhi numbers input lo
        if(choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch(choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4: // Division
                if(num2 == 0) {
                    printf("Error! 0 se divide nahi kar sakte\n");
                }
                else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;

            default:
                printf("Galat choice! 1-5 ke beech daalo\n");
        }
    }

    return 0;
}