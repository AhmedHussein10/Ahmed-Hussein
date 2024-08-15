#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int nodes_sum (list *pl)
{
    int sum;
    node *pn=pl->head;
    while (pn)
    {
        sum+=pn->element;
        pn=pn->next;
    }
    return sum;
}

int main()
{
    list l;
    create_list (&l);

    insert_list (0,1,&l);
    insert_list (1,2,&l);
    insert_list (2,3,&l);
    insert_list (3,4,&l);
    insert_list (4,5,&l);

    printf ("sum of nodes: %d",nodes_sum (&l));

    return 0;
}
