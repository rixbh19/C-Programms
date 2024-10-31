#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,si,ci,am;
    printf("Enter principle amount : ");
    scanf("%f",&p);
    printf("Enter rate per annum : ");
    scanf("%f",&r);
    printf("Enter time period : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    am=p*pow((1+r/100),t);
    ci=am-ci;
    printf("Simple Interest : %.2f",si);
    printf("\nCompound Interest :%.2f",ci);
}