#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n1,n2,i,j,k=0;

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

    for(i=0;i<n1;i++)
    {
        int found = 0;
        for(j=0;j<k;j++)
        {
            if(a[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            c[k]=a[i];
            k++;
        }
    }
    
    for(i=0;i<n2;i++)
    {
        int found = 0;
        for(j=0;j<k;j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            c[k]=b[i];
            k++;
        }
    }

    printf("The union of two Arrays : ");
    for(i=0;i<k;i++)
    {
        printf("%d  ",c[i]);
    }
    return 0;
}