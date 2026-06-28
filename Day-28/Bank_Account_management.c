#include <stdio.h>
struct Account
{
    int accNo;
    char name[30];
    float balance;
};
int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("# Bank Account Management System #\n");

    printf("Create Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    while (1)
    {
        printf("\n1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            a.balance += amount;

            printf("Deposit Successful.\n");
            break;

        case 2:
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(amount <= a.balance)
            {
                a.balance -= amount;
                printf("Withdrawal Successful.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", a.balance);
            break;

        case 4:
            printf("\n# Account Details #\n");
            printf("Account Number : %d\n", a.accNo);
            printf("Account Holder : %s\n", a.name);
            printf("Balance : %.2f\n", a.balance);
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