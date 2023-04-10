#include<stdio.h>
#include<string.h>
void main()
{
    char name[100] = "malayalam";
    int i = 0, j = strlen(name) - 1;
    while (j > i)
    {
        if (name[i++] != name[j--])
        {
            printf("Not a palindrome");
            return;
        }
    }
    printf("Palindrome");
}