/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:50:07 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:50:21 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref , int (*cmpf)(void *, void *))
{
	void	*res;

	if(root)
	{
		res = btree_search_item(root->left, data_ref, cmpf);
		if(res)
			return res;
		if(cmpf(root->item , data_ref) == 0)
			return (root->item);
		res = btree_search_item(root->right, data_ref, cmpf);
		return res;
	}
	return NULL;
}

