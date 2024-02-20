/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:04:10 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:49:37 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

/*
int main()
{
	int res = ft_fibonacci(5);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
