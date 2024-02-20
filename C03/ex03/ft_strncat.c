/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:30:14 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:44:08 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[20] = "Hello ";
	char src[] = "Younes!";
	char *res = ft_strncat(dest, src, 3);
	//printf("%s\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
