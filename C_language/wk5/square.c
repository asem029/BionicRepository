#include <stdio.h>

#define SQUARE(num1) (num1)*(num1)




#define PI (3.14159)

int main()
{
    int number;
    printf("enter number\n");
    scanf("%d",&number);

    int square = SQUARE(number);

    printf("square = %d",square);
    return 0;
}