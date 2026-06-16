#include<stdio.h>
int main()
{
    int a[100],n,i,j,freq = 0,element;
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int count =1;
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count > freq)
        {
            freq = count;
            element = a[i];
        }
    }
    printf("The maximum frequency elements = %d\n",element);
    printf("The frequency of element = %d",freq);
    return 0;
}