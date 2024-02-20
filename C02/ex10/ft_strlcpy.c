/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:12:59 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:41:19 by yowazga          ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				tai;

	i = 0;
	tai = ft_strlen(src);
	while ((i < size - 1) && (src[i]) && (size != 0))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (tai);
}

/*
int main()
{
	char src[] = "Hello Younes!";
	char dest[20];
	unsigned int res = ft_strlcpy(dest, src, 5);
	//printf("%s\n", dest);  include <stdio.h> to use printf
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
