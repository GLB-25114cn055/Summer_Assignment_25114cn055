#include <stdio.h>
int main()
{
    int a[100], n = 0, i, choice;
    int max, min, sum, key, found;

    while (1)
    {
        printf("\n # Menu Driven Array Operation System # \n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Find Sum\n");
        printf("6. Search Element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            break;

        case 2:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                printf("Array Elements: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            max = a[0];
            for (i = 1; i < n; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }
            printf("Maximum = %d\n", max);
            break;

        case 4:
            min = a[0];
            for (i = 1; i < n; i++)
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
            printf("Minimum = %d\n", min);
            break;

        case 5:
            sum = 0;
            for (i = 0; i < n; i++)
            {
                sum += a[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 6:
            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                printf("Element not found.\n");
            }
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