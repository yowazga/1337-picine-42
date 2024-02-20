/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:25:54 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:25:15 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				if (a < 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int main()
{
	ft_print_comb();
	return 0;
}
*/
