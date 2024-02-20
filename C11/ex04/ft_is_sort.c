/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:24:49 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:24:50 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	test_sort(int n1, int n2)
{
	
		if (n1 < n2)
			return 1;
		return 0;
}


int	ft_is_sort(int	*tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;

	while(j < length)
	{
		if (f(tab[i], tab[j]) == 0)
			return 0;
		i++;
		j++;

	}
	return 1;
}
int	main()
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	int	res = ft_is_sort(tab, 6, &test_sort);
	printf("%d", res);

}

