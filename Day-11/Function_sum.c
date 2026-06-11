#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,result;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    result = sum(a,b);

    printf("The sum of two numbers = %d",result);
    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}