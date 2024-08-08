#include <stdio.h>
#include <stdlib.h>
#include "queue_s.h"
#include "stack.h"

void create_queue (queue_s *pq)
{
    create_stack (&pq->s1);
    create_stack (&pq->s2);
}

int is_queue_empty (queue_s *pq)
{
    return !(pq->s2->size);
}

int is_queue_full (queue_s *pq)
{
    return 0;
}

void enqueue (entry_type element,queue_s *pq)
{
    push (element,&pq->s1);
    int item;
    if (!is_stack_empty (&pq->s1))
    {
        pop (&item,&pq->s1);
    }
    push (item,&pq->s2);
    pq->s2->size++;
}

void dequeue (entry_type *pe,queue_s *pq)
{
    int item;
    pop (&item,&pq->s2);
    *pe=item;
    pq->s2->size--;
}

int queue_size (queue_s *pq)
{
    return pq->s2->size;
}

void clear_queue (queue_s *pq)
{
    clear_stack (&pq->s1);
    clear_stack (&pq->s2);

}


