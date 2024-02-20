/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:25:31 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:26:00 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	div(int a, int b)
{
	return a / b;
}
int	mult(int a, int b)
{
		return a * b;
}
int	mod(int a, int b)
{
		return a % b;
}
int	sub(int a, int b)
{
	return a - b;
}

int	add(int	a, int	b)
{
	return a + b;
}
int	start(int a, int b , char op)
{
	int	(*operaters[5])(int , int);

	operaters[0] = &add;
	operaters[1] = &sub;
	operaters[2] = &mod;
	operaters[3] = &mult;
	operaters[4] = &div;

	if (op == '+')
		return operaters[0](a, b);
	else if (op == '-')
		return operaters[1](a, b);
	else if (op == '%')
		return operaters[2](a, b);
	else if (op == '*')
		return operaters[3](a, b);
	return operaters[4](a, b);
}

void	ft_do_op(char *num1, char *op, char *num2)
{
	int n1;
	int n2;
	int	res;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);

	if (!(op[0] == '-' || op[0] == '*' || op[0] == '/' || op[0] == '%' || op[0] == '+'))
		write(1, "0", 1);

	else if (op[0] == '/' && n2 == 0)
		write (2, "Stop : division by zero", 23);
	else if (op[0] == '%' && n2 == 0)
		write (2, "Stop : moudlo by zero", 21);
	else
	{
		res = start(n1, n2, op[0]);
		ft_putnbr(res);
	}
	write (1, "\n", 1);
}


int	main(int ac, char **av)
{
	if (ac == 4 )
		ft_do_op(av[1], av[2], av[3]);
}
