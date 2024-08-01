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


void copy_stack (stack *ps1,stack *ps2)
{
    ps2->top=ps1->top;
    for (int i=0;i<(ps2->top);i++)
    {
        ps2->entry[i]=ps1->entry[i];
    }
}

int main()
{
    stack s1;
    creat_stack (&s1);
    int i;
    for (i=1;i<=10;i++)
    {
        if (!is_stack_full(&s1))
        {
            push (i,&s1);
        }
        else
        {
            printf ("stack is full \n");
            break;
        }
    }
    stack s2;
    creat_stack (&s2);
    copy_stack (&s1,&s2);

    for (int i=s2.top;i>0;i--)
    {
        printf ("S2: %d\n",s2.entry[i-1]);
    }
    return 0;
}
