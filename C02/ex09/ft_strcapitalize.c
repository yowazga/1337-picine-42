/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:59:26 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:40:51 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i - 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[j] >= '0' && str[j] <= '9')
					|| (str[j] >= 'A' && str[j] <= 'Z')
					|| (str[j] >= 'a' && str[j] <= 'z')))
						str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	here we can put the function ft_putstr to print the result because it returns a char*
	//printf("%s\n", str);  include <stdio.h> to use printf
	return 0;
}
*/
