#include<stdio.h>
int main()
{
    int m,n,lcm;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);
    if(m>n)
       lcm = m;
    else
       lcm = n;
    while(1)
    {
        if(lcm%m==0 && lcm%n==0)
        {
            printf("\n lcm of two numbers %d and %d is = %d",m,n,lcm);
            break;
        }
        lcm ++;
    }
    return 0;      
}