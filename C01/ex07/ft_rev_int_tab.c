/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:03:15 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:33:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sw;

	i = 0;
	j = size -1;
	while (i < j)
	{
		sw = tab[i];
		tab[i] = tab[j];
		tab[j] = sw;
		i++;
		j--;
	}
}

/*
int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]); //include <stdio.h> to use printf, this just to test the function
	}
	return 0;
}
*/
