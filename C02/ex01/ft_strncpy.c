/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:51:13 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:37:15 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main()
{
	char src[] = "Hello Younes!";
	char dest[100];
	// we put the function inside printf to print the result of the function because the function returns a pointer to the destination string
	printf("%s\n", ft_strncpy(dest, src, 5)); // include <stdio.h> to use printf, this is just to test the function
	return 0;
}
*/
