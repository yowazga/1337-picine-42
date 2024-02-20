/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:07:29 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:08:13 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;
	
	if(*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return;
	}
	list = *begin_list1;
	while(list->next)
		list = list->next;
	list->next = begin_list2; 
}
