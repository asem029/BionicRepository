#include <stdio.h>


int main()
{
    //getting length
    int arr_length;
    printf("enter the length of the array\n");
    scanf("%d",&arr_length);

    //entering elemnts
    int all_array[arr_length];
    int frequency[arr_length];
    printf("enter the elements of the array\n");
    for (register int i=0;i<arr_length;i++)
    {
        printf("array[%i]= ",i+1);
        scanf("%d",&all_array[i]);
        frequency[i]=-1;
    }

    //counting
    for (register int i=0;i<arr_length;i++)
    {
        int count=1;
        for (register int  j = i+1;j<arr_length ; j++)
        {
            if (all_array[i]==all_array[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if (frequency[i]!=0)
        {
            frequency[i]=count;
        }
    }
    
    
    //viewing 
    for (register int i=0;i<arr_length;i++)
    {
        if(frequency[i]!=0)
            printf("%d frequency = %d\n",all_array[i],frequency[i]);
    }

}