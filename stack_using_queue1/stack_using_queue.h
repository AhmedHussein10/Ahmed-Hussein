#ifndef STACK_USING_QUEUE_H_INCLUDED
#define STACK_USING_QUEUE_H_INCLUDED
#include "queue.h"

typedef struct stack
{
    Queue q1;
    Queue q2;
}stack;

void create_stack (stack *ps);
int is_stack_empty (stack *ps);
int is_stack_full (stack *ps);
void push (entry_type element,stack *ps);
void pop (entry_type *pe,stack *ps);
void peek (entry_type *pe,stack *ps);
int stack_size (stack *ps);
void clear_stack (stack *ps);


#endif // STACK_USING_QUEUE_H_INCLUDED
