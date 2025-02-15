#include <stdio.h>
void main()
{
    int a=10, b=20,c;
    printf("before swapping a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping: a=%d b=%d",a,b);
}