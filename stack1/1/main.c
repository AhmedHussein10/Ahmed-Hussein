#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct
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

int stack_size (stack *ps)
{
    return ps->top;
}

int is_stack_empty (stack *ps)
{
    return !ps->top;
}

int pop (stack *ps)
{
    return ps->entry[--ps->top];
}

int peak (stack *ps)
{
    return ps->entry[ps->top-1];
}

void display_stack (stack *ps)
{
    if (!is_stack_empty (ps))
    {
        for (int i=ps->top;i>0;i--)
        {
           printf ("stack: %d\n",ps->entry[i-1]);
        }
    }
    else
    {
        printf ("Stack is empty\n");
    }

}

void clear_stack (stack *ps)
{
    ps->top=0;
}

int main()
{
    stack s;
    creat_stack (&s);
    int i;
    for (i=1;i<=5;i++)
    {
        if (!is_stack_full (&s))
        {
            push (i,&s);
        }
    }
    display_stack (&s);
    printf ("\nSize of stack : %d\n",stack_size (&s));
    printf ("last element in the stack : %d\n",peak (&s));
    clear_stack (&s);
    printf ("\nAfter clearing stack \n");
    display_stack (&s);

    return 0;
}
