#include <stdio.h>

#include <stdlib.h>

void main ()
{
    int num1=0,num2=0;
    char op=0;
    printf("enter two numbers then operation\n");
    scanf("%i%i %c",&num1,&num2,&op);
    /*printf("enter the operation\n");
    scanf("%c",&op);*/
    switch (op)
    {
        case '-':
            printf("substraction = %i",num1-num2);
            break;
        case '+':
            printf("summation = %i",num1+num2);
            break;
        case '/':
            printf("division = %.2f",num1/num2);
            break;
        case '*':
            printf("multiplication = %i",num1*num2);
            break;
        default:
            printf("invalid");
            break;
    }

}