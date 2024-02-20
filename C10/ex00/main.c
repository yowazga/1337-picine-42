/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:20:08 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:20:09 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>
#include  <fcntl.h>

int	ft_disply( char *file)
{
	int 	fd;
	int	size;
	char 	arr[20];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2,"Cannot read file.\n", 18);
		return 1;
	}
	while (1)
	{
		size = read(fd, arr, sizeof(arr));
		if (size <= 0)
			break;
		write(1, arr, size);
	}
	close(fd);
	return 0;
}
int main(int ac, char **av)
{

	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return 1;
	}
	if (ac > 2)
	{
		write(2, "Too many argumengts.\n", 21);
		return 1;
	}
	return ft_disply(av[1]);



}
