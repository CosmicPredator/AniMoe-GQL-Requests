#include <stdio.h>

void main()
{
    FILE* fPtr = fopen("file.txt", "r");
    int ft, i = 0;

    fseek(fPtr, 0, SEEK_END);
    ft = ftell(fPtr);

    while (i < ft)
    {
        i++;
        fseek(fPtr, -i, SEEK_END);
        printf("%c", fgetc(fPtr));
    }
    fclose(fPtr);
}