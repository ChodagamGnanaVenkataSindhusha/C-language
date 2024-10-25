# include<stdio.h>
void main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("the given is number is positive");
    }
    else if(n==0)
    {
        printf(" the given number is zero");
    }
    else
    {
        printf("the given number is negative");
    }
}
