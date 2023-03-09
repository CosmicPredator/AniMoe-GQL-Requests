#include <stdio.h>

void main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 3;
    int col = 3;

    int evenRow = 0;
    int oddRow = 1;

    while (evenRow < row)
    {
        for(int i = 0; i < col; i++)
        {
            printf("%d ", matrix[evenRow][i]);
        }
        evenRow = evenRow + 2;
        if(oddRow < row)
        {
            for(int i = col - 1; i >= 0; i--)
            {
                printf("%d ", matrix[oddRow][i]);
            }
        }
        oddRow = oddRow + 2;
    }
    printf("\n");
}