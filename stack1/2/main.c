#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct
{
    int entry[MAX];
    int top;
}stack;


void creat_stack (stack *ps)
{
    ps->top=0;
}


void push (int item,stack *ps)
{
    ps->entry[ps->top++]=item;
}


int stack_first_element (stack *ps)
{
    return ps->entry[0];
}


int main()
{
    stack s;
    creat_stack(&s);
    for (int i=1; i<=MAX; i++)
    {
        push(i,&s);
    }

    printf ("The first element in the stack is %d",stack_first_element(&s));

    return 0;
}
