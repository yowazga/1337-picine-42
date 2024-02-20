/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:27:56 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:46:24 by yowazga          ###   ########.fr       */
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
	int res = ft_strlen(str);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
