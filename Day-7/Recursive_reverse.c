#include<stdio.h>
int rev = 0;
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The reverse of the number is = %d",reverse(n));
    return 0;
}
int reverse(int n)
{
    if(n == 0)
       return rev;

       rev = rev*10+n%10;
       return reverse(n/10);
}