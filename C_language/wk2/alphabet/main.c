#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if (isalpha(ch))
    {
        printf("character is alphabet");
    }
    else
    {
        printf("character is not alphabet");
    }
    return 0;
}
