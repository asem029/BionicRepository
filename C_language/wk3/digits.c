#include <stdio.h>

void main()
{
    int num=0,digit=0;
    printf("enter number\n");
    scanf("%i",&num);
    while(num!=0)
    {
        num=num/10;
        digit++;
    }
    printf("digits=%i",digit);
    
}
