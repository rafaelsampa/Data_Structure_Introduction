
#include <stdio.h>
#include <stdbool.h>
#include "../../src/stacks/stack.h"
#include "../../src/queues/queue.h"
#include "reverse.h"



void Algorithm_Reverse_Queue_Using_Stack (Queue * queue, Stack * stack) { // Rev
    while (!Queue_IsEmpty(queue)) {
        
        int value = Queue_Dequeue(queue);
        Stack_Push(stack,value);
        
    }

    while (!Stack_IsEmpty(stack)) {
        
        int value = Stack_Pop(stack);
        Queue_Enqueue(queue, value);
        
    }

}


