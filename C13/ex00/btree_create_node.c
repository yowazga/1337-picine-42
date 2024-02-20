#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*elem;

	elem = malloc(sizeof(t_btree));
	if(elem)
	{
		elem->left = NULL;
		elem->right = NULL;
       		elem->item = item;
	}
    return elem;	       
}

