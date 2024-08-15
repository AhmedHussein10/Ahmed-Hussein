#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 3

typedef struct
{
    int entry[MAX];
    int top;
}stack;

void creat_stack (stack *ps);
int is_stack_full (stack *ps);
void push (int item,stack *ps);
int stack_size (stack *ps);
int is_stack_empty (stack *ps);
int pop (stack *ps);
int peak (stack *ps);
void display_stack (stack *ps);
void clear_stack (stack *ps);


#endif // STACK_H_INCLUDED
