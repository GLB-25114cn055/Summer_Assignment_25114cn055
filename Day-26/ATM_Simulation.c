#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin)
    {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Available Balance = %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Deposit Successful!\n");
            printf("Available Balance = %.2f\n", balance);
        }
        else if (choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;

                printf("Withdrawal Successful!\n");
                printf("Available Balance = %.2f\n", balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }
    else
    {
        printf("Incorrect PIN!\n");
    }

    return 0;
}