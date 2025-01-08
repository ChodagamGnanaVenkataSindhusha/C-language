#include<stdio.h>
void main()
{
    int a[10],n,i,max;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element is %d", max);
}
