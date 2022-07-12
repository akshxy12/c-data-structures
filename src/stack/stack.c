#include "stack.h"

Stack* stack_create()
{
    Stack* newStack = (Stack*)malloc(sizeof(Stack));

    // Return when stack is not allocated
    if(newStack == NULL)
    {
        fprintf(stderr, "Error: Could not create stack.\n");
        return NULL;
    }

    newStack->top = NULL;
    return newStack;
}

void stack_delete(Stack** stackPtr)
{
    // Return if stack is deallocated
    if(*stackPtr == NULL)
    {
        return;
    }

    // Clearing stack
    Node* cur = (*stackPtr)->top;
    Node* temp = NULL;

    if(cur != NULL)
    {
        while(cur != NULL)
        {
            temp = cur;
            cur = cur->next;

            node_delete(&temp);
        }
    }

    free(*stackPtr);
    *stackPtr = NULL;
}