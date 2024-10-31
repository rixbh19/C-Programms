#include<stdio.h>
void main()
{
    char ch;
    printf("Enter character to check vowel or not : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' :printf("%c is vowel.",ch);
            break;
        case 'A' :printf("%c is vowel.",ch);
            break;
        case 'e' :printf("%c is vowel.",ch);
            break;
        case 'E' :printf("%c is vowel.",ch);
            break;
        case 'u' :printf("%c is vowel.",ch);
            break;
        case 'U' :printf("%c is vowel.",ch);
            break;
        case 'i' :printf("%c is vowel.",ch);
            break;
        case 'I' :printf("%c is vowel.",ch);
            break;
        case 'o' :printf("%c is vowel.",ch);
            break;
        case 'O' :printf("%c is vowel.",ch);
            break;
        default : printf("%c is consonant.",ch);
                  break;
    }
}