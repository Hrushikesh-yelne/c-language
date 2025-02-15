#include <stdio.h>
void main(){
    int a,b,c;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
    }