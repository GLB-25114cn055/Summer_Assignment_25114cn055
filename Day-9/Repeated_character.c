#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enternumber of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
       for(j=1;j<=i;j++)
       {
        printf("%c",(i+64));
       }
       printf("\n");
    }
    return 0;
}    