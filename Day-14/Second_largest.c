#include<stdio.h>
int main()
{
    int a[100],n,i,largest1,largest2;
    printf("Enter no of elements in an array : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    largest1=largest2=0;

    for(i=0;i<=n-1;i++)
    {
        if(a[i]>largest1)
        {
            largest2=largest1;
            largest1=a[i];
        }
        else if(a[i]>largest2 && a[i]<largest1)
        {
            largest2=a[i];
        }
    }
    printf("The second Largest element of the array = %d",largest2);
    return 0;
}