#include <stdio.h>

void main()
{
    int num=0;
    printf("enter number\n");
    scanf("%i",&num);

    

    for ( int i=2; i <= num; i++)
    {
        int flag=0;
        for( int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%i ",i);
        }
        
    }
    
}