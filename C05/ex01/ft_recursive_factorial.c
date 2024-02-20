/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:58:25 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:49:02 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
int main()
{
	int res = ft_recursive_factorial(5);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
