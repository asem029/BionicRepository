#include <stdio.h>

#include <stdlib.h>

void main ()
{
    int wk=0;
    printf("enter number of day\n");
    scanf("%i",&wk);
    switch (wk)
    {
        case 1:
            printf("satarday\n");
            break;
        case 2:
            printf("sunday\n");
            break;
        case 3:
            printf("monday\n");
            break;
        case 4:
            printf("tuesday\n");
            break;
        case 5:
            printf("wednsday\n");
            break;
        case 6:
            printf("turasday\n");
            break;
        case 7:
            printf("friday\n");
            break;
        default:
            printf("invalid\n");
            break;
    }

}