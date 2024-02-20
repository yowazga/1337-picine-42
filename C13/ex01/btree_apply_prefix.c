/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:45:14 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:45:32 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_pprefix(t_btree *root, void (*applyf)(void *))
{
	if(root)
	{
		applyf(root->item);
		btree_apply_pprefix(root->left, applyf);
		btree_apply_pprefix(root->right, applyf);
	}
}
