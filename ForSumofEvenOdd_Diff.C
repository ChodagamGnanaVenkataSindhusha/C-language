#include<stdio.h>
void main()
{
    int i,n,sumeven=0,sumodd=0,diff;
    printf ("enter the number:");
    scanf("%d",&n);
    for( i=1;i<=n;++i)
    {
    if(i%2==0)
    {
        sumeven=sumeven+i;
    }
    else
    {
        sumodd=sumodd+i;
    }
    }
    diff= sumeven - sumodd;
    printf("the sum of even numbers is %d\n",sumeven);
    printf("the sum of odd numbers is %d\n",sumodd);
    printf("the difference between the sums is %d",diff);
    
}
