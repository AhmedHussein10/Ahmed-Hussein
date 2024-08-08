#ifndef QUEUE_S_H_INCLUDED
#define QUEUE_S_H_INCLUDED
#include "stack.h"

typedef struct queue_s
{
    stack *s1;
    stack *s2;
}queue_s;

void create_queue (queue_s *pq);
int is_queue_empty (queue_s *pq);
int is_queue_full (queue_s *pq);
void enqueue (entry_type element,queue_s *pq);
void dequeue (entry_type *pe,queue_s *pq);
int queue_size (queue_s *pq);
void clear_queue (queue_s *pq);
#endif // QUEUE_S_H_INCLUDED
