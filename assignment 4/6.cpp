#include <stdio.h>
#include <string.h>

// Define a structure for a book
struct Book {
    char title[100];
    char author[100];
    int year_published;
};

int main() {
    int choice;
    int book_count = 0;
    struct Book library[100];

    do {
        // Display menu options
        printf("\nMenu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");

        // Accept user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add book details
                printf("\nEnter book details:\n");

                printf("Title: ");
                fgets(library[book_count].title, sizeof(library[book_count].title), stdin);
                library[book_count].title[strcspn(library[book_count].title, "\n")] = 0;  // Remove trailing newline

                printf("Author: ");
                fgets(library[book_count].author, sizeof(library[book_count].author), stdin);
                library[book_count].author[strcspn(library[book_count].author, "\n")] = 0;  // Remove trailing newline

                printf("Year published: ");
                scanf("%d", &library[book_count].year_published);

                book_count++;
                printf("Book added successfully.\n");
                break;

            case 2:
                // Display book details
                printf("\nBook details:\n");
                for (int i = 0; i < book_count; i++) {
                    printf("Book %d:\n", i+1);
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("Year published: %d\n", library[i].year_published);
                }
                break;

            case 3:
                // List all books of given author
                char author[100];
                printf("\nEnter author name: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = 0;  // Remove trailing newline

                printf("\nBooks by %s:\n", author);
                for (int i = 0; i < book_count; i++) {
                    if (strcmp(library[i].author, author) == 0) {
                        printf("%s\n", library[i].title);
                    }
                }
                break;

            case 4:
                // List the count of books in the library
                printf("\nNumber of books in the library: %d\n", book_count);
                break;

            case 5:
                // Exit the program
                printf("\nExiting program.\n");
                break;

            default:
                // Invalid choice
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

