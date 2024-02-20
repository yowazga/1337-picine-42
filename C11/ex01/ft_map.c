/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:22:34 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:22:46 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	number(int n)
{
	n += n;
	return n;
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int	i;

	arr = malloc(sizeof(int) * length);
	if (!arr)
		return 0;

	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return arr;
}

#include <stdio.h>
int	main()
{
	int i;
	i = 0;
	int arr[] = {2, 5, 10};
	int *map = ft_map(arr, 3, &number);

	while (i < 3)
		printf("%d ", map[i++]);	
}
