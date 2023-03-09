#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int length;
    struct Node* nextNode;
}*head;

// void AllOne(char arr[], int n)
// {
//     head = (struct Node*)malloc(
//         sizeof(struct Node)
//     );
//     for(int i = 0; i < n; i++)
//     {
//         struct Node* newNode = (struct Node*)malloc(
//             sizeof(struct Node)
//         );
//         newNode -> length = (int)strlen(arr[i]);
//         newNode -> nextNode = head;
//         head = newNode;
//     }
// }

void AllOne(char* arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
}

void printArray()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d\n", temp -> length);
        temp = temp -> nextNode;
    }
    printf("\n");
}

void main()
{
    char names[100][100] = {
        "amma",
        "barani",
        "nononono",
        "susmi"
    };

    AllOne(names, 4);
    printArray();
}