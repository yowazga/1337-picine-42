/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:41:40 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:17:35 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int size;
	t_list *hd;
	
	size = 0;
	hd = begin_list;
	while (hd)
	{
		size++;
		hd = hd->next;
	}
	return size;
}
