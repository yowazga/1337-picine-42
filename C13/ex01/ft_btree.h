/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:43:55 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 19:44:13 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
#define	FT_BTREE_H

#include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree *left;
	struct s_btree *right;
	void		*item;
} t_btree;

#endif
