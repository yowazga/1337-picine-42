/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:38:21 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:38:25 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list	*ft_create_elem(void *data)
{
	 t_list *new;

	new = malloc(sizeof(t_list));
	if(new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
