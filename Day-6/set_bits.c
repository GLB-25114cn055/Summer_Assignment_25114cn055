#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n>0)
    {
       if(n%2 == 1)
       {
        count ++;
       }
       n = n/2; 
    }
    printf(" The number of set bits of a number is = %d",count);
    return 0;
}