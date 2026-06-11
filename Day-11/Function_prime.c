#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(prime(n))
    {
        printf("The number is a prime number ");
    }
    else
    {
        printf("The number is not a prime number ");
    }
    return 0;
}
int prime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}