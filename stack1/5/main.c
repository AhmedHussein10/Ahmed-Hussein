#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct stack
{
    int entry[MAX];
    int top;
}stack;

void creat_stack (stack *ps)
{
    ps->top=0;
}

int is_stack_full (stack *ps)
{
    return ps->top==MAX;
}

void push (int item,stack *ps)
{
    ps->entry[ps->top++]=item;
}

int is_stack_empty (stack *ps)
{
    return !ps->top;
}

int stack_size (stack *ps)
{
    return ps->top;
}

int main()
{
    stack s;
    creat_stack (&s);
    int i;
    for (i=1;i<=15;i++)
    {
        if (!is_stack_full(&s))
        {
            push (i,&s);
        }
        else
        {
            printf ("stack is full \n");
            break;
        }
    }
    printf ("Size of stack is %d",stack_size(&s));

    return 0;
}
