#include <stdio.h>

void main()
{
    FILE *fptr1, *fptr2, *fptr3;
    char c;

    fptr1 = fopen("file.txt", "r");
    fptr2 = fopen("file1.txt", "r");
    fptr3 = fopen("file2.text", "w");

    while ((c = getc(fptr1)) != EOF)
    {
        fputc(c, fptr3);
    }

    while ((c = getc(fptr2)) != EOF)
    {
        fputc(c, fptr3);
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}