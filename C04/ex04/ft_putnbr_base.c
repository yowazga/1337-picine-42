/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:23:48 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:47:41 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	chek(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) < 2)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (!(chek(base)))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= ft_strlen(base))
	{
		ft_putnbr_base(n / ft_strlen(base), base);
		ft_putnbr_base(n % ft_strlen(base), base);
	}
	else
		ft_putchar(base[n]);
}

/*
int main()
{
	ft_putnbr_base(42, "0123456789");
	ft_putnbr_base(42, "01");
	ft_putnbr_base(42, "0123456789abcdef");
	ft_putnbr_base(42, "poneyvif");
	return 0;
}
*/
