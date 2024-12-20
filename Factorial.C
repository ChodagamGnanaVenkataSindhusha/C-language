#include<stdio.h>
void main()
{
    int i,n;
    long int fact=1;
    printf(" enter a number:");
    scanf("%d",&n);
    for( i=1;i<=n;++i)
    {
        fact= fact*i;
    }
    printf("The factorial of a given number is %ld",fact);
}

