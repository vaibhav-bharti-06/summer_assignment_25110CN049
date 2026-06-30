#include <stdio.h>
#include <string.h>
struct Book {
    int bookId;
    char title[30];
    char author[30];
    int totalCopies;
    int available;
};
int main() {
    struct Book library[50]; 
    int count = 0, choice, i, searchId, found;
    printf("Library System using Struct\n");
    while(1) {
        printf("Menu\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: // Add Book
                if(count >= 50) {
                    printf("Library Full! Max 50 books\n");
                }
                else {
                    library[count].bookId = 1001 + count;
                    
                    printf("Enter Book Title: ");
                    scanf(" %[^\n]", library[count].title);
                    
                    printf("Enter Author Name: ");
                    scanf(" %[^\n]", library[count].author);
                    
                    printf("Enter Total Copies: ");
                    scanf("%d", &library[count].totalCopies);

                    if(library[count].totalCopies <= 0) {
                        printf("Copies 0 ya negative nahi ho sakti!\n");
                    }
                    else {
                        library[count].available = library[count].totalCopies;
                        printf("Book Added! Book ID: %d\n", library[count].bookId);
                        count++;
                    }
                }
                break;
            case 2: // Display All Books
                if(count == 0) {
                    printf("Library Empty! Pehle book add karo\n");
                }
                else {
                    printf("\nID Title Author Total Avail\n");
                    for(i = 0; i < count; i++) {
                        printf("%d %s %s %d %d\n",
                               library[i].bookId, 
                               library[i].title, 
                               library[i].author,
                               library[i].totalCopies, 
                               library[i].available);
                    }
                }
                break;
            case 3: // Search Book
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].bookId == searchId) {
                        found = 1;
                        printf("Book Found\n");
                        printf("Book ID: %d\n", library[i].bookId);
                        printf("Title: %s\n", library[i].title);
                        printf("Author: %s\n", library[i].author);
                        printf("Total Copies: %d\n", library[i].totalCopies);
                        printf("Available: %d\n", library[i].available);
                        break;
                    }
                }
                if(found == 0) {
                    printf("Book ID %d not found!\n", searchId);
                }
                break;
            case 4: // Issue Book
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].bookId == searchId) {
                        found = 1;
                        if(library[i].available > 0) {
                            library[i].available = library[i].available - 1;
                            printf("Book Issued Successfully!\n");
                            printf("Title: %s\n", library[i].title);
                            printf("Copies Left: %d\n", library[i].available);
                        }
                        else {
                            printf("Sorry! No copies available\n");
                        }
                        break;
                    }
                }
                if(found == 0) {
                    printf("Invalid Book ID!\n");
                }
                break;
            case 5: // Return Book
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].bookId == searchId) {
                        found = 1;
                        if(library[i].available < library[i].totalCopies) {
                            library[i].available = library[i].available + 1;
                            printf("Book Returned Successfully!\n");
                            printf("Title: %s\n", library[i].title);
                            printf("Available Now: %d\n", library[i].available);
                        }
                        else {
                            printf("Error! All copies already in library\n");
                        }
                        break;
                    }
                }
                if(found == 0) {
                    printf("Invalid Book ID!\n");
                }
                break;
            case 6: // Exit
                printf("Thank You for using Library System!\n");
                return 0;
            default:
                printf("Invalid Choice! Enter 1-6\n");
        }
    }
    return 0;
}