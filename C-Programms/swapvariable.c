#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping : a=%d, b=%d ",a,b);
}