#include<stdio.h>
int main()
{
    int a[100],n,i,temp;
    printf("Enter the no of elements in an array : ");
    scanf("%d",&n);
    printf("Enter array Elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }

    temp = a[0];
    for(i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    a[i]=temp;
    printf("The array after rotating to left : ");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}