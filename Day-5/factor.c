#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The factor of the number %d are : ");
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}