/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:55:56 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:33:21 by yowazga          ###   ########.fr       */
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

/*
int main()
{
	char str[] = "Hello Younes!";
	int len = ft_strlen(str);
	//printf("%d\n", len);  include <stdio.h> to use printf
	return 0;
}
*/
