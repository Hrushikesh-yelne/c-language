//to find greater of two numbers using conditional operator(?:)
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter values");
    scanf("%d%d",&a,&b);
    a>b?printf("a is greater")
    :printf("%d is greater",b);
}