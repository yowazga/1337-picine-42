/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:54:52 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:56:10 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <string.h>
int	height(int left, int right)
{
	if(left > right)
		return(left);
	return(right);
}

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;
	
	if(root == NULL)
		return 0;
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return(height(left, right) + 1);	
}
