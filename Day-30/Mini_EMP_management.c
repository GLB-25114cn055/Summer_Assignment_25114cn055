#include <stdio.h>
#include <string.h>
int main()
{
    int id[100], age[100], n = 0;
    float salary[100];
    char name[100][30];
    int choice, i, searchId, found;

    while (1)
    {
        printf("\n# Mini Employee Management System #\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &id[n]);

            printf("Enter Employee Name: ");
            scanf("%s", name[n]);

            printf("Enter Age: ");
            scanf("%d", &age[n]);

            printf("Enter Salary: ");
            scanf("%f", &salary[n]);

            n++;
            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No employee records found.\n");
            }
            else
            {
                printf("\nEmployee Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", id[i]);
                    printf("\nName        : %s", name[i]);
                    printf("\nAge         : %d", age[i]);
                    printf("\nSalary      : %.2f\n", salary[i]);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    printf("\nEmployee Found\n");
                    printf("Employee ID : %d\n", id[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Age         : %d\n", age[i]);
                    printf("Salary      : %.2f\n", salary[i]);

                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Employee not found.\n");
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