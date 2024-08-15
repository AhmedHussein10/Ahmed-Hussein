#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int max_data (list *pl)
{
    if (!is_list_empty (pl))
    {
        node *pn=pl->head;
        int max=pn->element;
        pn=pn->next;
        while (pn)
        {
            if ((pn->element)>max)
                max=pn->element;
            pn=pn->next;
        }
        return max;
    }
    else
        return 0;
}



int main()
{
    list l;
    create_list (&l);

    insert_list (0,3,&l);
    insert_list (1,1,&l);
    insert_list (2,4,&l);
    insert_list (3,5,&l);
    insert_list (4,2,&l);

    if (max_data (&l))
    {
        printf ("Maximum data value in the list : %d",max_data (&l));
    }
    else
    {
        printf ("List is empty");
    }

    return 0;
}
