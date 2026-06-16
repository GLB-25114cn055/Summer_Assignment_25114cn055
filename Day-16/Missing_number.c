#include<stdio.h>
int main()
{
    int a[100],i,n,sum =0;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum = sum + a[i];
    }
    int actualsum;
    actualsum = n*(n+1)/2;
    printf("The missing number = %d",actualsum - sum);
    return 0;
}