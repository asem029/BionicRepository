#include <stdio.h>



int main()
{
    //getting length
    int arr_length;
    printf("enter the length of the array\n");
    scanf("%d",&arr_length);

    //entering elemnts
    int all_array[arr_length];
    printf("enter the elements of the array\n");
    for (register int i=0;i<arr_length;i++)
    {
        printf("array[%i]= ",i+1);
        scanf("%d",&all_array[i]);
    }

    //finding max
    int max1=all_array[0],max2=all_array[0];
    for (register int i=1;i<arr_length;i++)
    {
        if (max1<all_array[i])
        {
            max2=max1;
            max1=all_array[i];
        }
        else if (max2<all_array[i])
        {
            max2=all_array[i];
        }
    }
    printf("largest number = %i \n",max1);
    printf("second largest number =%i ",max2);
    
}