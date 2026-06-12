#include<stdio.h>
int armstrong(int);
int main()
{
    int n,temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=armstrong(n);
    if(temp == n)
    {
        printf("The number is an armstrong number ");
    }
    else
    {
        printf("The number is not an armstrong number ");
    }
    return 0;
}
int armstrong(int n)
{
    int d,count=0,a,s = 0;
    a = n;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    a = n;
    while(a>0)
    {   int p = 1;
         d=a%10;
        for(int i=1;i<=count;i++)
        {
            p=p*d;
        }
        s = s + p;
        a = a / 10;
    }
    return(s);
}