#include <stdio.h>
void main()
{
    int a,b;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d b=%d",a,b);
}