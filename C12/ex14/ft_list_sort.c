/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:10:26 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:10:49 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list1;
	t_list *list2;
	void	*tmp;

	list1 = *begin_list;
	while (list1->next)
	{
		list2 = list1->next;
		while(list2)
		{
			if((*cmp)(list1->data,list2->data ) > 0)
			{
				tmp = list1->data;
				list1->data = list2->data;
				list2->data = tmp;
			}
			list2 = list2->next; 
		}
		list1 = list1->next;
	}
}
