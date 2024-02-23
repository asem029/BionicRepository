#include <stdio.h>

#include <stdlib.h>
void grade (char perc);

void main()
{
    unsigned char phy=0,bio=0,comp=0,chem=0,maths=0;
    printf("enter grades of physics, maths, biology,\
computer and chemistry in order \n");
    scanf("%i%i%i%i$i",phy,maths,bio,comp,chem);

    unsigned char perc =(phy+bio+comp+chem+maths)/5;
    grade(perc);

}



void grade (char perc)
{
    if (perc>=90)
    {
        printf("grade A\n");
    }
    else if (perc>=80)
    {
        printf("grade B\n");
    }
    else if (perc>=70)
    {
        printf("grade C\n");
    }
    else if (perc>=60)
    {
        printf("grade D\n");
    }
    else if (perc>=40)
    {
        printf("grade E\n");
    }
    else
    {
        printf("grade F\n");
    } 
}








