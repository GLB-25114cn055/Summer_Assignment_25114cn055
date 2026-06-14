#include<stdio.h>
int main()
{
    int a[100],n,x,i,freq = 0;
    printf("Enter no of elements in an array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("emter the elements to found frequency : ");
    scanf("%d",&x);
    for(i=0;i<=n-1;i++)
    {
        if(a[i] == x)
        {
            freq ++;
        }
    }
    printf("The frequency of %d element in the array = %d",x,freq);
    return 0;
}