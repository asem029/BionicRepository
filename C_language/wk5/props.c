#include <stdio.h>


int main()
{
    //register char i=0;
    unsigned short proplems =0;
    unsigned short solved_proplems =0;
    int petya =0,vasya=0,tonya=0;
    char sure_3,sure_2;

    printf("number of proplems\n");
    scanf("%i",&proplems);

    printf("enter solutions for proplems\n");
    printf("   petya  vasya  tonya \n");
    for (char i = 1; i <= proplems; i++)
    {
        printf("%i:",i);

        scanf("%i %i %i",&petya,&vasya,&tonya);

        sure_3 = (petya &&vasya &&tonya);
        sure_2 = !(petya^vasya^tonya);
        if (sure_2|sure_3)
        {
            solved_proplems++;
        }
        
    }

    printf("solved proplems = %i",solved_proplems);
    
    return 0;
}