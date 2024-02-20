/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:46:34 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:46:41 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list  *list;
	int	i;

	list = NULL;
	i = 0;
	while (i < size)
		ft_list_push_front(&list, strs[i++]);
	return (list);
}
