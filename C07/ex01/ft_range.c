/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:38:58 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:45:10 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	tab = (int *)malloc(sizeof(int) * range);
	if (!tab)
		return (0);
	i = 0;
	while (i < range)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
#include <stdio.h>
int main()
{
	int *tab = ft_range(5, 10);
	for (int i = 0; i < 5; i++)
		printf("%d\n", tab[i]); 
}
*/
