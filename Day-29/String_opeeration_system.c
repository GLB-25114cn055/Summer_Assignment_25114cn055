#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp[100];
    int choice, i;

    while (1)
    {
        printf("\n # Menu Driven String Operation System # \n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str);
            break;

        case 2:
            printf("String = %s\n", str);
            break;

        case 3:
            printf("Length = %d\n", strlen(str));
            break;

        case 4:
            strcpy(temp, str);
            strrev(temp);
            printf("Reverse String = %s\n", temp);
            break;

        case 5:
            strcpy(temp, str);
            for (i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                {
                    temp[i] = temp[i] - 32;
                }
            }
            printf("Uppercase = %s\n", temp);
            break;

        case 6:
            strcpy(temp, str);
            for (i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'A' && temp[i] <= 'Z')
                {
                    temp[i] = temp[i] + 32;
                }
            }
            printf("Lowercase = %s\n", temp);
            break;

        case 7:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}