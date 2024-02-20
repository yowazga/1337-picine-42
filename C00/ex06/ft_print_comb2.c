/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:12 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:25:29 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48, a % 10 + 48);
			write(1, " ", 1);
			ft_putchar(b / 10 + 48, b % 10 + 48);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int main()
{
	ft_print_comb2();
	return 0;
}
*/
