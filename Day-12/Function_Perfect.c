#include<stdio.h>
int perfect(int);
int main()
{
    int n,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    sum=perfect(n);
    if(sum == n)
    {
        printf("The number %d is a perfect number",n);
    }
    else
    {
       printf("The number %d is not a perfect number ",n);
    }
    return 0;
}
int perfect(int n)
{
    int i,s = 0;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
           s=s+i; 
        }
    }
    return(s);
}