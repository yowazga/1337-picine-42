/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:34:47 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:34:12 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				s = tab[i];
				tab[i] = tab[j];
				tab[j] = s;
			}
			j++;
		}
		i++;
	}
}

/*
int main()
{
	int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 9;
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]); //include <stdio.h> to use printf, this just to test the function
	}
	return 0;
}
*/
