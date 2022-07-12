#pragma once

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;
};

typedef struct node Node;

Node* node_create(int value);
void node_delete(Node** nodePtr);