/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:11:36 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:11:37 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	test_char(char *sep, char c)
{
	int 	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return 1;
		i++;
	}
	return 0;
}
int	count_word(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && test_char(sep, str[i]) == 1)
			i++;
		if (str[i] && test_char(sep, str[i]) == 0)
		{
			while (str[i] && test_char (sep,str[i]) == 0)
				i++;
			count++;
		}

	}
	return count;
}
	
int	check_char_word(char *str, char *sep, int *start)
{
  	int	count;

	count = 0;
	while (str[*start] && test_char(sep, str[*start]) == 0)
	{
		count++;
		(*start)++;
	}	
	 return count;
}
void	copy_tab(char **tab, char *str, char *sep, char size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (str[i] && test_char(sep, str[i]) == 1)
			i++;
		k = 0;
		while(str[i] && test_char(sep, str[i]) == 0)
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int	count;
	int	i;
	int	j;

	count = count_word(str, charset);
	tab = malloc(sizeof(char *) * (count + 1));
	i = 0;
	j = 0;
	while(i < count)
	{
		while(str[j] && test_char(charset, str[j]) == 1)
			j++;
		tab[i++] = malloc(check_char_word(str, charset, &j) + 1);
	}
	copy_tab(tab, str, charset, count);
	return tab;
}

/*
int	main()
{
	char arr[] = "Hello Younes! This is a test string.";
	char sep[] = " ";

	char **ret = ft_split(arr, sep);
	int i = 0;

	while (ret[i])
		printf("%s \n", ret[i++]);
}
*/