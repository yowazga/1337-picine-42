/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:48:47 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:51:08 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_char(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int	num_word(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i])
	{
		while(str[i] && check_char(sep, str[i]) == 1)
			i++;
		if (str[i])
		{
			while(str[i] && check_char(sep, str[i]) == 0)
				i++;
			count++;
		}
	}
	return count;
}

void	copy_tab(char **tab, char *str, char *sep, int size)
{
	int	st;
	int	tb2;
	int	tb3;

	st = 0;
	tb2 = 0;
	while(tb2 < size)
	{
		while(str[st] && check_char(sep, str[st]) == 1)
			st++;
		tb3 = 0;
		while (str[st] &&  check_char(sep, str[st]) == 0)
		{
			tab[tb2][tb3] = str[st];
			st++;
			tb3++;
		
		}
		tab[tb2][tb3] = '\0';
		tb2++;
		
	}
	tab[tb2] = NULL;	
}

int	check_start(char *str, char *sep, int *start)
{
	int	count;

	count  = 0;
	while(str[*start] && check_char(sep, str[*start]) == 0)
	{
		count++;
		(*start)++;
	}
	return count;
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	int count;
	int  i;
	int  j;

	count = num_word(str, charset);
	tab = malloc(sizeof(char *) * (count + 1));
	j = 0;
	i = 0;
	while(i < count)
	{
		while(str[j] && check_char(charset, str[j]) == 1)
			j++;
		tab[i++] = malloc(check_start(str, charset, &j) + 1);
	}
	copy_tab(tab, str, charset, count);
	return tab;
}

/*
#include <stdio.h>
int main()
{
    char *str = "Hello Younes how are you!";
    char **tab = ft_split(str, " ");
    int i = 0;
    while(tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
}
*/