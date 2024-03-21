#include <stdio.h>



int main()
{
    //getting length
    int mat_row;
    int mat_columns;
    printf("enter number of rows and columns in order\n");
    scanf("%d%d",&mat_row,&mat_columns);

    //entering elemnts
    short mat1[mat_row][mat_columns];
    short mat2[mat_row][mat_columns];
    printf("enter the elements of the first matrix\n");
    for (register int i=0;i<mat_row;i++)
    {
        for (register int j = 0; j < mat_columns; j++)
        {
        printf("matrix1[%i][%i]= ",i+1,j+1);
        scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the elements of the second matrix\n");
    for (register int i=0;i<mat_row;i++)
    {
        for (register int j = 0; j < mat_columns; j++)
        {
        printf("matrix2[%i][%i]= ",i+1,j+1);
        scanf("%d",&mat2[i][j]);
        }
    }
    //adding
    int add_mat[mat_row][mat_columns];
    for (register int i=0;i<mat_row;i++)
    {
        for (register int j = 0; j < mat_columns; j++)
        {
            add_mat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    //viewing
    printf("result matrix\n");
    for (register int i=0;i<mat_row;i++)
    {
        for (register int j = 0; j < mat_columns; j++)
        {
            printf("%i ",add_mat[i][j]);
        }
        printf("\n");
    }
}