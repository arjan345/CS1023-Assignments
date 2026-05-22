#include <stdio.h>

int main()
{
    int row_n;
    int col_n;

    
    for (row_n = 1;row_n <= 5; row_n++)
    {
        
        for (col_n = 1; col_n <= 5 - row_n;col_n++)
        {
            printf(" ");
        }

       
        for (col_n = 1; col_n <= 2 * row_n - 1; col_n++)
        {
            printf("*");
        }

        printf("\n");
    }

    
    for (row_n = 4;row_n >= 1; row_n--)
    {
       
        for (col_n = 1; col_n <= 5 - row_n;col_n++)
        {
            printf(" ");
        }

        
        for (col_n = 1;col_n <= 2 * row_n - 1; col_n++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}