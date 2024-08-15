#include <stdio.h>
#include <stdlib.h>
#include "list.h"



int main()
{
    list l;
    create_list (&l);
    int item;

///////////////////////////////////////////////////
    printf ("The only node: \n");
    insert_list (0,1,&l);
    if (delete_list (0,&item,&l))
    {
       printf ("%d is deleted from list \n\n",item);
    }
    else
    {
        printf ("This node is not found \n\n");
    }
////////////////////////////////////////////////////

printf ("The first node: \n");
    insert_list (0,1,&l);
    insert_list (1,2,&l);
    insert_list (2,3,&l);
    insert_list (3,4,&l);
    insert_list (4,5,&l);

    if (delete_list (0,&item,&l))
    {
       printf ("%d is deleted from list \n\n",item);
    }
    else
    {
        printf ("This node is not found \n\n");
    }

//////////////////////////////////////////////////////

    printf ("The last node: \n");
    insert_list (0,1,&l);
    if (delete_list (4,&item,&l))
    {
       printf ("%d is deleted from list \n\n",item);
    }
    else
    {
        printf ("This node is not found \n\n");
    }
/////////////////////////////////////////////////////

printf ("The node is not found: \n");
    if (delete_list (10,&item,&l))
    {
       printf ("%d is deleted from list \n\n",item);
    }
    else
    {
        printf ("This node is not found \n\n");
    }


    return 0;
}
