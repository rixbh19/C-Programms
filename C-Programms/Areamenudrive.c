#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,d;
    printf("Choose Which area you want to calculate: \n 1.Area of Square. \n 2.Area of Rectangle. \n 3.Area of Triangle. \n 4.Area of circle. \n Enter Choice : ");
    scanf("%d",&d);
    switch (d)
    {
        case 1 : printf("Enter side of Square : ");
                 scanf("%d",&a);
                 printf("Area of square whose side %d : %d",a,a*a);
                 break;
        case 2 : printf("Enter length and width of Rectangle : ");
                 scanf("%d%d",&a,&b);
                 printf("Area of rectangle whose length %d and width %d : %d",a,b,a*b);
                 break;
        case 3 : printf("Enter side of base and height of Triangle : ");
                 scanf("%d%d",&a,&b);
                 printf("Area of triangle whose base %d and height %d : %.2f",a,b,(float)0.5*a*b);
                 break;
        case 4 : printf("Enter radius of circle : ");
                 scanf("%d",&a);
                 printf("Area of circle whose radius %d : %.2f",a,(float)3.14*a*a);
                 break;
        default : printf("Invalid Input!");
                  break;
    }
}