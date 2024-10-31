#include<stdio.h>
void main()
{
    float r,pi=3.14,ar,cr;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    ar=pi*r*r;
    cr=2*pi*r;
    printf("Area of circle of radius %.2f : %.2f\n",r,ar);
    printf("Circumfernce of circle of radius %.2f : %.2f",r,cr);
}