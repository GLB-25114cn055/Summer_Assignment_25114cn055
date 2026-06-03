#include<stdio.h>
int main()
{
    int m,n,i,gcd;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m && i<=n;i++)
    {
        if(m%i==0 && n%i==0)
        {
          gcd = i;
        }
    }
    printf("The gcd of two numbers %d and %d = %d",m,n,gcd);
    return 0;
}