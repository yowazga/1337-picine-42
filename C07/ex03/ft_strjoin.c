/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:20:12 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:45:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	return (len);
}

int	copyfrom(int i, char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*s;

	i = 0;
	j = 0;
	len = total_len(size, strs, sep);
	s = malloc(sizeof(char) * len + 1);
	while (j < size)
	{
		i = copyfrom(i, s, strs[j]);
		if (j != size - 1)
			i = copyfrom(i, s, sep);
		j++;
	}
	s[i] = 0;
	return (s);
}

/*
#include <stdio.h>
int main()
{
	char *strs[] = {"Hello", "Younes", "!"};
	char *sep = " ";
	char *s = ft_strjoin(3, strs, sep);
	printf("%s\n", s);
	free(s);
}
*/
