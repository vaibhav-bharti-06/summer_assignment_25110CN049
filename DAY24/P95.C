#include <stdio.h>
#include <string.h>
int main() {
    char str[100], lon[100];
    int i = 0, start = 0;
    int maxLen = 0, len;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            len = i - start;

            if (len > maxLen) {
                maxLen = len;
                strncpy(lon, &str[start], len);
                lon[len] = '\0';
            }
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("Longest word: %s\n", lon);
    printf("Length: %d\n", maxLen);
    return 0;
}