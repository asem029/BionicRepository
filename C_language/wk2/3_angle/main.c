#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang1,ang2,ang3;
    printf("enter 2 angles\n");
    scanf("%i",&ang1);
    scanf("%i",&ang2);
    ang3  = 180-(ang1+ang2);
    printf("third angle is %i",ang3);
    return 0;
}
