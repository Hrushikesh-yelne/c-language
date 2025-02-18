//to calculate sum of all digits of given number
#include <stdio.h>
void main()
{
    int n,d,sum=0;
    printf("enter any no");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("Sum of digits is %d",sum);
}