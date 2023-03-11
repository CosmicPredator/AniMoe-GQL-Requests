#include <stdio.h>

void main()
{
    int i, j, rows = 5, k = 0;

    for (i = 1; i <= rows; i++, k = 0)
    {
        for(j = 1; j < rows - i; j++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}