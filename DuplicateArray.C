#include<stdio.h>
void main()
{
    int a[20],n,i,j,count=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are:\n");
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
        if(a[i]==a[j])
        {
            printf("%d\n",a[i]);
            count++;
            break;
        }
        }
    }
    printf("The number of duplicate element is %d", count);
}
