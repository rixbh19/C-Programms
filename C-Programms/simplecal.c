#include<stdio.h>
void main()
{
    char op;
    int a,b;
    printf("Choose which operator you want use: \n 1.Addition : + \n 2.Subtraction : - \n 3.Multiplication : * \n 4.Divison : / \nEnter  operator : ");
    scanf("%c",&op);
    switch(op)
    {
        case '+' : printf("Enter values of operand a and b : ");
                   scanf("%d%d",&a,&b);
                   printf("Addition result of %d and %d : %d",a,b,a+b);
                   break;
        case '-' : printf("Enter values of operand a and b : ");
                   scanf("%d%d",&a,&b);
                   printf("Subtraction result of %d and %d : %d",a,b,a-b);
                   break;
        case '*' : printf("Enter values of operand a and b : ");
                   scanf("%d%d",&a,&b);
                   printf("Multiplication result of %d and %d : %d",a,b,a*b);
                   break;
        case '/' : printf("Enter values of operand a and b : ");
                   scanf("%d%d",&a,&b);
                   printf("Divison result of %d and %d : %.2f",a,b,(float)a/b);
                   break;
        default : printf("Invalid input!!");
                  break;
    }
}