#include<stdio.h>
int main()
{
    char str1[100],str2[100],temp;
    int i,j;
    printf("Enter first string :");
    scanf("%s",str1);
    printf("Enter second string : ");
    scanf("%s",str2);

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    
    for(i=0;str2[i]!='\0';i++)
    {
        for(j=i+1;str2[j]!='\0';j++)
        {
            if(str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }

    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Strings are not Anagram");
            return 0;
        }
    }
    printf("Strings are Anagram");
    return 0;
}