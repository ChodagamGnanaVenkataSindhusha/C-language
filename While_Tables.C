#include<stdio.h>
void main()
{
int i=1,n,num;
printf(" enter a number:");
scanf("%d",&num);
printf("Multiplication table of %d is\n",num);
while(i<=10)
{
    printf("%d x %d = %d\n",num,i,num*i);
    ++i;
}
}
