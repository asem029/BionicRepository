#include <stdio.h>

void main()
{
    int num=0;
    int fact =1;
    printf("enter number\n");
    scanf("%i",&num);
    for (char i=1 ;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("factorail is %i\n",fact);
}