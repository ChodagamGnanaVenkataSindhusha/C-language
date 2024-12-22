include<stdio.h>
void main()
{
int i=1,sum=0;
while(i<=10)
{
    if(i%2==0)
    {
sum = sum+(i*i*i);
    }
    ++i;
}
printf(" The sum of cubes of even numbers is %d",sum);
}
