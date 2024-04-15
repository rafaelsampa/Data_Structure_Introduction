#include <stdbool.h>
#include <stdio.h>

typedef struct queue Queue;

Queue * Queue_Create();
void Queue_Destroy(Queue * queue);
bool Queue_IsEmpty(Queue * queue);
void Queue_Enqueue(Queue * queue, int value);
int Queue_Dequeue(Queue * queue);
