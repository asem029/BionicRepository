#include <stdio.h>

void main()
{
    unsigned char term;
    printf("enter number of terms");
    scanf("%i",&term);
    int t1=0,t2=1;
    int next_term=0;
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 2; i < term; i++) {
        next_term = t1 + t2;
        printf("%d, ", next_term);
        t1 = t2;
        t2 = next_term;
    }
    
}