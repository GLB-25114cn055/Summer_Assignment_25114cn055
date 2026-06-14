#include<stdio.h>
int main()
{
    int a[100],n,i,x,flag=0;
    printf("Enter the no of elements in an array : ");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&x);

    for(i=0;i<=n-1;i++)
    {
        if(a[i]==x)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("element found at %dth position",i+1);
    }
    else
    {
        printf("Unable to search: ");
    }
    return 0;
}