// The mini Project is of a password manager system which saves the password .
// this projects use strings, arrays, and function .

#include <stdio.h>
#include <string.h>

char website[100][30];
char username[100][30];
char password[100][30];
int n = 0;

void addPassword();
void displayPasswords();
void searchPassword();

int main()
{
    int choice;

    while (1)
    {
        printf("\n##  Password Manager  ##\n");
        printf("1. Add Password\n");
        printf("2. Display Passwords\n");
        printf("3. Search Password\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPassword();
            break;

        case 2:
            displayPasswords();
            break;

        case 3:
            searchPassword();
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}

void addPassword()
{
    printf("Enter Website Name: ");
    scanf("%s", website[n]);

    printf("Enter Username: ");
    scanf("%s", username[n]);

    printf("Enter Password: ");
    scanf("%s", password[n]);

    n++;

    printf("Password saved successfully.\n");
}

void displayPasswords()
{
    int i;

    if (n == 0)
    {
        printf("No passwords stored.\n");
        return;
    }

    printf("\nStored Passwords:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nWebsite : %s", website[i]);
        printf("\nUsername: %s", username[i]);
        printf("\nPassword: %s\n", password[i]);
    }
}

void searchPassword()
{
    char search[30];
    int i, found = 0;

    printf("Enter Website Name: ");
    scanf("%s", search);

    for (i = 0; i < n; i++)
    {
        if (strcmp(search, website[i]) == 0)
        {
            printf("\nWebsite : %s", website[i]);
            printf("\nUsername: %s", username[i]);
            printf("\nPassword: %s\n", password[i]);

            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Website not found.\n");
    }
}