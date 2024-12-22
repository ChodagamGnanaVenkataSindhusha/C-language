#include<stdio.h>
void main()
{
int n,temp,rem,amg=0;
printf("enter a value:");
scanf("%d",&n);
temp = n;
while(n>0)
{
rem = n%10;
amg = amg+(rem*rem*rem);
n = n/10;
}
if(temp==amg)
{
printf(" The given number is Amgstrong number");
}
else
{
printf("Not an Amgstrong number");
}
}
