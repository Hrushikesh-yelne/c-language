//print sum of first ten natural nos.

#include<stdio.h>
int main()
{
int i=1,sum=0;
while(i<=10)
{
    printf("\n%d",i);
    sum=sum+i;
    i++;
}
printf("\nsum is %d", sum);
}