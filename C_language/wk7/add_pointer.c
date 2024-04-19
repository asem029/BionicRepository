#include <stdio.h>
#include <stdlib.h>
int *num1=NULL;
int *num2=NULL;

int main()
{
    num1=malloc(sizeof(int));
    num2=malloc(sizeof(int));
    printf("enter two numbers\n");
    scanf("%i%i",num1,num2);
    int add = *num1 + *num2;
    printf("addition= %i",add);
    free(num1);
    free(num2);
    num1=NULL;
    num2=NULL;
}