/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:59:26 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:43:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	i = 0;
	while (src[i])
	{
		dest[j] = src [i];
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
	ft_strcat(dest, src);
	//printf("%s\n", dest);  include <stdio.h> to use printf
	return 0;
}
*/
