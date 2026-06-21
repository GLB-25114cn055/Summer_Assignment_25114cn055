#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter the string : ");
    scanf("%s",str);
    i = 0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("The length of the string without strlen() is = %d",i);
    return 0;
}