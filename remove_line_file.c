#include <stdio.h>
#include <string.h>

void main()
{
    FILE *oldFile, *newFile;
    char str[1000];

    oldFile = fopen("file.txt", "r");
    newFile = fopen("file1.txt", "w");

    int line = 3;
    int count = 0;

    while (fgets(str, 1000, oldFile) != NULL)
    {
        if (count != line)
        {
            fputs(str, newFile);
            strcpy(str, "\0");
        }
        count++;
    }

    fclose(oldFile);
    fclose(newFile);
}