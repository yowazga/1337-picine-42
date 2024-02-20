#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int(*cmp)())
{
	t_list *list;
	t_list *new;
	t_list *bfr;

	list = *begin_list;
	new = ft_create_elem(data);
	bfr = NULL;
	while(list && (*cmp)(new->data, list->data) > 0)
	{
		bfr = list;
		list = list->next;
	}
	if(bfr == NULL)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		bfr->next = new;
		new->next = list;
	}
}
