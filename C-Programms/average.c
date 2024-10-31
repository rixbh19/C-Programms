#include<stdio.h>
void main()
{
    float a,b,aver,sum;
    printf("Enter two Number : ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    aver=sum/2;
    printf("Average of %.2f and %.2f : %.2f",a,b,aver);
}