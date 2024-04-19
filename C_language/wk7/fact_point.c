#include <stdio.h>
#include <stdlib.h>
int *fact(int num);
int res;
int main()
{
    int num=0;
    printf("enter one number\n");
    scanf("%i",&num);
    int *result=fact(num);
    printf("factorail =%i",*result);
}
int *fact(int num)
{
    res=1;
    if (num<0)
    {
        res= 0;
    }
    else if(num==0)
    {
        res= 1;
    }
    else
    {
        for (int i = 1; i <= num; i++) 
        {
            res *= i;
        }
    }
    return &res;
}