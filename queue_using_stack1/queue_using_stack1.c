#include <stdio.h>
#include <stdlib.h>
#include "queue_using_stack1.h"
#include "stack.h"

void creat_queue (queue *pq)
{
    creat_stack (&pq->s1);
    creat_stack (&pq->s2);
}

int is_queue_empty (queue *pq)
{
    return (is_stack_empty(&pq->s1)) &&(is_stack_empty(&pq->s2));
}

int is_queue_full (queue *pq)
{
    return  stack_size (&pq->s1)+stack_size (&pq->s2)==MAX;
}

void enqueue (entry_type element,queue *pq)
{
    push (element,&pq->s1);
}

void dequeu (entry_type *pe,queue *pq)
{
    while (!is_stack_empty (&pq->s1))
    {
        push (pop (&pq->s1),&pq->s2);
    }
    *pe= pop (&pq->s2);
}

int queue_size (queue *pq)
{
    return stack_size (&pq->s1)+stack_size (&pq->s2);
}

void traverse_queue (queue *pq,void (*pf) (entry_type))
{
    while (!is_stack_empty (&pq->s1))
    {
        push (pop (&pq->s1),&pq->s2);
    }
    for (int i=pq->s2.top-1;i>=0;i--)
    {
        (*pf) (pq->s2.entry[i]);
    }
}

void display (entry_type element)
{
    printf ("%d  ",element);
}

void clear_queue (queue *pq)
{
    clear_stack (&pq->s1);
    clear_stack (&pq->s2);
}

