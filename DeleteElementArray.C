#include <stdio.h>
void main()
{
int n,i,p,a[10];
printf ("enter size:");
scanf("%d", &n);
printf("enter element:\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position to delete:");
scanf("%d",&p);
if(p<n)
{
for (i=(p+1); p<n;i++)
{
a[i-1]=a[i];
n--;
printf("After deletion:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
}
else
{
printf("Array index out of bounds");
for(i=0; i<n; i++)
{
printf ("%d ", a[i]);
}
}
}
