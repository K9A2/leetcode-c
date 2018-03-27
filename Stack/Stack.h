#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

#define StackElementType char

#endif

struct stack_node {
    StackElementType val;
    struct stack_node *next;
};

typedef struct stack_node StackNode;

struct stack {
    int size;
    struct stack_node *top;
};

typedef struct stack Stack;

Stack *createNewStack();

StackNode *createStackNode(StackElementType val);

void push(Stack *stack, StackElementType val);

StackElementType pop(Stack *stack);

void deleteStack(Stack *stack);
