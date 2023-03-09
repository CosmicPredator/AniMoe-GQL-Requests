#include <stdio.h>
typedef char bit;

bit jk(bit J, bit K, bit Q)
{

    return J & ~(Q) | Q & ~(K);
}

int main()
{
    int i, j, k, a, res = 0;
    int x, y, z;
    char b;
    printf("1.Truth Table of JK flip flop");
    printf("\n2.I/O operation\n");
    printf("Enter your choice: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("J  K  Q(t) | Q(t+1)\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                {
                    res = jk(i, j, k);
                    printf("%d  %d  %d    |", i, j, k);
                    printf("  %d\n", res);
                }
            }
        }
        break;

    case 2:
        printf("Enter the value of J,K,Q(t):");
        scanf("%d%d%d", &x, &y, &z);

        res = jk(x, y, z);
        printf("Q(t+1)= %d\n\n", res);

        break;

    default:
        printf("invalid input");
    }
    printf("do you want to continue(Y/N):");
    scanf(" %c", &b);
    if (b == 'Y' || b == 'y')
    {
        main();
    }
    else
    {
        return 0;
    }
}