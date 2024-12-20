#include<stdio.h>
void main()
{
int i,n,count=0;
printf(" enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("The given number is prime");
}
else
{
printf("The given number is not a prime");
}
}
