//to find armstrong numbers between the range 100 to 999
#include<stdio.h>
int main()
{
    int i,n,d,sum;
    printf("The armstrong number in the range 100 to 999 are : ");
    for(i=100;i<=999;i++)
    {
        n = i;
        sum = 0;
        while(n>0)
        {
            d = n%10;
            sum = sum + d*d*d;
            n=n/10;
        }
        if(sum == i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}