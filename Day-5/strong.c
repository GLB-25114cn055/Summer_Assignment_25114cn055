#include<stdio.h>
int main()
{
    int i,a,n,d,fact = 1,result = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    a = n;
    while(a>0)
    {
        d = a%10;
        for(i=1;i<=d;i++)
        {
            fact = fact *i;
        }
        result = result + fact;
        fact = 1;
        a = a/10;
    }
    if(result == n)
    {
        printf("The Number is a Strong number ");
    }
    else
    {
        printf("The number is Not a strong number ");
    }
    return 0;
}