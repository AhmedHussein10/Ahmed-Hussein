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

int is_stack_empty (stack *ps)
{
    return !ps->top;
}

void push (int item,stack *ps)
{
    ps->entry[ps->top++]=item;
}

void destroy_stack (stack *ps)
{
    ps->top=0;
}


int main()
{
    stack s;
    creat_stack (&s);
    int i;
    for (i=1;i<=10;i++)
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

    for (int i=s.top;i>0;i--)
    {
        printf ("Stack: %d\n",s.entry[i-1]);
    }

    destroy_stack (&s);

    printf ("After destroying stack : \n");
    if (is_stack_empty(&s))
        printf ("Stack is empty ");

    return 0;
}
