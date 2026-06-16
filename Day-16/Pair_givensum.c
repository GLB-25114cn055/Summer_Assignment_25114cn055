#include<stdio.h>
int main()
{
    int a[100],n,i,j,sum;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Required sum: ");
    scanf("%d",&sum);
    printf("Pairs are : \n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("%d + %d = %d\n",a[i],a[j],sum);
            }
        }
    }
    return 0;
}