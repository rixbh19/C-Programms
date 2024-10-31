#include<stdio.h>
void main()
{
    int a;
    printf("Option List\n");
    printf("1. Swap with third variable. \n");
    printf("2. Swap without third variable. \n");
    printf("Enter Choice: ");
    scanf("%d",&a);
    switch (a)
    {
        case 1 : {int c,d,temp;
                 printf("Enter two number : ");
                 scanf("%d%d",&c,&d);
                 temp=c;
                 c=d;
                 d=temp;
                 printf("After Swapping : a=%d, b=%d ",c,d);}
                 break;
        case 2 : {int e,f;
                 printf("Enter two number : ");
                 scanf("%d%d",&e,&f);
                 e=e+f;
                 f=e-f;
                 e=e-f;
                 printf("After Swapping : a=%d, b=%d ",e,f);}
                 break;
        default : printf("Invalid Input.");
    }

}