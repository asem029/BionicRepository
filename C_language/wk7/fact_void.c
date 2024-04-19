#include <stdio.h>

void fact(int num,int *fact_num);

int main()
{
    int num=0;
    printf("enter one number\n");
    scanf("%i",&num);
    int result=0;
    fact(num,&result);
    printf("factorail =%i",result);
}
void fact(int num,int *fact_num)
{
    int res=1;
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
    *fact_num =res;
}