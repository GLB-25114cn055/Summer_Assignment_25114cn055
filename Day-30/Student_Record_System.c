#include <stdio.h>
#include <string.h>
int main()
{
    int roll[100], age[100], n = 0;
    char name[100][30];
    int choice, i, r, found;

    while (1)
    {
        printf("\n# Student Record System #\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &roll[n]);

            printf("Enter Name: ");
            scanf("%s", name[n]);

            printf("Enter Age: ");
            scanf("%d", &age[n]);

            n++;
            printf("Student added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nStudent Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", roll[i]);
                    printf("\nName    : %s", name[i]);
                    printf("\nAge     : %d\n", age[i]);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &r);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    printf("\nStudent Found\n");
                    printf("Roll No : %d\n", roll[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Age     : %d\n", age[i]);
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Student not found.\n");
            }
            break;

        case 4:
            printf("Enter Roll Number to update: ");
            scanf("%d", &r);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    printf("Enter New Name: ");
                    scanf("%s", name[i]);

                    printf("Enter New Age: ");
                    scanf("%d", &age[i]);

                    printf("Record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Student not found.\n");
            }
            break;

        case 5:
            printf("Enter Roll Number to delete: ");
            scanf("%d", &r);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        age[j] = age[j + 1];
                        strcpy(name[j], name[j + 1]);
                    }

                    n--;
                    printf("Record deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Student not found.\n");
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