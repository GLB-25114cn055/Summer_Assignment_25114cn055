#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[100][100],i,j,k,r1,c1,r2,c2;
    
    printf("Enter the dimensions of 1st matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the dimension of 2nd Matrix: ");
    scanf("%d%d",&r2,&c2);

    printf("Enter the 1st Matrix: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the Second Matrix: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j] = 0;
            for(k=0;k<c1;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("The Resultant multiplied Matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}