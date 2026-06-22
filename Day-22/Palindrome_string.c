#include<stdio.h>
int main()
{
    char str[50],temp;
    int i,j,l=0,flag=1;
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    for(i=0,j=l-1;i<j;i++,j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        printf("The string is a palindrome string ");
    }
    else
    {
        printf("The string is not a palindrome ");
    }
    return 0;
}