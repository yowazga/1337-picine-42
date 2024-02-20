/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:04:05 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:48:53 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	while (nb)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*
int main()
{
	int res = ft_iterative_factorial(5);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
