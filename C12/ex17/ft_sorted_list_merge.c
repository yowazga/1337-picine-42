/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:15:56 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:16:59 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_marge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list *list1;
	t_list *list2;
	t_list *bfr;

	list1 = *begin_list1;
	list2 = begin_list2;
	bfr = NULL;
	while(list2)
	{
		list1 = *begin_list1;
		bfr = NULL;
		while(list1)
		{
			if((*cmp)(list1->data, list2->data) > 0)
			{
				bfr->next = list2;
				list2->next = list1;
			}
			list1 = list1->next;
		}
		list2 = list2->next;
	}
}
