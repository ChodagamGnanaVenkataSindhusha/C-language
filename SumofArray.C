#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
        printf("The sum of elements is %d",sum);
}
