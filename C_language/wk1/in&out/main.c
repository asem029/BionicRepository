#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charVal= 'a';
    unsigned char uCharVal='b';
    short shortVal=-15;
    unsigned short uShortVal=30;
    int intVal=100;
    unsigned int uIntVal=1200;
    long longVal=-11254;
    unsigned long uLongVal=642422;
    long long longLongVal=-458;
    unsigned long long uLongLongVal=2545;
    float floatVal=5524.2545;
    double doubleVal=455.894555555444;
    printf("\nYou entered character: '%c'\n", charVal);
    printf("You entered unsigned character: '%c'\n\n", uCharVal);
    printf("You entered signed short: %hi\n", shortVal);
    printf("You entered unsigned short: %hu\n\n", uShortVal);
    printf("You entered signed int: %d\n", intVal);
    printf("You entered unsigned int: %lu\n\n", uIntVal);
    printf("You entered signed long: %ld\n", longVal);
    printf("You entered unsigned long: %lu\n\n", uLongVal);
    printf("You entered signed long long: %lld\n", longLongVal);
    printf("You entered unsigned long long: %llu\n\n", uLongLongVal);
    printf("You entered float: %f\n", floatVal);
    printf("You entered double: %lf\n", doubleVal);
    return 0;
}
