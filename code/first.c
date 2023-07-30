#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c
    char "ch";
    clrscr();
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter users choice of operation:");
    scanf("%c",&c);
    printf("enter the second number");
    scanf("%f",&b);
    switch(ch)
    {
        case'+':c=a+b;
                printf("output=%f",c);
                break;
        case'-':c=a-b;
                printf("output=%f",c);
                break; 
        case'*':c=a*b;
                printf("output=%f",c);
                break;
        case'/':c=a/b;
                printf("output=%f",c);
                break;
        default:printf("invalid operation");
                break;
    }
    getch();
}                                       

