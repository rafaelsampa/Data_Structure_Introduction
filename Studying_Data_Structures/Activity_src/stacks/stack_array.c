#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"


struct stack {
    int top;
    int * values;
};


Stack * Stack_Create () {
    Stack * stack = (Stack *) malloc(sizeof(Stack));
    if(stack == NULL){
        return NULL;
    }
    stack->top = 0;
    stack->values = (int *) malloc(sizeof(int) * 10000);
    return stack;
}

void Stack_Destroy (Stack * stack) {
    free(stack);
}
bool Stack_IsEmpty (Stack * stack) {
    return stack->top == 0;
}
void Stack_Push (Stack * stack, int value) {
    *(stack->values + stack->top) = value;
    stack->top++;
}

int Stack_Pop (Stack * stack) {
    stack->top--;
    return *(stack->values + stack->top);
}
