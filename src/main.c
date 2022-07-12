#include <stdio.h>

#include "stack/stack.h"

int main()
{
    Stack* stack = stack_create();
    stack_delete(&stack);

    if(stack == NULL)
    {
        printf("It works");
    }
    else
    {
        printf("It doesn't work");
    }

    return 0;
}