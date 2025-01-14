#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n,i,j=0,k=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("Even Numbers:\n");
        for(i=0;i<j;++i)
        {
            printf("%d ",b[i]);
        }
        printf("\nOdd Numbers:\n");
        for(i=0;i<k;i++)
        {
            printf("%d ",c[i]);
        }
}
