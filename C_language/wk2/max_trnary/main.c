#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("enter 3 numbers\n");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    int max = num1>=num2?(num1>=num3?num1:num3):(num2>=num3?num2:num3);
    printf("max is %i",max);
    return 0;
}
