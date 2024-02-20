/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:33:52 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:47:58 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkereur(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] <= 32)
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

int	ft_findchar(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	neg;
	int	bas_len;

	i = 0;
	res = 0;
	neg = -1;
	bas_len = ft_strlen(base);
	if (bas_len < 2)
		return (0);
	if (!(checkereur(base)))
		return (0);
	while (str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg *= -1;
	while (ft_findchar(str[i], base) < bas_len)
		res = res * bas_len - ft_findchar(str[i++], base);
	return (res * neg);
}

/*
int main()
{
	char str[] = "  -1234abc567";
	char base[] = "0123456789";
	int res = ft_atoi_base(str, base);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
