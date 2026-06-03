#include<stdio.h>
int main()
{
    int n,i,prime = 1;
    printf("Enter a number greater than 1: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
        printf("The number %d is a prime number ",n);
    else
        printf("The number %d is not a prime number",n);
    return 0;        
}