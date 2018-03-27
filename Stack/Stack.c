#include "Stack.h"

Stack *createNewStack() {
    Stack *newStack = (Stack *) calloc(1, sizeof(Stack));
    return newStack;
}

StackNode *createStackNode(StackElementType val) {
    StackNode *newNode = (StackNode *) calloc(1, sizeof(StackNode));
    newNode->val = val;
    return newNode;
}

void push(Stack *stack, StackElementType val) {

    if (stack == NULL) {
        return;
    }

    StackNode *newNode = createStackNode(val);

    newNode->next = stack->top;
    stack->top = newNode;
    stack->size += 1;

}

StackElementType pop(Stack *stack) {

    if (stack == NULL || stack->top == NULL) {
        return NULL;
    }

    StackElementType top = (stack->top)->val;
    stack->top = (stack->top)->next;
    stack->size -= 1;

    return top;
}

void deleteStack(Stack *stack) {

    /* Delete nodes */
    StackNode *f = stack->top;
    StackNode *n = f->next;
    while (n != NULL) {
        free(f);
        f = n;
        n = n->next;
    }
    free(f);

    /* Delete stack */
    free(stack);

}

StackElementType getTop(Stack *stack) {
    return stack == NULL || stack->size == 0 ? (StackElementType) NULL : (stack->top)->val;
}