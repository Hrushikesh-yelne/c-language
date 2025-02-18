//to find sum of series x^1 + x^2 + x^3 + x^4
#include<stdio.h>
void main()
{
    int i=1,x,sum=0;
    printf("enter value of x");
    scanf("%d",&x);
    while(i<=4)
    {
        sum=sum+pow(x,i);
        i++;
    }
    printf("\nsum is %d",sum);
}