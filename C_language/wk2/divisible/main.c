#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter number\n");
    scanf("%i",&num);
    num%55?printf("number is not divisible by  5 and 11"):printf("number is divisible by  5 and 11");


    return 0;
}
