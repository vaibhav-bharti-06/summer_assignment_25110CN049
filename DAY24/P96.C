#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    int cpy;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String after removing duplicates: ");
    for (i = 0; str[i] != '\0'; i++) {
        cpy = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                cpy = 1;
                break;
            }
        }
        if (cpy == 0) {
            printf("%c", str[i]);
        }
    }
    return 0;
}