#include<stdio.h>
void main()
{
    float BS,DA,HRA,PF,GS,NS;
    printf("Enter basic salary of employee : ");
    scanf("%f",&BS);
    DA=25*BS/100;
    HRA=15*BS/100;
    GS=BS+DA+HRA;
    PF=10*GS/100;
    NS=GS-PF;
    printf("Net Salary of employee : %.2f",NS);
}