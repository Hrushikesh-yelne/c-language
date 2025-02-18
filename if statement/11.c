//to find wheather triangle is equilateral, isosceles or scalene.
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter value of s1,s2,s3");
    scanf("%d%d%d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3 && s3==s1)
    {
        printf("Equilateral Triangle");
    }
    else if (s1==s2 || s2==s3 || s3==s1)
    {
        printf ("Isosceles Triangle");
    }
    else 
    {
        printf("Scelene Triangle");
    }
}