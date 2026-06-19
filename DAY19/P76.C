#include <stdio.h>
int main() {
    int r, c, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int A[10][10];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        sum += A[i][i];
    }
    printf("Diagonal Sum = %d\n", sum);
    return 0;
}