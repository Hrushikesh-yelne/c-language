//to add nos using character choice such as (ch=='a')
#include<stdio.h>
void main()
{
    char ch;
    int a,b,c;
    printf ("enter your choice");
    scanf("%c",&ch);
    if (ch=='a')
    {
        printf("enter value of a & b");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Addition is %d",c);
    }
    else
    {
        printf("\nWrong choice");
    }
}