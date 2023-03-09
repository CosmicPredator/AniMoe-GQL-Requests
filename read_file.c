#include <stdio.h>

void main()
{
    FILE* fptr;
    char str[50];

    fptr = fopen("file.txt", "r");

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