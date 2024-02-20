/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:27:57 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:29:34 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return 0;
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (tab[size])
		size++;
	i = 0;
	
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size )
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}

}

#include <stdio.h>
int main()
{
	char *string[] = {"younes", "wazga", "1337", NULL};
	int i;

	i = 0;
	ft_sort_string_tab(string);
	while (string[i])
	{
		printf("%s \n", string[i]);
		i++;
	
	}

}
