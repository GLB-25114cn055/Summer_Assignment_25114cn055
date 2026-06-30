#include <stdio.h>
#include <string.h>
int main()
{
    int id[100], n = 0, choice, i, searchId, found;
    char title[100][30], author[100][30];

    while (1)
    {
        printf("\n# Mini Library System #\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &id[n]);

            printf("Enter Book Title: ");
            scanf("%s", title[n]);

            printf("Enter Author Name: ");
            scanf("%s", author[n]);

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nLibrary Books:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", id[i]);
                    printf("\nTitle   : %s", title[i]);
                    printf("\nAuthor  : %s\n", author[i]);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    printf("\nBook Found\n");
                    printf("Book ID : %d\n", id[i]);
                    printf("Title   : %s\n", title[i]);
                    printf("Author  : %s\n", author[i]);
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Book not found.\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}