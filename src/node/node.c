#include "node.h"

Node* node_create(int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));

    // Return when node is not allocated
    if(newNode == NULL)
    {
        fprintf(stderr, "Error: Could not create node.\n");
        return NULL;
    }

    // Initializing node
    newNode->value = value;
    newNode->next = NULL;

    return newNode;
}

void node_delete(Node** nodePtr)
{
    // Return when node is deallocated
    if(*nodePtr == NULL)
    {
        return;
    }

    // Clearing node
    (*nodePtr)->value = 0;
    (*nodePtr)->next = NULL;

    // Freeing node
    free(*nodePtr);
    *nodePtr = NULL;
}