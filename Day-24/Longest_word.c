#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, maxLen = 0,start = 0,maxstart = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    for(i = 0; ; i++) 
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen) 
            {
                maxLen = len;
                maxstart = start;
            }

            len = 0;
            start = i + 1;

            if(str[i] == '\0')
            {
                break;
            }    
        }
    }

    printf("Longest word: ");
    for(i = maxstart; i < maxstart + maxLen; i++) 
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d", maxLen);

    return 0;
}