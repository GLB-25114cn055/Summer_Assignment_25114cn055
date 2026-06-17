#include<stdio.h>
int main()
{
    int a[100],b[100],n1,n2,i,j;

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
    
    printf("The intersection of two Arrays : ");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i] == b[j])
            {
                printf("%d  ",a[i]);
                break;
            }
        }
    }
    return 0;
}