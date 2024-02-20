/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:23:15 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:23:16 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	test_return(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return 0;
		i++;
	}
	return 1;
}

int	ft_any(char **tab, int(*f)(char *))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if(f(tab[i]) != 0)
			return 1;
		i++;
	}
	return 0;
}
int	main(int ac, char **av)
{
	av++;
	printf("%d", ft_any(av, &test_return));
}
