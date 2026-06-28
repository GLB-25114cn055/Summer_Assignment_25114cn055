#include <stdio.h>
struct Book
{
    int id;
    char name[30];
    char author[30];
    int issued;
};
int main()
{
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n- Library Management System -\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf("%s", b[n].name);

            printf("Enter Author Name: ");
            scanf("%s", b[n].author);

            b[n].issued = 0;
            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if(n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nBook Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", b[i].id);
                    printf("\nBook Name : %s", b[i].name);
                    printf("\nAuthor : %s", b[i].author);

                    if(b[i].issued == 0)
                    {
                        printf("\nStatus : Available\n");
                    } 
                    else
                    {
                        printf("\nStatus : Issued\n");
                    }
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++)
            {
                if(b[i].id == id)
                {
                    printf("\nBook Found\n");
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);

                    if(b[i].issued == 0)
                    {
                        printf("Status : Available\n");
                    }
                    else
                    {
                        printf("Status : Issued\n");
                    }

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
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].issued == 0)
                    {
                        b[i].issued = 1;
                        printf("Book issued successfully.\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Book not found.\n");
            }
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].issued == 1)
                    {
                        b[i].issued = 0;
                        printf("Book returned successfully.\n");
                    }
                    else
                    {
                        printf("Book is already available.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Book not found.\n");
            }
            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}