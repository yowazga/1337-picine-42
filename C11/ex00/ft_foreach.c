/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:22:19 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:22:20 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= - 1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}


void	ft_freach(int *tab, int leangth, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < leangth)
	{
		f(tab[i++]);
		write(1, ", ", 2);
	}

}
int	main()
{
	int arr[] = {5,10,15};
	ft_freach(arr, 3, &ft_putnbr);

}
