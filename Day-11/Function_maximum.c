#include<stdio.h>
int max(int,int);
int main()
{
    int a,b,maximum;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    maximum = max(a,b);

    printf("The maximum of two numbers = %d",maximum);
    return 0;
}
int max(int x,int y)
{
    if(x>y)
         return(x);
    else
        return(y);     
}