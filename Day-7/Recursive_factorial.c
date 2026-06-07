#include<stdio.h>
int factorial (int);
int main()
{
    int n,result;
    printf("Enter the Number : ");
    scanf("%d",&n);
    result = factorial(n);
    printf("The Factorial is = %d ",result);
    return 0;
}
int factorial (int n)
{
    if(n == 0)
    return (1);
    else
    return(n * factorial(n-1));
}
