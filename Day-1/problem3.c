#include<stdio.h>
int main()
{
    int n,i;
    int fact = 1;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else{
        for(i=1;i<=n;i++){
            fact = fact * i;
        }
        printf("Factorial of the given number %d = %d",n,fact);
    }
    return 0;
}