/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:19:34 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:49:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	while (i < nb / 2 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int main()
{
	int res = ft_sqrt(16);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
