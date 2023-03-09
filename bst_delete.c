#include <stdio.h>

struct Node
{
    int data;
    struct Node* leftElem;
    struct Node* rightElem;
};

struct Node* minValueNode(struct Node* node)
{
    struct Node* temp = node;
    while(temp && temp -> leftElem != NULL)
    {
        temp = temp -> leftElem;
    }
    return temp;
}

struct Node* deleteNode(struct Node* rootNode, int value)
{
    if (rootNode == NULL)
    {
        return;
    } else if (rootNode -> data < value)
    {
        rootNode -> leftElem = deleteNode(rootNode -> leftElem, value);
    } else if (rootNode -> data > value)
    {
        rootNode -> rightElem = deleteNode(rootNode -> rightElem, value);
    } else 
    {
        if (rootNode -> leftElem == NULL)
        {
            struct Node* temp = rootNode -> rightElem;
            free(rootNode);
            return temp;
        } else if (rootNode -> rightElem == NULL)
        {
            struct Node* temp = rootNode -> leftElem;
            free(rootNode);
            return temp;
        }
        struct Node* temp = minValueNode(rootNode -> rightElem);
        rootNode -> data = temp -> data;
        rootNode -> rightElem = deleteNode(rootNode -> rightElem, temp -> data);
    }
}