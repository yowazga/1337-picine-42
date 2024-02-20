/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:30:08 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:31:28 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *emt;

	emt = *a;
	*a = *b;
	*b = emt;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[i]);
	}
	return 0;
}


void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while(tab[size])
		size++;
	i = 0;
	while(i < size - 1)
	{
		j = i + 1;
		while(j < size)
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;

		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	int i;
	char *str[] = {"younes", "wazga", "a", "b", NULL};

	ft_advanced_sort_string_tab(str, &ft_strcmp);
	i = - 1;
	while (str[++i])
		printf("%s\n", str[i]);

}
