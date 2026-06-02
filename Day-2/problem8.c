#include<stdio.h>
int main()
{
    int n,d,temp,rev = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev == temp)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is not Palindrome");
    }
    return 0;
}