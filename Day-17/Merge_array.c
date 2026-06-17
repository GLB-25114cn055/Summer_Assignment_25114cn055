#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],n1,n2,i,k=0;

    printf("Enter size of 1st arrays : ");
    scanf("%d",&n1);
    printf("Enter the elements of 1st array : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter size of 2nd Array : ");
    scanf("%d",&n2);
    printf("Enter the elements of 2nd Array : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        c[k]=b[i];
        k++;
    }
    
    printf("The merged Arrays : ");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d  ",c[i]);
    }
    return 0;
}