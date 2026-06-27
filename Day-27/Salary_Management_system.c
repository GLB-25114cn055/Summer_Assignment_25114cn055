#include <stdio.h>
struct Employee
{
    int id;
    char name[30];
    float basic, hra, da, gross;
};
int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n- Salary Management System -\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic);

        
            emp[n].hra = emp[n].basic * 0.20;
            emp[n].da = emp[n].basic * 0.10;
            emp[n].gross = emp[n].basic + emp[n].hra + emp[n].da;

            n++;
            printf("Salary record added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nSalary Details:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", emp[i].id);
                    printf("\nName        : %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basic);
                    printf("\nHRA         : %.2f", emp[i].hra);
                    printf("\nDA          : %.2f", emp[i].da);
                    printf("\nGross Salary: %.2f\n", emp[i].gross);
                }
            }
            break;

        case 3:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}