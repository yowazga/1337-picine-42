/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:20:14 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:20:15 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}
void	display_error(char *file);

void	read_and_display(int fd, char *file)
{
	int	size;
	char	arr[4000];
	
	while (1)
	{
		size = read(fd, arr, sizeof(arr));
			if(size <= 0)
				break;
		write(1, arr, size);
	}
	if (size == -1)
		display_error(file);	
}
void	display_error(char *file)
{
	write(2, "ft_cat: ", 8);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2 );
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}



int	main(int ac, char **av)
{
	int	i;
	int	fd;

	i = 1;
	if (ac == 1)
		read_and_display(0, "stdin");
	else
	{
		while (i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				display_error(av[i]);
			else
			{
				read_and_display(fd, basename(av[i]));
				close(fd);
			}
			i++;
		}	
	}
}
