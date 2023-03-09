#include <stdio.h>

void main()
{
    FILE* fptr;
    char str[50];

    fptr = fopen("file.txt", "a+");

    if (fptr == NULL)
    {
        printf("Error");
    }

    while (fgets(str, 50, fptr) != NULL)
    {
        printf("%s", str);
    }
    fclose(fptr);
}