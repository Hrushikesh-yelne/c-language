//to find total marks ,percentage and assign grades
#include <stdio.h>
void main()
{
    int m1,m2,m3,t;
    float p;
    printf("enter marks");
    scanf ("%d%d%d",&m1,&m2,&m3);
    t=m1+m2+m3;
    printf("Total Marks is %d",t);
    p=t/3.0;
    printf("\n Percentage is %.2f",p);
    if (p>=90)
    {
        printf("\nA");
    }
    else if(p>80 && p<90)
    {
        printf("\nB");
    }
    else if(p>70&&p<80)
    {
        printf("\nC");
    }
    else if(p>65&&p<70)
    {
        printf("\nD");
    }
    else if(p>=35&&p<65)
    {
        printf("\npass");
    }
    else
    {
        printf("\nFail");
    }
}