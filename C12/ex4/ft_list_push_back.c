/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:45:25 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:45:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*hd;
	
	hd = *begin_list;
	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return;
	}
	while(hd->next)
		hd = hd->next;
	hd->next = ft_create_elem(data);
}
