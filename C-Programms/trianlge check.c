#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter three sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if (  a!=0 && b!=0 && c!=0 && a+b>=c || b+c>=a || c+a>=b )
    {
        if (a==b==c)
        {
            printf("Triangle of sides %d , %d and %d is Equilateral triangle.",a,b,c);
        }
        else if (a==b || b==c || c==a)
        {
            printf("Triangle of sides %d , %d and %d is Isoceles triangle.",a,b,c);
        }
        else 
        {
            printf("Triangle of sides %d , %d and %d is Scalene triangle.",a,b,c);
        }
    }
    else {
        printf("Invalid sides input!!");
    }
}