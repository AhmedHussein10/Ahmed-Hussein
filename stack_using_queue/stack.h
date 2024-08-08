#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "queue.h"

typedef struct stack_q
{
    queue *q1;
    queue *q2;
}stack_q;

void creat_stack_q (stack_q *ps);
int is_stack_empty_q (stack_q *ps);
int is_stack_full_q (stack_q *ps);
void push_q (entry_type element,stack_q *ps);
void pop_q (entry_type *pe,stack_q *ps);
int top_stack_q (stack_q *ps);


#endif // STACK_H_INCLUDED
