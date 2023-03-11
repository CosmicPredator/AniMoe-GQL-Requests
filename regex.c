#include <regex.h>
#include <stdio.h>

void printResult(int value)
{
    if (value == 0)
    {
        printf("pattern found\n");
    } else if (value == REG_NOMATCH)
    {
        printf("pattern not found\n");
    } else 
    {
        printf("Error\n");
    }
}

void main()
{
    regex_t reg;

    int value1;
    int value2;

    value1 = regcomp(&reg, "barani", 0);
    value1 = regexec(&reg, "barani", 0, NULL, 0);

    value2 = regcomp(&reg, "appa", 0);
    value2 = regexec(&reg, "amma", 0, NULL, 0);
    printResult(value1);
    printResult(value2);
}