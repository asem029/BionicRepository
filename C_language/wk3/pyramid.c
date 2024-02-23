#include <stdio.h>

void main()
{
    for (char i = 0; i < 6; i++)
    {
        for (char j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (char k = 0; k < 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}