#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int middle_data (list *pl);

int main()
{

    list l;
    create_list (&l);

    insert_list (0,1,&l);
    insert_list (1,2,&l);
    insert_list (2,3,&l);
    insert_list (3,4,&l);
    insert_list (4,5,&l);

    printf ("%d \n",middle_data (&l));

    return 0;
}

int middle_data (list *pl)
{
    node *pn=pl->head;
    int pos=list_size (pl)/2;
    for (int i=0;i<pos;i++)
    {
        pn=pn->next;
    }
    return pn->element;
}
