#include <stdio.h>
#include <stdlib.h>

int *num1=NULL;
int *num2=NULL;

void reference_swap(int *num1,int *num2);

int main()
{
    num1=malloc(sizeof(int));
    num2=malloc(sizeof(int));
    printf("enter two numbers\n");
    scanf("%i%i",num1,num2);

    printf("before swap: number1=%i number2=%i\n",*num1,*num2);
    reference_swap(num1,num2);
    printf("after swap:  number1=%i number2=%i\n",*num1,*num2);
}
void reference_swap(int *num1,int *num2)
{
    int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}