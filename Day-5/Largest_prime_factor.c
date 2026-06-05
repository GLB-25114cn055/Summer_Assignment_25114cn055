#include<stdio.h>
int main()
{
    int n,i,j,prime,largest = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            prime = 1;
            for(j=2;j<i;j++)
            {
               if(i%j == 0)
               {
                  prime = 0;
                  break;
               }
            }
            if(prime == 1)
            {
                largest = i;
            }
        }
    }
    printf("The largest prime factor is = %d",largest);
    return 0;
}