#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"

void creat_stack_q (stack_q *ps)
{
    create_queue (&ps->q1);
    create_queue (&ps->q2);
}

int is_stack_empty_q (stack_q *ps)
{
    return is_queue_empty(&ps->q2);
}

int is_stack_full_q (stack_q *ps)
{
    return 0;
}

void push_q (entry_type element,stack_q *ps)
{
    enqueue (element,&ps->q1);
    entry_type item;
    while (!is_queue_empty(&ps->q1))
    {
        dequeu  (&item,&ps->q1);
        enqueue (item,&ps->q2);
    }
}

void pop_q (entry_type *pe,stack_q *ps)
{
    dequeu (pe,&ps->q2);
}

int top_stack_q (stack_q *ps)
{
    return ps->q2->front->element;
}
