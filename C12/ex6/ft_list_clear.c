/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:57:16 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:57:29 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	free_fct(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	while (begin_list) 
	{
		tmp = begin_list;
		begin_list = begin_list->next;

		free_fct(tmp->data);
		free(tmp);	
	}
}
