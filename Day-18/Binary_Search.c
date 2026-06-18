#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp,x,mid,low,high,flag;

    printf("Enter the size of Arrays: ");
    scanf("%d",&n);
    printf("Enter the Array elements  : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements to be searched : ");
    scanf("%d",&x);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==x)
        {
            flag=1;
            break;
        }
        else if(a[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag == 1)
    {
        printf("Element searched at %d",mid+1);
    }
    else{
        printf("Unsucessful Search");
    }
    return 0;    
}    