/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:48:43 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:48:52 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if(*root == NULL)
	{
		*root = btree_create_node(item);
		return;
	}
	if(cmpf(item , (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
		
	else 
		btree_insert_data(&(*root)->right, item, cmpf);
}
