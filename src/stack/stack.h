#pragma once

#include "../node/node.h"

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    Node* top;
};

typedef struct stack Stack;

Stack* stack_create();
void stack_delete(Stack** stackPtr);

// void stack_push(int value, Stack* stack);
// void stack_pop(Stack* stack);
// Node* stack_peek(Stack* stack);
// int stack_isEmpty(Stack* stack);

// void stack_print(Stack* stack);