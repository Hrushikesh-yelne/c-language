//to find greatest of three nos (logical operators)
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if (b>a && b>c)
    {
        printf("b is greater");
    }
    else if (c>a && c>b)
    {
        printf("c is greater");
    }
    else
    {
        printf("these are same values");
    }
}