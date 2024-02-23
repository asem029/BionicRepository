#include <stdio.h>

void odd_even (int num);

void main ()
{
    int num;
    printf("enter number\n");
    scanf("%i",&num);
    odd_even(num);
}

void odd_even (int num)
{
    if (num%2==0)
    {
        printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
}