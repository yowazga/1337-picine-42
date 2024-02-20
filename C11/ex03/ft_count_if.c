/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:23:27 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:24:30 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	test_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			return 1;
		i++;
	}
	return 0;
}
int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return count;
}

int main()
{
	char *tab[] = {"younes333", "wazga", "10639","1073"};

	int res = ft_count_if(tab, 4 , &test_count);
	printf("%d", res);
}
