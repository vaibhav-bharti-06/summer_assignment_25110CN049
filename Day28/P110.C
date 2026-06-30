#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n--- Library Management System ---");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);
                n++;
                break;

            case 2:
                for(i=0;i<n;i++) {
                    printf("\nID: %d", b[i].id);
                    printf("\nTitle: %s", b[i].title);
                    printf("\nAuthor: %s\n", b[i].author);
                }
                break;

            case 3:
                found=0;
                printf("Enter Book ID: ");
                scanf("%d",&id);
                for(i=0;i<n;i++) {
                    if(b[i].id==id) {
                        printf("\nBook Found");
                        printf("\nTitle: %s", b[i].title);
                        printf("\nAuthor: %s\n", b[i].author);
                        found=1;
                    }
                }
                if(!found)
                    printf("Book Not Found");
                break;

            case 4:
                return 0;
        }
    }
}