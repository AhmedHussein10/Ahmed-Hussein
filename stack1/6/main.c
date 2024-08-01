#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct stack
{
    char entry[MAX];
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

int pop (stack *ps)
{
    return ps->entry[--ps->top];
}

int is_valid_parentheses (char *s)
{
    stack st;
    creat_stack (&st);
    char character;
    for (int i=0;s[i]!='\0';i++)
    {
        character=s[i];
        if (character=='[' || character=='{' || character=='(')
        {
            push (character,&st);
        }
        else if (character==']' || character=='}' || character==')')
        {
            if (is_stack_empty(&st))
            {
                return 0;
            }
            char top =pop (&st);
            if ((character==']'&&top!='[') || (character=='}'&&top!='{') || (character==')'&&top!='('))
            {
                return 0;
            }
        }
    }
    if (is_stack_empty (&st))
        return 1;
    else
        return 0;
}

int main()
{
   char *test1 ="[...(...){...}...]" ;
   char *test2 ="(...[...(...){...}]" ;
   if (is_valid_parentheses (test1))
   {
       printf ("%s is valid \n",test1);
   }
   else
   {
       printf ("%s is not valid \n",test1);
   }
   if (is_valid_parentheses (test2))
   {
       printf ("%s is valid \n",test2);
   }
   else
   {
       printf ("%s is not valid \n",test2);
   }


    return 0;
}
