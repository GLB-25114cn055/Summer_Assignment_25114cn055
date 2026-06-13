#include<stdio.h>
int main()
{
    int a[100],n,i,even=0,odd=0;
    printf("Enter number of elements in an array ");
    scanf("%d",&n);

    printf("enter array elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2 == 0)
        {
            even ++;
        }
        else
        {
            odd ++;
        }
    }
    printf("The no of Even elements in an array = %d\n",even);
    printf("The no of Odd elements in an array = %d",odd);
    return 0;
}