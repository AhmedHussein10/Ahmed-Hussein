#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void create_stack (stack *ps)
{
    ps->top=NULL;
    ps->size=0;
}

int is_stack_empty (stack *ps)
{
    return ps->top==NULL;
}

int is_stack_full (stack *ps)
{
    return 0;
}

void push (entry_type element,stack *ps)
{
    node *pn=(node*) malloc(sizeof (node));
    pn->element=element;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}

void pop (entry_type *pe,stack *ps)
{
    *pe=ps->top->element;
    node *pn=ps->top;
    ps->top=pn->next;
    free (pn);
    ps->size--;
}

int stack_size (stack *ps)
{
    return ps->size;
}

void clear_stack (stack *ps)
{
    node *pn=ps->top;
    while (pn)
    {
        pn=pn->next;
        free (ps->top);
        ps->top=pn;
    }
    ps->size=0;
}

void traverse_stack (stack *ps,void (*pf)(entry_type))
{
    node *pn=ps->top;
    while (pn)
    {
        (*pf)(pn->element);
        pn=pn->next;
    }
}

