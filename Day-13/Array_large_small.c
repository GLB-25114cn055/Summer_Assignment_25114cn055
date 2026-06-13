#include<stdio.h>
int main()
{
    int a[100],i,n,max,min;
    printf("Enter no of elements in an array ");
    scanf("%d",&n);
    printf("Enter array element : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("The largest element is = %d\n",max);
    printf("The smallest element is = %d",min);
    return 0;
}