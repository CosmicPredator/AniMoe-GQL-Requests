#include <stdio.h>
#include <string.h>

void main()
{
    FILE* fPtr, *fPtr1;
    char str[1000];

    fPtr = fopen("file.txt", "a+");
    fPtr1 = fopen("file1.txt", "w");

    while (fgets(str, 1000, fPtr) != NULL)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (i == 0)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;   
            }
        }
        fputs(str, fPtr1);
    }
}