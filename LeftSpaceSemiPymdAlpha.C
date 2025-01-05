#include<stdio.h>
void main()
{
    int i,j,k;
    char n = 'A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
}
