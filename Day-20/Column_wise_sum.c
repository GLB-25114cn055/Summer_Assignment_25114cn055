#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n,sum;

    printf("Enter the dimension of Matrix : ");
    scanf("%d%d",&m,&n);

    printf("Enter the Matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(j=0;j<n;j++)
    {
        sum = 0;
        for(i=0;i<m;i++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of column%d = %d\n",j+1,sum);
    }
    return 0;
}    