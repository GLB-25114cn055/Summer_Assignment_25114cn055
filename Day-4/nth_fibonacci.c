#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    printf("Enter the term of which you have to find : ");
    scanf("%d",&n);
    
    printf("The %d term of the fibonacci series is : ",n);
    a=0;
    b=1;
    c=0;
    for(i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
    printf("%d",b);
    return 0;
}