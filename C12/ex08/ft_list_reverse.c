/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:00:10 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:00:22 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*hd;
	t_list	*nxt;
	t_list	*befor;

	hd = *begin_list;
	befor = NULL;
	nxt = NULL;
	while (hd)
	{
		nxt = hd->next;
		hd->next = befor;
		befor = hd;
		hd = nxt;
	}
	*begin_list = befor;
}
