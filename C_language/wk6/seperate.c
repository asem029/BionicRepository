#include <stdio.h>



int main()
{
    //getting length
    int arr_length;
    printf("enter the length of the array\n");
    scanf("%d",&arr_length);
    int odd_length;
    int even_length;

    //entering elemnts
    int all_array[arr_length];
    printf("enter the elements of the array\n");
    for (int i=0;i<arr_length;i++)
    {
        printf("array[%i]= ",i+1);
        scanf("%d",&all_array[i]);
        all_array[i]%2==0?even_length++:odd_length++;
    }
    
    //seperating elements
    int odd_array[odd_length];
    int even_array[even_length];
    int odd_index=0,even_index=0;
    for (register int i=0;i<arr_length;i++)
    {
        if (all_array[i]%2==0)
        {
            even_array[even_index]=all_array[i];
            even_index++;
        }
        else
        {
            odd_array[odd_index]=all_array[i];
            odd_index++;
        }
    }
    //viewing data
    printf("----------\n");
    printf("even array:");
    for(register int i=0;i<even_index;i++)
    {
        printf("%i ,",even_array[i]);
    }
    printf("\n");
    printf("odd array:");
    for(register int i=0;i<odd_index;i++)
    {
        printf("%i ,",odd_array[i]);
    }
    


}

