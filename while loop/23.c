//to reverse digits of no. 784 to 487
#include<stdio.h>
void main()
{
    int n,d;
    printf("enter any no");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        printf("%d",d);
        n=n/10;
    }
}