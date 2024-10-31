#include<stdio.h>
#include<math.h>
void main ()
{
    float a,b,c,s,ar;
    printf("Enter Three side of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/3;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle by heronie Formula : %.2f",ar);
}