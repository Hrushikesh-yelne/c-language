//to find greatest of three nos using nested if condition
#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("enter value of a and b and c");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b?(a>c?a:c):(b>c?b:c));
    printf("\n Biggest no is %d",big);
}