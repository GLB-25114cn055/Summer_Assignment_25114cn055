#include<stdio.h>
int main()
{
    int x,n;
    printf("enter the number of which you need to calculate power : ");
    scanf("%d",&x);
    printf("Enter the power which you need to calculate : ");
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p = p*x;
    }
    printf("The value of power without using pow() function is = %d",p);
    return 0;
}