#include<stdio.h>
int reverse(int);
int main()
{
    int n,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    
    temp = reverse(n);
    if(n == temp)
    {
        printf("the number is a palindrome number");
    }
    else
    {
        printf("the number is not a palindrome number ");
    }
    return 0;
}
int reverse(int n)
{
    int d,rev = 0;
    while(n>0)
    {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
    }
    return(rev); 
}