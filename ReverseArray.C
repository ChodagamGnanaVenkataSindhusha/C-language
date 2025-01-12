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
    printf("Reverse order of elements in the array :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
        
