#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

#define QUEUE_MAX_SIZE 100

struct queue {
    int head;
    int tail;
    int size;
    int *values;
};

Queue *Queue_Create() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    if (queue == NULL) {
        printf("Erro ao alocar memória para a fila.\n");
        return 0;
    }

    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
    queue->values = (int *)malloc(sizeof(int) * QUEUE_MAX_SIZE);
    if (queue->values == NULL) {
        printf("Erro ao alocar memória para os valores da fila.\n");
        return 0;
    }

    return queue;
}

void Queue_Destroy(Queue *queue) {
    free(queue->values);
    free(queue);
}

bool Queue_IsEmpty(Queue *queue) {
    return queue->size == 0;
}

void Queue_Enqueue(Queue *queue, int value) {
    if (queue->size >= QUEUE_MAX_SIZE) {
        printf("Erro: a fila está cheia.\n");
        return;
    }

    queue->values[queue->tail] = value;
    queue->tail = (queue->tail + 1) % QUEUE_MAX_SIZE;
    queue->size++;
}

int Queue_Dequeue(Queue *queue) {
    if (Queue_IsEmpty(queue)) {
        printf("Erro: a fila está vazia.\n");
        return 0;
    }

    int value = queue->values[queue->head];
    queue->head = (queue->head + 1) % QUEUE_MAX_SIZE;
    queue->size--;
    return value;
}
