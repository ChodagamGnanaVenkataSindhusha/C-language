#include<stdio.h>
# include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf(" enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=( b*b)-(4*a*c);
    if(d>0)
    {
        printf("Roots are real and distinct\n");
        r1= -b+sqrt(d)/(2*a);
        r2= -b-sqrt(d)/(2*a);
        printf("the roots are %f,%f", r1,r2);
    }
    else if(d<0)
    {
        printf("Roots are real and imaginary");
    }
    else
    {
        printf("Roots are real and equal\n");
         r1=r2=-b/(2*a);
         printf("the roots are %f,%f", r1,r2);
    }
    }
   
    
