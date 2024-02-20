/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:58:13 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:36:17 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
*This program takes a list of strings as arguments and prints them in ascending order.
*/
void	ft_putstr( char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*s;

	s = *a;
	*a = *b;
	*b = s;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = i + 1;
			while (av[j])
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (av[i])
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}

