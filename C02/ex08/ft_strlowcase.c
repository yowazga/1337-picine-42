/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:56:39 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:40:36 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i ++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "Hello Younes!";
	ft_strlowcase(str);
	here we can put the function ft_putstr to print the result because it returns a char*
	//printf("%s\n", str);  include <stdio.h> to use printf
	return 0;
}
*/
