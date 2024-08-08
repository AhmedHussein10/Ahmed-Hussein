#include <stdio.h>
#include <stdlib.h>
#include "queue_array.h"

void creat_queue (Queue *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

int is_queue_empty (Queue *pq)
{
    return (pq->size==0);
}

int is_queue_full (Queue *pq)
{
    return (pq->size==MAX);
}

void enqueue (entry_type element,Queue *pq)
{
    pq->rear=((pq->rear)+1)%MAX;
    pq->entry[pq->rear]=element;
    pq->size ++;
}

void dequeue (entry_type *element,Queue *pq)
{
    *element=pq->entry[pq->front];
    pq->front=((pq->front)+1)%MAX;
    pq->size --;
}

int queue_size (Queue *pq)
{
    return pq->size;
}

void traverse_queue (Queue *pq,void (*pf) (entry_type))
{
    int pos=pq->front;
    for (int i=0;i<MAX;i++)
    {
       (pf) (pq->entry[pos]);
       pos=(pos+1)%MAX;
    }
}

void clear_stack (Queue *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}







