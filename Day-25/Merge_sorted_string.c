#include<stdio.h>
int main()
{
    char str1[100],str2[100],temp,str3[200];
    int i,j,k;

    printf("Enter 1st string : ");
    scanf("%s",str1);
    printf("Enter 2nd string : ");
    scanf("%s",str2);

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[i]>str2[j])
            {
                temp = str1[i];
                str1[i] = str2[j];
                str1[j] = temp;
            }
        }
    }

    for(i=0;str2[i]!='\0';i++)
    {
        for(j=i+1;str2[j]!='\0';j++)
        {
            if(str2[i]>str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    i=0;j=0;k=0;
    
    while(str1[i] != '\0' && str2[j] != '\0')
    {
        if(str1[i]<str2[j])
        {
            str3[k++] = str1[i++];
        }
        else
        {
            str3[k++] = str2[j++];
        }
    }

    while(str1[i]!='\0')
    {
        str3[k++] = str1[i++];
    }
    while(str2[j] != '\0')
    {
        str3[k++] = str2[j++];
    }
    str3[k] = '\0';

    printf("merged string = %s",str3);
    return 0;
}