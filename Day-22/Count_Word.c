#include<stdio.h>
int main()
{
    char str[100];
    int i,word = 1;
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    printf("The no of Words in the Sentence is = %d",word);
    return 0;
}