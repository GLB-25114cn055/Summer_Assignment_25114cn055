#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter no of elements in an array :");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("The reversed Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}