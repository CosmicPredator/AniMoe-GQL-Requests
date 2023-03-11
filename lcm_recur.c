#include <stdio.h>

int lcm(int a, int b, int common)
{
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b, common);
}

void main()
{
    printf("%d\n", lcm(2, 5, 1));
}