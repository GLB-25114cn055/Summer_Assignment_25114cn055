#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,m,n;

    printf("Enter the dimension of matrix : ");
    scanf("%d%d",&m,&n);
    
    printf("Enter the Matrix : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    } 
    int flag = 1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("The Matrix is a Symmetric Matrix ");
    }
    else
    {
        printf("The Matrix is not a symmetric Matrix ");
    }
    return 0;
    
}