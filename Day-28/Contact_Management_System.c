#include <stdio.h>
struct Contact
{
    char name[30];
    char phone[15];
};
int main()
{
    struct Contact c[100];
    int n = 0, choice, i, found;
    char search[30];

    while (1)
    {
        printf("\n         Contact Management System          \n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf("%s", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No contacts found.\n");
            }
            else
            {
                printf("\nContact List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nName : %s", c[i].name);
                    printf("\nPhone: %s\n", c[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter Name to search: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, search) == 0)
                {
                    printf("\nContact Found\n");
                    printf("Name : %s\n", c[i].name);
                    printf("Phone: %s\n", c[i].phone);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Contact not found.\n");
            }
            break;

        case 4:
            printf("Enter Name to delete: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, search) == 0)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Contact deleted successfully.\n");
                    break;
                }
            }

            if(!found)
            {
                printf("Contact not found.\n");
            }
            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}