#include<stdio.h>
void main()
{ 
    int a,b;
    char op;
    printf("enter the values of a,b and op:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+': printf(" Addition of a and b is %d",a+b);
        break;
        case '-': printf(" Subtraction of a and b is %d",a-b);
        break;
        case '*': printf(" Multiplication of a and b is %d",a*b);
        break;
        case '/': printf(" Division of a and b is %d",a/b);
        break;
        case '%': printf(" Remainder of a and b is %d",a%b);
        break;
        default:printf(" %c is invalid Operator ");
        break;
    }
}
