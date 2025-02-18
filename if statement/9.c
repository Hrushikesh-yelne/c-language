//to find greater of two numbers (if and nested if)
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a & b");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is greater");

    }
    else if(b>a)
    {
        printf("these are same values");
    }
}