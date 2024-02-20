/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:06:11 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:07:09 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)(), void (*free_fct)(void *))
{
	t_list *list;
	t_list *bfr;
	t_list *afr;

	list = *begin_list;
	bfr = NULL;
	afr = NULL;
	while (list)
	{
		afr = list->next;
		if((*cmp)(list->data, data_ref) == 0)
		{
			if (bfr != NULL)
				bfr->next = afr;
			else
				*begin_list = afr;
			(*free_fct)(list->data);
			free(list);
		}
		else
			bfr = list;
		list = afr;
	}
}
