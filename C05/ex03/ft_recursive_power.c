/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:26:06 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:49:28 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main()
{
	int res = ft_recursive_power(5, 3);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/