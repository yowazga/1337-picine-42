/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:06:41 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:49:14 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
int main()
{
	int res = ft_iterative_power(5, 3);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
