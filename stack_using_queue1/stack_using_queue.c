#include <stdio.h>
#include <stdlib.h>
#include "stack_using_queue.h"

void create_stack (stack *ps)
{
    creat_queue (&ps->q1);
    creat_queue (&ps->q2);
}

int is_stack_empty (stack *ps)
{
    return (is_queue_empty(&ps->q1))&&(is_queue_empty(&ps->q2));
}

int is_stack_full (stack *ps)
{
    return ps->q1.size+ps->q2.size==MAX;
}

void push (entry_type element,stack *ps)
{
    enqueue (element,&ps->q1);
}

void pop (entry_type *pe,stack *ps)
{
    int item;
    while (!(ps->q1.front==ps->q1.rear))
    {
        dequeue (&item,&ps->q1);
        enqueue (item,&ps->q2);
    }
    dequeue (pe,&ps->q1);
    Queue temp=ps->q1;
    ps->q1=ps->q2;
    ps->q2=temp;
}

void peek (entry_type *pe,stack *ps)
{
    int item;
    while (!(ps->q1.front==ps->q1.rear))
    {
        dequeue (&item,&ps->q1);
        enqueue (item,&ps->q2);
    }
    dequeue (pe,&ps->q1);
    enqueue (*pe,&ps->q2);
    Queue temp=ps->q1;
    ps->q1=ps->q2;
    ps->q2=temp;
}

int stack_size (stack *ps)
{
    return ps->q1.size+ps->q2.size;
}

void clear_stack (stack *ps)
{
    clear_queue (&ps->q1);
    clear_queue (&ps->q2);
}

