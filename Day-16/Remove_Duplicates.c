#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("Enter no of elements in an array : ");
    scanf("%d",&n);
    printf("Eneter the elements : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i] == a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates : \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}