/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:59:04 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:45:22 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	range2;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range2 = max - min;
	tab = (int *)malloc (sizeof(int) * range2);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (range2);
}

/*
#include <stdio.h>
int main()
{
	int *tab;
	int size;
	size = ft_ultimate_range(&tab, 5, 10);
	for (int i = 0; i < 5; i++)
		printf("%d\n", tab[i]);
	printf("size: %d\n", size);
}
*/
