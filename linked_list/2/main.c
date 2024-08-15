#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void reverse_list (list *pl)
{
    node *pc=pl->head;
    node *pn,*pp=NULL;
    while (pc)
    {
        pn=pc->next;
        pc->next=pp;
        pp=pc;
        pc=pn;
    }
    pl->head=pp;
}

int main()
{
    list l;
    create_list (&l);

    insert_list (0,10,&l);
    insert_list (1,20,&l);
    insert_list (2,30,&l);
    insert_list (3,40,&l);
    insert_list (4,50,&l);

    printf ("List : ");
    traverse_list (&l,display);
    printf ("\n\n");

    printf ("Traversed list : ");
    reverse_list (&l);
    traverse_list (&l,display);

    return 0;
}
