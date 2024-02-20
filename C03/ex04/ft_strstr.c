/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:41:05 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:44:36 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
		i = 0;
	}
	return (0);
}

/*
int main()
{
	char str[] = "Hello Younes!";
	char to_find[] = "You";
	char *res = ft_strstr(str, to_find);
	//printf("%s\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
