#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("enter 3 numbers\n");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    if (num1>=num2)
    {
        if(num1>=num3)
        {
            printf("max is %i\n",num1);
        }
        else
        {
            printf("max is %i\n",num3);
        }
    }
    else
    {
        if (num2>=num3)
        {
            printf("max is %i\n",num2);
        }
        else
        {
            printf("max is %i\n",num3);
        }
    }
    return 0;
}
