#ifndef QUEUE_ARRAY_H_INCLUDED
#define QUEUE_ARRAY_H_INCLUDED

#define MAX 3

typedef int entry_type;

typedef struct
{
    int front;
    int rear;
    int size;
    entry_type entry[MAX];
}Queue;

void creat_queue (Queue *pq);
int is_queue_empty (Queue *pq);
int is_queue_full (Queue *pq);
void enqueue (entry_type element,Queue *pq);
void dequeue (entry_type *element,Queue *pq);
int queue_size (Queue *pq);
void traverse_queue (Queue *pq,void (*pf) (entry_type));
void clear_stack (Queue *pq);


#endif // QUEUE_ARRAY_H_INCLUDED
