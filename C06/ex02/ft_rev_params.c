/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:50:43 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:36:05 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*This program takes a list of strings as arguments and prints them in reverse order.
*/
int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		j--;
		write(1, "\n", 1);
	}
}

