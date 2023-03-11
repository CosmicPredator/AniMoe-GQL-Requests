#include <stdio.h>

void towerOfHanoi(int n, char x, char y, char z)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, x, z, y);
        printf("%c to %c\n", x, y);
        towerOfHanoi(n - 1, z, y, x);
    }
}

void main()
{
    int n = 3;
    char a = 'A', b = 'B', c = 'C';
    towerOfHanoi(3, a, b, c);
}