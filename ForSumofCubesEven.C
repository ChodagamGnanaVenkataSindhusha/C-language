#include<stdio.h>
void main()
{
int i,n,sum=0;
for(i= 1;i<=10;++i)
{
    if(i%2==0)
    {
sum = sum+(i*i*i);
    }
}
printf(" The sum of cubes of even numbers is %d",sum);
}
