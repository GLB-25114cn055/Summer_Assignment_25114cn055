#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter no of elememts in an array : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("The array elements are : ");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}