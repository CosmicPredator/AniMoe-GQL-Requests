#include <stdio.h>

int add(int n)
{
    if (n != 0)
    {
        return n + add(n - 1);
    } else{
        return n;
    }
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    } else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}