#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m,n,i,j;

    printf("Enter the Dimensions of matrix : ");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of Matrix : ");
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

    printf("The Transpose Matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}