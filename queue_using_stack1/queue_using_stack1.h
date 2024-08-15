#ifndef QUEUE_USING_STACK1_H_INCLUDED
#define QUEUE_USING_STACK1_H_INCLUDED
#include "stack.h"

typedef int entry_type;

typedef struct queue
{
    stack s1;
    stack s2;
}queue;


void creat_queue (queue *pq);
int is_queue_empty (queue *pq);
int is_queue_full (queue *pq);
void enqueue (entry_type element,queue *pq);
void dequeu (entry_type *pe,queue *pq);
int queue_size (queue *pq);
void traverse_queue (queue *pq,void (*pf) (entry_type));
void display (entry_type element);
void clear_queue (queue *pq);

#endif // QUEUE_USING_STACK1_H_INCLUDED
