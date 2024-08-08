#include <stdio.h>
#include <stdlib.h>
#include "queue_linked.h"

void create_queue (queue *pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}

int is_queue_empty (queue *pq)
{
    return pq->front==NULL;
}

int is_queue_full (queue *pq)
{
    return 0;
}

void enqueue (entry_type element,queue *pq)
{
    node *pn=(node*)malloc(sizeof(node));
    pn->element=element;
    pn->next=NULL;
    if (!pq->rear)
    {
        pq->rear=pn;
    }
    else
    {
        pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;
}

void dequeu (entry_type *pe,queue *pq)
{
    node *pn=pq->front;
    *pe=pn->element;
    pq->front=pn->next;
    free (pn);
    if (!pq->front)
    {
        pq->rear=NULL;
    }
    pq->size--;
}

int queue_size (queue *pq)
{
    return pq->size;
}

void clear_queue (queue *pq)
{
    while (pq->front)
    {
        pq->rear=pq->front->next;
        free (pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}

void traverse_queue (queue *pq,void(*pf)(entry_type))
{
    for (node *pn=pq->front;pn;pn->next)
    {
        (*pf)(pn->element);
    }
}

