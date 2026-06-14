#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("Enter no of elements in an array : ");
    scanf("%d",&n);
    printf("Eneter the elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The duplicates elements are : ");
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i] == a[j])
            {
                printf("%d\n",a[i]);
            }
        }
    }
    return 0;
}