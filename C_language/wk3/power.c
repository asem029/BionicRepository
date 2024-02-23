#include <stdio.h>

int power (int expo,int pwr);

void main ()
{
    int num,pow;
    printf("number and power\n");
    scanf("%i%i",&num,&pow);
    printf("result is %i",power(num,pow));
}

int power (int expo,int pwr)
{
    int res =1;
    for (char i = 0; i < pwr; i++)
    {
        res *=expo;
    }
    return res;
}