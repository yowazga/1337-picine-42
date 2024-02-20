/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:39:55 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:43:18 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}

/*
int main()
{
	char s1[] = "Hello Younes!";
	char s2[] = "Hello Younes!";
	int res = ft_strcmp(s1, s2);
	//printf("%d\n", res);  include <stdio.h> to use printf
	return 0;
}
*/
