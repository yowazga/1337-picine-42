/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:44:10 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:37:27 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char src[] = "Hello Younes!";
	char dest[100];
	// we put the function inside printf to print the result of the function, because the function returns a pointer to the destination string
	printf("%s\n", ft_strcpy(dest, src)); // include <stdio.h> to use printf, this is just to test the function
	return 0;
}
*/
