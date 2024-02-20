/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:28:12 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:01:26 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	while (src[i])
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stk;

	stk = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stk)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stk[i].size = ft_strlen(av[i]);
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		i++;
	}
	stk[i].str = 0;
	return (stk);
}
