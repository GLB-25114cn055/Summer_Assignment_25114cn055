#include<stdio.h>
int main()
{
    int a[100],n,i,s=0,avg;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        s = s + a[i];
    }

    printf("The sum of the elements in array = %d\n",s);
    avg = s / n;
    printf("The average of the elements in array = %d",avg);
    return 0;
}