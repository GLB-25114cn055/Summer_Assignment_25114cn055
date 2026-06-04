#include<stdio.h>
int main()
{
    int a,d,n,temp,count = 0;
    int s = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    a = n;
    while(a>0)
    {
        a = a/10;
        count ++;
    }
    a = n;
    while(a>0)
    {
        d = a%10;
        int p =1;
        for(int i=1;i<=count;i++)
        {
            p = p *d;
        }
        s = s + p;
        a = a/10;
    }
    if(s == temp)
    {
        printf("the no is an armstrong number ");
    }
    else
    {
        printf("the no is not an armstrong number ");
    }
    return 0;
}