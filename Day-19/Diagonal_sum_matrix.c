#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j,s1=0,s2=0;

    printf("Enter the Dimensions of matrix : ");
    scanf("%d%d",&m,&n);
    
    if(m==n)
    {
       printf("Enter the elements of  Matrix : ");
       for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
           s1 = s1 + a[i][i];
           s2 = s2 + a[i][m-1-i];
        }

        printf("The sum of the main Diagonal = %d\n",s1);
        printf("The sum of the off diagonal = %d",s2);
      
    }
    else 
    {
        printf("Can not Generate the sum of the diagonal element :");
    }
    return 0;
}