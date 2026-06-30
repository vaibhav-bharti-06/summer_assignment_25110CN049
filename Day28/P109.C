#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b[10];
    int n, i, searchId, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }

    printf("\nLibrary Records:\n");
    printf("--------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d\n", b[i].id);
        printf("Book: %s\n", b[i].name);
        printf("Author: %s\n\n", b[i].author);
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++) {
        if(b[i].id == searchId) {
            printf("\nBook Found!\n");
            printf("Book: %s\n", b[i].name);
            printf("Author: %s\n", b[i].author);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book not found.\n");

    return 0;
}