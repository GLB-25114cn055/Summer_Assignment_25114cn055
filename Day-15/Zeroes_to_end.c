#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(k=0;k<n-1;k++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i] == 0)
            {
                for(j=i;j<n-1;j++)
                {
                    a[j]=a[j+1];
                }
                a[j]=0;
            }
        }
    }
    printf("The array after moving o's to the end : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}