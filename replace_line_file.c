#include <stdio.h>

void main()
{
    FILE *fPtr1, *fPtr2;
    int line = 2;
    int count = 0;
    char str[1000];
    char replaceLine[] = "This is Shit...!";

    fPtr1 = fopen("file.txt", "r");
    fPtr2 = fopen("file1.txt", "w");

    while (fgets(str, 1000, fPtr1) != NULL)
    {
        if (count == line)
        {
            fputs(replaceLine, fPtr2);
            fputs("\n", fPtr2);
        } else 
        {
            fputs(str, fPtr2);
        }
        count++;
    }
    
    fclose(fPtr1);
    fclose(fPtr2);
}