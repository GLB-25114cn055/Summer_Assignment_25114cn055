#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter the number of terms to generate the series ");
    scanf("%d",&n);
    fibonacci(n);
     
    return 0;
}
int fibonacci(int n)
{
    int i,f1,f2,f3;
    f1 = 0;
    f2 = 1;
    printf("The fibonacci series: ");
    printf("%d\t%d",f1,f2);
    for(i=1;i<=n-2;i++)
    {
        f3 = f1 + f2;
        printf("\t%d",f3);
        f1=f2;
        f2=f3;
    }
}